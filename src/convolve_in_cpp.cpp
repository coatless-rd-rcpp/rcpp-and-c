#include "Rcpp.h"

//' Pure Rcpp Routine
//' 
//' Implements the convolution function as a _C++_ routine surfaced by _Rcpp_.
//' 
//' @param a,b A `numeric` vector.
//' 
//' @return 
//' A `numeric` vector of length \eqn{N_a + N_b}.
//' 
//' @examples
//' 
//' convolve_cpp(1:5, 5:1)
//' 
//' @export
// [[Rcpp::export]]
Rcpp::NumericVector convolve_cpp(const Rcpp::NumericVector& a,
                                 const Rcpp::NumericVector& b) {
  
  // Declare loop counters, and vector sizes
  int i, j,
  na = a.size(), nb = b.size(),
  nab = na + nb - 1;
  
  // Create vector filled with 0
  Rcpp::NumericVector ab(nab);
  
  // Crux of the algorithm
  for(i = 0; i < na; i++) {
    for(j = 0; j < nb; j++) {
      ab[i + j] += a[i] * b[j];
    }
  }
  
  // Return result
  return ab;
}
