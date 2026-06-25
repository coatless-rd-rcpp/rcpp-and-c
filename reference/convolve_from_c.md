# Call C function from Rcpp

Uses the convolve_c function inside of a C++ routine by Rcpp.

## Usage

``` r
convolve_from_c(a, b)
```

## Arguments

- a, b:

  A `numeric` vector.

## Value

A `numeric` vector of length \\N_a + N_b\\.

## Examples

``` r

convolve_from_c(1:5, 5:1)
#> [1]  5 14 26 40 55 40 26 14  5
```
