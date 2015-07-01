
#ifndef UTILS_H_   /* Include guard */
#define UTILS_H_
// #include <lapacke.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_statistics.h>

gsl_vector *matrix_mean(gsl_matrix *input);
void matrix_demean(gsl_matrix *input);
void fill_matrix_random(gsl_matrix *input);
void fill_vector_const(gsl_vector *input, float const x);
void print_matrix_corner(gsl_matrix *input);
void print_vector_head(gsl_vector *input);
void matrix_cov(const gsl_matrix *input, gsl_matrix *cov);
double matrix_norm(gsl_matrix *input);
double matrix_sum(gsl_matrix *input);
void matrix_mmul(gsl_matrix *A, gsl_matrix *B, gsl_matrix *C);
void matrix_apply_all(gsl_matrix *input, double (*fun)(double));
void random_vector(gsl_vector *vec,  double parameter, double (* func)(const gsl_rng *, double ));
void random_matrix(gsl_matrix *input, double parameter,double (* func)(const gsl_rng *, double ));
// void matrix_pinv(gsl_matrix *input, gsl_matrix *output)

#endif // FOO_H_
