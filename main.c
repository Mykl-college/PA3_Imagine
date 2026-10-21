/*
 * File: main.c
 * Author: Mikey Johnston
 * Desc: Do math for imaginary numbers and phase
 * Compile: gcc main.c -lm -o main
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <complex.h>
 #include <math.h>

 int main(void){
    double complex a = CMPLX(2,2);
    double complex b = CMPLX(3,1);
    double complex c = CMPLX((creal(a)+creal(b)),(cimag(a)+cimag(b)));
    double complex d = a * a;
    double complex e = a * b;
    double complex f = a / b;
    printf("a: %f + j %f\n",creal(a),cimag(a));
    printf("b: %f + j %f\n",creal(b),cimag(b));
    printf("c = a + b\n");
    printf("c: %f + j %f\n",creal(c),cimag(c));
    printf("d = a * a \n");
    printf("d: %f + j %f\n",creal(d),cimag(d));
    printf("e = a * b \n");
    printf("e: %f + j %f\n",creal(e),cimag(e));
    printf("f = a / b \n");
    printf("f: %f + j %f\n",creal(f),cimag(f));
    //Rect form to phase
    double aM = sqrt((creal(a) * creal(a)) + abs(cimag(a) * cimag(a)));
    printf("a's Magnitude: %f Phase: %f radians\n",aM,cargf(a));
    printf("Rect Form of  5 phase 1.4 radians\n");
    //Phase to rect form
    double rectReal = 5 * cos(1.4);
    double rectImag = 5 * sin(1.4);
    printf("ans: %f + j %f\n",rectReal,rectImag);
    printf("\n\n");

    //impedence;
    printf("Parallel impedence:\n");
    printf("a: %f + j %f\n",creal(a),cimag(a));
    printf("b: %f + j %f\n",creal(b),cimag(b));
    double complex paraImp = (a * b) / (CMPLX((creal(a)+creal(b)),(cimag(a)+cimag(b))));
    printf("Parallel impedence: %f + j %f\n",creal(paraImp),cimag(paraImp));
    
 }