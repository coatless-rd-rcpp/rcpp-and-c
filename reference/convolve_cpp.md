# Pure Rcpp Routine

Implements the convolution function as a *C++* routine surfaced by
*Rcpp*.

## Usage

``` r
convolve_cpp(a, b)
```

## Arguments

- a, b:

  A `numeric` vector.

## Value

A `numeric` vector of length \\N_a + N_b\\.

## Examples

``` r

convolve_cpp(1:5, 5:1)
#> [1]  5 14 26 40 55 40 26 14  5
```
