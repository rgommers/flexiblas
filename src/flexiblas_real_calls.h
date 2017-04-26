/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Martin Koehler, 2015
 */
 /* This file it automatically generated. Please do not edit. */
 /* Generated: Fri Sep 18 15:46:22 2015 */ 
        
#ifndef FLEXIBLAS_REAL_CALLS_H
#define FLEXIBLAS_REAL_CALLS_H

#include <stdint.h>
#include <complex.h>

#ifdef __cplusplus
extern "C" {
#endif

void flexiblas_real_caxpy_(void* n, void* ca, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_caxpy(void* n, void* ca, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_ccopy_(void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_ccopy(void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_cdotc_( void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_cdotc( void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_cdotu_( void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_cdotu( void * returnvalue, void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_cgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_cgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_cgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_cgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_cgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_cgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_cgerc_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_cgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_cgeru_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_cgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_chbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_chbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_chemm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_chemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_chemv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_chemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_cher_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_cher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_cher2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_cher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_cher2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_cher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_cherk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_cherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_chpmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_chpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_chpr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_chpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_chpr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_chpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_crotg_(void* ca, void* cb, void* c, void* s);
void flexiblas_real_crotg(void* ca, void* cb, void* c, void* s);
void flexiblas_real_cscal_(void* n, void* ca, void* cx, void* incx);
void flexiblas_real_cscal(void* n, void* ca, void* cx, void* incx);
void flexiblas_real_csrot_(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
void flexiblas_real_csrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
void flexiblas_real_csscal_(void* n, void* sa, void* cx, void* incx);
void flexiblas_real_csscal(void* n, void* sa, void* cx, void* incx);
void flexiblas_real_cswap_(void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_cswap(void* n, void* cx, void* incx, void* cy, void* incy);
void flexiblas_real_csymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_csymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_csyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_csyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_csyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_csyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_ctbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ctbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ctbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ctbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ctpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ctpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ctpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ctpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ctrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ctrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ctrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ctrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ctrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ctrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ctrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ctrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
double flexiblas_real_dasum_(void* n, void* dx, void* incx);
double flexiblas_real_dasum(void* n, void* dx, void* incx);
void flexiblas_real_daxpy_(void* n, void* da, void* dx, void* incx, void* dy, void* incy);
void flexiblas_real_daxpy(void* n, void* da, void* dx, void* incx, void* dy, void* incy);
void flexiblas_real_dcopy_(void* n, void* dx, void* incx, void* dy, void* incy);
void flexiblas_real_dcopy(void* n, void* dx, void* incx, void* dy, void* incy);
double flexiblas_real_ddot_(void* n, void* dx, void* incx, void* dy, void* incy);
double flexiblas_real_ddot(void* n, void* dx, void* incx, void* dy, void* incy);
void flexiblas_real_dgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_dgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_dgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dger_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_dger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
double flexiblas_real_dnrm2_(void* n, void* x, void* incx);
double flexiblas_real_dnrm2(void* n, void* x, void* incx);
void flexiblas_real_drot_(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s);
void flexiblas_real_drot(void* n, void* dx, void* incx, void* dy, void* incy, void* c, void* s);
void flexiblas_real_drotg_(void* da, void* db, void* c, void* s);
void flexiblas_real_drotg(void* da, void* db, void* c, void* s);
void flexiblas_real_drotm_(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam);
void flexiblas_real_drotm(void* n, void* dx, void* incx, void* dy, void* incy, void* dparam);
void flexiblas_real_drotmg_(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam);
void flexiblas_real_drotmg(void* dd1, void* dd2, void* dx1, void* dy1, void* dparam);
void flexiblas_real_dsbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dsbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dscal_(void* n, void* da, void* dx, void* incx);
void flexiblas_real_dscal(void* n, void* da, void* dx, void* incx);
double flexiblas_real_dsdot_(void* n, void* sx, void* incx, void* sy, void* incy);
double flexiblas_real_dsdot(void* n, void* sx, void* incx, void* sy, void* incy);
void flexiblas_real_dspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dspr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_dspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_dspr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_dspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_dswap_(void* n, void* dx, void* incx, void* dy, void* incy);
void flexiblas_real_dswap(void* n, void* dx, void* incx, void* dy, void* incy);
void flexiblas_real_dsymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_dsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_dsymv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dsymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_dsyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_dsyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_dsyr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_dsyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_dsyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_dsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_dsyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_dsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_dtbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_dtbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_dtbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_dtbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_dtpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_dtpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_dtpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_dtpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_dtrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_dtrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_dtrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_dtrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_dtrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_dtrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_dtrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_dtrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
double flexiblas_real_dzasum_(void* n, void* zx, void* incx);
double flexiblas_real_dzasum(void* n, void* zx, void* incx);
double flexiblas_real_dznrm2_(void* n, void* x, void* incx);
double flexiblas_real_dznrm2(void* n, void* x, void* incx);
blasint flexiblas_real_icamax_(void* n, void* cx, void* incx);
blasint flexiblas_real_icamax(void* n, void* cx, void* incx);
blasint flexiblas_real_idamax_(void* n, void* dx, void* incx);
blasint flexiblas_real_idamax(void* n, void* dx, void* incx);
blasint flexiblas_real_isamax_(void* n, void* sx, void* incx);
blasint flexiblas_real_isamax(void* n, void* sx, void* incx);
blasint flexiblas_real_izamax_(void* n, void* zx, void* incx);
blasint flexiblas_real_izamax(void* n, void* zx, void* incx);
float flexiblas_real_sasum_(void* n, void* sx, void* incx);
float flexiblas_real_sasum(void* n, void* sx, void* incx);
void flexiblas_real_saxpy_(void* n, void* sa, void* sx, void* incx, void* sy, void* incy);
void flexiblas_real_saxpy(void* n, void* sa, void* sx, void* incx, void* sy, void* incy);
float flexiblas_real_scasum_(void* n, void* cx, void* incx);
float flexiblas_real_scasum(void* n, void* cx, void* incx);
float flexiblas_real_scnrm2_(void* n, void* x, void* incx);
float flexiblas_real_scnrm2(void* n, void* x, void* incx);
void flexiblas_real_scopy_(void* n, void* sx, void* incx, void* sy, void* incy);
void flexiblas_real_scopy(void* n, void* sx, void* incx, void* sy, void* incy);
float flexiblas_real_sdot_(void* n, void* sx, void* incx, void* sy, void* incy);
float flexiblas_real_sdot(void* n, void* sx, void* incx, void* sy, void* incy);
float flexiblas_real_sdsdot_(void* n, void* sb, void* sx, void* incx, void* sy, void* incy);
float flexiblas_real_sdsdot(void* n, void* sb, void* sx, void* incx, void* sy, void* incy);
void flexiblas_real_sgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_sgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_sgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_sgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_sgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_sgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_sger_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_sger(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
float flexiblas_real_snrm2_(void* n, void* x, void* incx);
float flexiblas_real_snrm2(void* n, void* x, void* incx);
void flexiblas_real_srot_(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s);
void flexiblas_real_srot(void* n, void* sx, void* incx, void* sy, void* incy, void* c, void* s);
void flexiblas_real_srotg_(void* sa, void* sb, void* c, void* s);
void flexiblas_real_srotg(void* sa, void* sb, void* c, void* s);
void flexiblas_real_srotm_(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam);
void flexiblas_real_srotm(void* n, void* sx, void* incx, void* sy, void* incy, void* sparam);
void flexiblas_real_srotmg_(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam);
void flexiblas_real_srotmg(void* sd1, void* sd2, void* sx1, void* sy1, void* sparam);
void flexiblas_real_ssbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_ssbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_sscal_(void* n, void* sa, void* sx, void* incx);
void flexiblas_real_sscal(void* n, void* sa, void* sx, void* incx);
void flexiblas_real_sspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_sspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_sspr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_sspr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_sspr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_sspr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_sswap_(void* n, void* sx, void* incx, void* sy, void* incy);
void flexiblas_real_sswap(void* n, void* sx, void* incx, void* sy, void* incy);
void flexiblas_real_ssymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_ssymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_ssymv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_ssymv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_ssyr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_ssyr(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_ssyr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_ssyr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_ssyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_ssyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_ssyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_ssyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_stbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_stbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_stbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_stbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_stpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_stpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_stpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_stpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_strmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_strmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_strmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_strmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_strsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_strsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_strsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_strsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_zaxpy_(void* n, void* za, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zaxpy(void* n, void* za, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zcopy_(void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zcopy(void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zdotc_( void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zdotc( void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zdotu_( void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zdotu( void * returnvalue, void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zdrot_(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
void flexiblas_real_zdrot(void* n, void* cx, void* incx, void* cy, void* incy, void* c, void* s);
void flexiblas_real_zdscal_(void* n, void* da, void* zx, void* incx);
void flexiblas_real_zdscal(void* n, void* da, void* zx, void* incx);
void flexiblas_real_zgbmv_(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zgbmv(void* trans, void* m, void* n, void* kl, void* ku, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zgemm_(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zgemm(void* transa, void* transb, void* m, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zgemv_(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zgemv(void* trans, void* m, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zgerc_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_zgerc(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_zgeru_(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_zgeru(void* m, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_zhbmv_(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zhbmv(void* uplo, void* n, void* k, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zhemm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zhemm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zhemv_(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zhemv(void* uplo, void* n, void* alpha, void* a, void* lda, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zher_(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_zher(void* uplo, void* n, void* alpha, void* x, void* incx, void* a, void* lda);
void flexiblas_real_zher2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_zher2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* a, void* lda);
void flexiblas_real_zher2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zher2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zherk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_zherk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_zhpmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zhpmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
void flexiblas_real_zhpr_(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_zhpr(void* uplo, void* n, void* alpha, void* x, void* incx, void* ap);
void flexiblas_real_zhpr2_(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_zhpr2(void* uplo, void* n, void* alpha, void* x, void* incx, void* y, void* incy, void* ap);
void flexiblas_real_zrotg_(void* ca, void* cb, void* c, void* s);
void flexiblas_real_zrotg(void* ca, void* cb, void* c, void* s);
void flexiblas_real_zscal_(void* n, void* za, void* zx, void* incx);
void flexiblas_real_zscal(void* n, void* za, void* zx, void* incx);
void flexiblas_real_zswap_(void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zswap(void* n, void* zx, void* incx, void* zy, void* incy);
void flexiblas_real_zsymm_(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zsymm(void* side, void* uplo, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zsyr2k_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zsyr2k(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* b, void* ldb, void* beta, void* c, void* ldc);
void flexiblas_real_zsyrk_(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_zsyrk(void* uplo, void* trans, void* n, void* k, void* alpha, void* a, void* lda, void* beta, void* c, void* ldc);
void flexiblas_real_ztbmv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ztbmv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ztbsv_(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ztbsv(void* uplo, void* trans, void* diag, void* n, void* k, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ztpmv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ztpmv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ztpsv_(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ztpsv(void* uplo, void* trans, void* diag, void* n, void* ap, void* x, void* incx);
void flexiblas_real_ztrmm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ztrmm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ztrmv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ztrmv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ztrsm_(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ztrsm(void* side, void* uplo, void* transa, void* diag, void* m, void* n, void* alpha, void* a, void* lda, void* b, void* ldb);
void flexiblas_real_ztrsv_(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);
void flexiblas_real_ztrsv(void* uplo, void* trans, void* diag, void* n, void* a, void* lda, void* x, void* incx);

#ifdef __cplusplus
}
#endif
#endif
