#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double);

int main()
{
    int imax,iter;
    double xi,xd,ea,e,test,xa,xaold;


    printf("\nMetodo de biseccion\n\n");

    printf("Introduce xi\n");
    scanf("%lf",&xi);
    printf("Introduce xd\n");
    scanf("%lf",&xd);
    printf("Introduce el numero de iteraciones maximas\n");
    scanf("%d",&imax);
    printf("Introduce el error\n");
    scanf("%lf",&e);

iter=0;
xa=0;

if(f(xi)*f(xd)>0)
    printf("No hay raiz en ese intervalo\n");

else{

  printf("\nIter    Raiz     Error\n");

  do{

    iter++;

    xaold=xa;

    xa=(xi+xd)/2;

    ea=fabs((xa-xaold)/xa)*100;

    test=f(xi)*f(xa);

    if(test<0)
        xd=xa;

    else if(test >0)
        xi=xa;

    else
        ea=0;

    printf("\n %d    %lf    %lf",iter,xa,ea);


  } while(ea>e && iter<imax);

}



    return 0;
}

double f(double x){
return pow(x,3)+4*pow(x,2)-10;
}
