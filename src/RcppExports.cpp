// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cr_estim
NumericMatrix cr_estim(arma::mat& Y, arma::mat& Delta, arma::mat& X);
RcppExport SEXP _ADAPT_cr_estim(SEXP YSEXP, SEXP DeltaSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cr_estim(Y, Delta, X));
    return rcpp_result_gen;
END_RCPP
}
// boot_estim
NumericMatrix boot_estim(arma::mat& Y, arma::mat& Delta, arma::mat& X, size_t boot_replicate, size_t n_boot_gene);
RcppExport SEXP _ADAPT_boot_estim(SEXP YSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP boot_replicateSEXP, SEXP n_boot_geneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< size_t >::type boot_replicate(boot_replicateSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_boot_gene(n_boot_geneSEXP);
    rcpp_result_gen = Rcpp::wrap(boot_estim(Y, Delta, X, boot_replicate, n_boot_gene));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ADAPT_cr_estim", (DL_FUNC) &_ADAPT_cr_estim, 3},
    {"_ADAPT_boot_estim", (DL_FUNC) &_ADAPT_boot_estim, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_ADAPT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
