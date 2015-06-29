
#ifndef UTILS_H_   /* Include guard */
#define UTILS_H_
// #include <lapacke.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_statistics.h>

gsl_vector *matrix_mean(gsl_matrix *input);
void fill_matrix_random(gsl_matrix *input);
void print_matrix_corner(gsl_matrix *input);

#endif // FOO_H_

// #include <gsl/gsl_blas.h>