#' ballet
#'
#' `ballet()` iterates on the groups, as identified by [dplyr::group_rows()]),
#' and applies the [choreography()] to each group.
#'
#' @param .tbl A data frame
#' @param ... Description of the columns to create, see [choreography()] for details.
#' @param .env parent environment of the function generated by [choreography()]
#'
#' @details
#' The grouping structure of `.tbl` defines the number of groups `n_groups` and the
#' formulas in `...` gives the number of dance moves `n_moves`
#'
#' @return a list of 2 elements
#'
#'  - `ptypes` : a list of `n_moves` types, in the sense of the `.ptype` argument to [vctrs::vec_c()]
#'  - `steps` : a list of `n_groups` results, each of size `n_moves`
#'
#' @examples
#' data <- iris %>%
#'   group_by(Species)
#'
#' # most dance functions get the result of ballet()
#' # and then process it
#' c(ptypes, steps) %<-%
#'   ballet(data,
#'     Sepal.Length = ~mean(Sepal.Length),
#'     Sepal.Width  = ~mean(Sepal.Width)
#'   )
#' ptypes
#' steps
#'
#' purrr::transpose(steps)
#' purrr::map_dbl(steps, 1)
#' purrr::map_dbl(steps, 2)
#'
#' @export
ballet <- function(.tbl, ..., .env = caller_env()) {
  set_tbl(.tbl)
  formulas <- list2(...)

  assert_that(
    all(map_lgl(formulas, is_formula)),
    msg = "`...` should be a list of formulas"
  )

  rows <- group_rows(.tbl)
  n_groups <- length(rows)

  # the right hand side of the formula give the type
  # empty gives NULL whih means guessing the type
  ptypes <- map(formulas, ~eval_bare(f_lhs(.x), f_env(.x)))

  # for each group, apply the choreography derived from the formulas
  moves <- choreography(.tbl, ..., .env = .env)
  steps <- map(rows, moves)

  list(ptypes = ptypes, steps = steps)
}
