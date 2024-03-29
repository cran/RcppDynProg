// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// const_cost
double const_cost(NumericVector y, NumericVector w, const int min_seg, const int i, const int j);
RcppExport SEXP _RcppDynProg_const_cost(SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(const_cost(y, w, min_seg, i, j));
    return rcpp_result_gen;
END_RCPP
}
// const_costs
NumericMatrix const_costs(NumericVector y, NumericVector w, const int min_seg, IntegerVector indices);
RcppExport SEXP _RcppDynProg_const_costs(SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(const_costs(y, w, min_seg, indices));
    return rcpp_result_gen;
END_RCPP
}
// const_cost_logistic
double const_cost_logistic(NumericVector y, NumericVector w, const int min_seg, const int i, const int j);
RcppExport SEXP _RcppDynProg_const_cost_logistic(SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(const_cost_logistic(y, w, min_seg, i, j));
    return rcpp_result_gen;
END_RCPP
}
// const_costs_logistic
NumericMatrix const_costs_logistic(NumericVector y, NumericVector w, const int min_seg, IntegerVector indices);
RcppExport SEXP _RcppDynProg_const_costs_logistic(SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(const_costs_logistic(y, w, min_seg, indices));
    return rcpp_result_gen;
END_RCPP
}
// summarize_input
List summarize_input(NumericVector x, NumericVector y, NumericVector w, const int i, const int j, const int skip);
RcppExport SEXP _RcppDynProg_summarize_input(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP iSEXP, SEXP jSEXP, SEXP skipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    Rcpp::traits::input_parameter< const int >::type skip(skipSEXP);
    rcpp_result_gen = Rcpp::wrap(summarize_input(x, y, w, i, j, skip));
    return rcpp_result_gen;
END_RCPP
}
// lin_cost
double lin_cost(NumericVector x, NumericVector y, NumericVector w, const int min_seg, const int i, const int j);
RcppExport SEXP _RcppDynProg_lin_cost(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_cost(x, y, w, min_seg, i, j));
    return rcpp_result_gen;
END_RCPP
}
// lin_costs
NumericMatrix lin_costs(NumericVector x, NumericVector y, NumericVector w, const int min_seg, IntegerVector indices);
RcppExport SEXP _RcppDynProg_lin_costs(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_costs(x, y, w, min_seg, indices));
    return rcpp_result_gen;
END_RCPP
}
// lin_cost_logistic
double lin_cost_logistic(NumericVector x, NumericVector y, NumericVector w, const int min_seg, const int i, const int j);
RcppExport SEXP _RcppDynProg_lin_cost_logistic(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_cost_logistic(x, y, w, min_seg, i, j));
    return rcpp_result_gen;
END_RCPP
}
// lin_costs_logistic
NumericMatrix lin_costs_logistic(NumericVector x, NumericVector y, NumericVector w, const int min_seg, IntegerVector indices);
RcppExport SEXP _RcppDynProg_lin_costs_logistic(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_costs_logistic(x, y, w, min_seg, indices));
    return rcpp_result_gen;
END_RCPP
}
// logistic_solve1
NumericVector logistic_solve1(NumericVector x, NumericVector y, NumericVector w, NumericVector initial_link, const int i, const int j, const int skip);
RcppExport SEXP _RcppDynProg_logistic_solve1(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP initial_linkSEXP, SEXP iSEXP, SEXP jSEXP, SEXP skipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initial_link(initial_linkSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    Rcpp::traits::input_parameter< const int >::type skip(skipSEXP);
    rcpp_result_gen = Rcpp::wrap(logistic_solve1(x, y, w, initial_link, i, j, skip));
    return rcpp_result_gen;
END_RCPP
}
// xlogistic_fits
NumericVector xlogistic_fits(NumericVector x, NumericVector y, NumericVector w, const int i, const int j);
RcppExport SEXP _RcppDynProg_xlogistic_fits(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(xlogistic_fits(x, y, w, i, j));
    return rcpp_result_gen;
END_RCPP
}
// logistic_fits
NumericVector logistic_fits(NumericVector x, NumericVector y, NumericVector w, const int i, const int j);
RcppExport SEXP _RcppDynProg_logistic_fits(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(logistic_fits(x, y, w, i, j));
    return rcpp_result_gen;
END_RCPP
}
// solve_interval_partition_k
IntegerVector solve_interval_partition_k(NumericMatrix x, int kmax);
RcppExport SEXP _RcppDynProg_solve_interval_partition_k(SEXP xSEXP, SEXP kmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type kmax(kmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_interval_partition_k(x, kmax));
    return rcpp_result_gen;
END_RCPP
}
// solve_interval_partition_no_k
IntegerVector solve_interval_partition_no_k(NumericMatrix x);
RcppExport SEXP _RcppDynProg_solve_interval_partition_no_k(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_interval_partition_no_k(x));
    return rcpp_result_gen;
END_RCPP
}
// solve_interval_partition
IntegerVector solve_interval_partition(NumericMatrix x, const int kmax);
RcppExport SEXP _RcppDynProg_solve_interval_partition(SEXP xSEXP, SEXP kmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type kmax(kmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_interval_partition(x, kmax));
    return rcpp_result_gen;
END_RCPP
}
// xlin_fits
NumericVector xlin_fits(NumericVector x, NumericVector y, NumericVector w, const int i, const int j);
RcppExport SEXP _RcppDynProg_xlin_fits(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(xlin_fits(x, y, w, i, j));
    return rcpp_result_gen;
END_RCPP
}
// xlin_pfits
NumericVector xlin_pfits(NumericVector x, NumericVector y, NumericVector w, const int i, const int j);
RcppExport SEXP _RcppDynProg_xlin_pfits(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(xlin_pfits(x, y, w, i, j));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppDynProg_const_cost", (DL_FUNC) &_RcppDynProg_const_cost, 5},
    {"_RcppDynProg_const_costs", (DL_FUNC) &_RcppDynProg_const_costs, 4},
    {"_RcppDynProg_const_cost_logistic", (DL_FUNC) &_RcppDynProg_const_cost_logistic, 5},
    {"_RcppDynProg_const_costs_logistic", (DL_FUNC) &_RcppDynProg_const_costs_logistic, 4},
    {"_RcppDynProg_summarize_input", (DL_FUNC) &_RcppDynProg_summarize_input, 6},
    {"_RcppDynProg_lin_cost", (DL_FUNC) &_RcppDynProg_lin_cost, 6},
    {"_RcppDynProg_lin_costs", (DL_FUNC) &_RcppDynProg_lin_costs, 5},
    {"_RcppDynProg_lin_cost_logistic", (DL_FUNC) &_RcppDynProg_lin_cost_logistic, 6},
    {"_RcppDynProg_lin_costs_logistic", (DL_FUNC) &_RcppDynProg_lin_costs_logistic, 5},
    {"_RcppDynProg_logistic_solve1", (DL_FUNC) &_RcppDynProg_logistic_solve1, 7},
    {"_RcppDynProg_xlogistic_fits", (DL_FUNC) &_RcppDynProg_xlogistic_fits, 5},
    {"_RcppDynProg_logistic_fits", (DL_FUNC) &_RcppDynProg_logistic_fits, 5},
    {"_RcppDynProg_solve_interval_partition_k", (DL_FUNC) &_RcppDynProg_solve_interval_partition_k, 2},
    {"_RcppDynProg_solve_interval_partition_no_k", (DL_FUNC) &_RcppDynProg_solve_interval_partition_no_k, 1},
    {"_RcppDynProg_solve_interval_partition", (DL_FUNC) &_RcppDynProg_solve_interval_partition, 2},
    {"_RcppDynProg_xlin_fits", (DL_FUNC) &_RcppDynProg_xlin_fits, 5},
    {"_RcppDynProg_xlin_pfits", (DL_FUNC) &_RcppDynProg_xlin_pfits, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppDynProg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
