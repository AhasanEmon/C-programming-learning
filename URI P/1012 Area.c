#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, pi, sum1, sum2, sum3, sum4, sum5;
    pi = 3.14159;
    scanf("%lf%lf%lf", &A,&B,&C);
    sum1 = 0.5*A*C;
    sum2 = pi*pow(C,2);
    sum3 = ((A+B)*C)/2;
    sum4 = pow(B,2);
    sum5 = A*B;
    printf("TRIANGULO: %.3lf\n", sum1);
    printf("CIRCULO: %.3lf\n", sum2);
    printf("TRAPEZIO: %.3lf\n", sum3);
    printf("QUADRADO: %.3lf\n", sum4);
    printf("RETANGULO: %.3lf\n", sum5);
    return 0;
}
