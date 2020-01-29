#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void leercoordenadas(int a,float m,float *x);
float falsaposicion(float xl,float xu,float efinal);
double Error(double x);
int main()
{

    printf("METODO DE FALSA POSICION\n");
    float porer,xi,xf;
    leercoordenadas(1,0,&xi);
    leercoordenadas(2,xi,&xf);
    leercoordenadas(3,100,&porer);
    printf("\n\n\nLa Raiz segun el Metodo de la Falsa Posicion es %f",falsaposicion(xi,xf,porer));
    printf("\n\n\n\n\n\n\n\n\n*Mauricio Rodriguez Carmona-2SV2*");
    getch();
     system("pause");

}
void leercoordenadas(int a,float m,float*x)
{
    int opcion;
    switch(a)
    {
        case 1:    do
                {
                    printf("\n\nDigite Xi");
                    printf("\nDigite su Valor: ");
                    scanf("%f",&*x);
                }
                while(*x<m);
                break;
        case 2:    do
                {
                    printf("\nDigite Xf");
                    printf("\nDigite su Valor: ");
                    scanf("%f",&*x);
                }
                while(*x<m);
                break;

            case 3:do
                    {
                        printf("\nDigite el  error");
                        printf("\nDigite su Opcion Aqui: ");
                        scanf("%f",&*x);
                    }
                    while((*x>m)||(*x<=0));


    }
}

float falsaposicion(float xl,float xu,float efinal)
{
    float temp,iter=0,test,xr,einicial;
    xr=(xu-xl)/2;
    do
    {
        temp= xr;
        xr=(xl+xu)/2;
        ++iter;
        if(xr!=0)
            einicial=fabs((xr-temp)/xr)*100;
        test=xu-((Error(xu)*(xl-xu))/(Error(xl)-Error(xu)));
        if(Error(xu)*Error(xl)<0)
            xu=test;
        else
            if(Error(xu)*Error(xl)>0)
                xl=test;
            else
                einicial=0;
        printf("\n\tRaiz: %f\tXu: %f\tXl: %f\tError: %f",test,xu,xr,einicial);
    }
    while((einicial>efinal)||(iter<efinal));
    return(test);
}
double Error(double x)
{

    return pow(x,3)+4*pow(x,2)-10;
}
