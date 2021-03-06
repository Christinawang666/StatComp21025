// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_pcov
List rcpp_pcov(Eigen::MatrixXd& X, Eigen::MatrixXd& Y, int R, bool term_S2);
RcppExport SEXP _pit_rcpp_pcov(SEXP XSEXP, SEXP YSEXP, SEXP RSEXP, SEXP term_S2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type R(RSEXP);
    Rcpp::traits::input_parameter< bool >::type term_S2(term_S2SEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pcov(X, Y, R, term_S2));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pht
List rcpp_pht(Eigen::MatrixXd& X, Eigen::MatrixXd& Y, int R);
RcppExport SEXP _pit_rcpp_pht(SEXP XSEXP, SEXP YSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pht(X, Y, R));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pit_rcpp_pcov", (DL_FUNC) &_pit_rcpp_pcov, 4},
    {"_pit_rcpp_pht", (DL_FUNC) &_pit_rcpp_pht, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_pit(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
