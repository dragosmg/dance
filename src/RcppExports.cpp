// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bolero_check_results
void bolero_check_results(SEXP steps, SEXP rows, SEXP nsteps_);
RcppExport SEXP _dance_bolero_check_results(SEXP stepsSEXP, SEXP rowsSEXP, SEXP nsteps_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type nsteps_(nsteps_SEXP);
    bolero_check_results(steps, rows, nsteps_);
    return R_NilValue;
END_RCPP
}
// bolero_lgl_steps_to_indices
SEXP bolero_lgl_steps_to_indices(SEXP steps, SEXP n_steps_, SEXP original_rows);
RcppExport SEXP _dance_bolero_lgl_steps_to_indices(SEXP stepsSEXP, SEXP n_steps_SEXP, SEXP original_rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type n_steps_(n_steps_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type original_rows(original_rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(bolero_lgl_steps_to_indices(steps, n_steps_, original_rows));
    return rcpp_result_gen;
END_RCPP
}
// salsa_check_sizes
void salsa_check_sizes(SEXP steps, SEXP rows, SEXP n_formulas_);
RcppExport SEXP _dance_salsa_check_sizes(SEXP stepsSEXP, SEXP rowsSEXP, SEXP n_formulas_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type n_formulas_(n_formulas_SEXP);
    salsa_check_sizes(steps, rows, n_formulas_);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dance_bolero_check_results", (DL_FUNC) &_dance_bolero_check_results, 3},
    {"_dance_bolero_lgl_steps_to_indices", (DL_FUNC) &_dance_bolero_lgl_steps_to_indices, 3},
    {"_dance_salsa_check_sizes", (DL_FUNC) &_dance_salsa_check_sizes, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_dance(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
