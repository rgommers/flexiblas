      SUBROUTINE FDAXPBY32(N,DA,DX,INCX,DB,DY,INCY)
*     .. Scalar Arguments ..
      DOUBLE PRECISION DA, DB
      INTEGER*4 INCX,INCY,N
*     ..
*     .. Array Arguments ..
      DOUBLE PRECISION DX(*),DY(*)
*     ..
*
*  Purpose
*  =======
*
*     DAXPY constant times a vector plus constant times a  vector.
*     uses unrolled loops for increments equal to one.
*
*  Further Details
*  ===============
*
*     jack dongarra, linpack, 3/11/78.
*     Martin Koehler, FlexiBLAS 9/5/2014
*     modified 12/3/93, array(1) declarations changed to array(*)
*     modified 09/05/2014, axpy -> axpby 
*  =====================================================================
*
*     .. Local Scalars ..
      INTEGER*4 I,IX,IY,M,MP1
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC MOD
*     ..
      IF (N.LE.0) RETURN
      IF (DA.EQ.0.0d0 .AND. DB.EQ.0.0d0) RETURN
      IF (INCX.EQ.1 .AND. INCY.EQ.1) THEN
*
*        code for both increments equal to 1
*
*
*        clean-up loop
*
         M = MOD(N,4)
         IF (M.NE.0) THEN
            DO I = 1,M
               DY(I) = DB*DY(I) + DA*DX(I)
            END DO
         END IF
         IF (N.LT.4) RETURN
         MP1 = M + 1
         DO I = MP1,N,4
            DY(I)   = DB*DY(I) + DA*DX(I)
            DY(I+1) = DB*DY(I+1) + DA*DX(I+1)
            DY(I+2) = DB*DY(I+2) + DA*DX(I+2)
            DY(I+3) = DB*DY(I+3) + DA*DX(I+3)
         END DO
      ELSE
*
*        code for unequal increments or equal increments
*          not equal to 1
*
         IX = 1
         IY = 1
         IF (INCX.LT.0) IX = (-N+1)*INCX + 1
         IF (INCY.LT.0) IY = (-N+1)*INCY + 1
         DO I = 1,N
          DY(IY) = DB*DY(IY) + DA*DX(IX)
          IX = IX + INCX
          IY = IY + INCY
         END DO
      END IF
      RETURN
      END

      SUBROUTINE FDAXPBY64(N,DA,DX,INCX,DB,DY,INCY)
*     .. Scalar Arguments ..
      DOUBLE PRECISION DA, DB
      INTEGER*8 INCX,INCY,N
*     ..
*     .. Array Arguments ..
      DOUBLE PRECISION DX(*),DY(*)
*     ..
*
*  Purpose
*  =======
*
*     DAXPY constant times a vector plus constant times a  vector.
*     uses unrolled loops for increments equal to one.
*
*  Further Details
*  ===============
*
*     jack dongarra, linpack, 3/11/78.
*     Martin Koehler, FlexiBLAS 9/5/2014
*     modified 12/3/93, array(1) declarations changed to array(*)
*     modified 09/05/2014, axpy -> axpby 
*  =====================================================================
*
*     .. Local Scalars ..
      INTEGER*8 I,IX,IY,M,MP1
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC MOD
*     ..
      IF (N.LE.0) RETURN
      IF (DA.EQ.0.0d0 .AND. DB.EQ.0.0d0) RETURN
      IF (INCX.EQ.1 .AND. INCY.EQ.1) THEN
*
*        code for both increments equal to 1
*
*
*        clean-up loop
*
         M = MOD(N,4)
         IF (M.NE.0) THEN
            DO I = 1,M
               DY(I) = DB*DY(I) + DA*DX(I)
            END DO
         END IF
         IF (N.LT.4) RETURN
         MP1 = M + 1
         DO I = MP1,N,4
            DY(I)   = DB*DY(I) + DA*DX(I)
            DY(I+1) = DB*DY(I+1) + DA*DX(I+1)
            DY(I+2) = DB*DY(I+2) + DA*DX(I+2)
            DY(I+3) = DB*DY(I+3) + DA*DX(I+3)
         END DO
      ELSE
*
*        code for unequal increments or equal increments
*          not equal to 1
*
         IX = 1
         IY = 1
         IF (INCX.LT.0) IX = (-N+1)*INCX + 1
         IF (INCY.LT.0) IY = (-N+1)*INCY + 1
         DO I = 1,N
          DY(IY) = DB*DY(IY) + DA*DX(IX)
          IX = IX + INCX
          IY = IY + INCY
         END DO
      END IF
      RETURN
      END
