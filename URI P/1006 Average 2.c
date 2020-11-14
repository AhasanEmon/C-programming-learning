#include<stdio.h>
int main()
///A=2, B=3, C=5
{
    float A, B, C, sum, avg;
    scanf("%f %f ", &A, &B, &C);
    sum =  A*2 +B*3+C*5;
    avg = sum/10;
    printf("MEDIA = %0.1f\n", avg);



}
