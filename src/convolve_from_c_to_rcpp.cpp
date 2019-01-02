#include "Rcpp.h"

// Define the method signature

#ifdef __cplusplus
extern "C" {
#endif
  
#include "convolve_in_c.h"

#ifdef __cplusplus
}
#endif

//' Call C function from Rcpp
//' 
//' Uses the convolve_c function inside of a C++ routine by Rcpp.
//' 
//' @param a,b A `numeric` vector.
//' 
//' @return 
//' A `numeric` vector of length \eqn{N_a + N_b}.
//' 
//' @examples
//' 
//' convolve_from_c(1:5, 5:1)
//' 
//' @export
// [[Rcpp::export]]
Rcpp::NumericVector convolve_from_c(const Rcpp::NumericVector& a,
                                    const Rcpp::NumericVector& b) {

  // Compute the result in _C_
  // Import it into R
  SEXP ab = convolve_c(a, b);
  
  // Cast as a NumericVector 
  Rcpp::NumericVector result( ab );
  
  // Alternatively:
  // Rcpp::NumericVector result( convolve_c(a, b) );
  
  // Return result
  return result;
}
