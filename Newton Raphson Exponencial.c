#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
float fp(float x);
int main()
{
float x[50];
float xi;
float div;
float e;
int i=0;
printf("Instituto Politecnico Nacional\n");
printf("Metodo Newton Rapshon--Mauricio Rodriguez Carmona 2SV2\n\n");
printf("Introduce el valor inicial de xi:");
scanf("%f",&xi);
e=1;

x[0]=xi;
printf("\n%f\n",x[0]);
while(e>0.1)
{

div=(f(x[i])/fp(x[i]));
x[i+1]= (x[i]-div);
e=(x[i+1]-x[i]);
e=e/x[i+1];
e=fabs(e)*100;

printf("x=%5.5f\t\t e=%5.3f\n\n",x[i+1],e);

i++;

}

getch();
}
float f(float x)
{
float y;
y=(exp(-x)-x);
return y;

}
float fp(float x)
{
float y;
y=(-(1+exp(x))/(exp(x)));
return(y);

}
