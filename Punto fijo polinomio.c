#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define e 2.718281828

double fun (double);

int main (){

     double P0,TOL,P,b;
     int i, N, OK;
     printf("Mauricio Rodriguez Carmona-2SV2\n\n");
     printf ("Metodo Punto Fijo\n\n");
     printf("Aproximacion inicial: ");
     scanf ("%lf", &P0);
     printf("Tolerancia TOL: ");
     scanf("%lf", &TOL);
     printf("Numero maximo de iteraciones: ");
     scanf("%d", &N);

     i = 1;
     OK = 1;

     printf("\n\nI\t\tP\n");
     while(i <= N && OK == 1){

             P = fun (P0);
             printf("%d\t%12.8f\n", i, P);

             b = fabs(P - P0);
             if(b < TOL){
                    printf("Solucion aproximada P = %12.8f\n", P);
                    printf("Numero de iteraciones N = %d\n", i);
                    printf("Tolerancia TOL = %5.11f\n\n", TOL);
                    OK = 0;
             }

             else{

                  i++;

                  P0 = P;
             }
     }

     if(OK == 1)
        printf("\n\nEl metodo fallo con un total de iteraciones N = %d\n\n", N);

     system("pause");
     return 0;
}
double  fun(double x){
       double a;
       a = (2*pow(x,2)-x-5);
      return a;
}
