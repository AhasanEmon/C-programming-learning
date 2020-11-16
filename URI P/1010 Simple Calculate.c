#include<stdio.h>
int main()
{
    float p1code, p1unite, p1value,p2code, p2unite, p2value, sum1, sum2, sum3;
              scanf("%f%f%f%f%f%f",&p1code,&p1unite,&p1value,&p2code,&p2unite,&p2value);
              sum1= p1unite*p1value;
              sum2= p2unite*p2value;
              sum3= sum1+sum2;
              printf("VALOR A PAGAR: R$ %.2f\n", sum3);
              return 0;


}
