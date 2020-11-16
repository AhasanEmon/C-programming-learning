#include<stdio.h>
#include<math.h>
int main()
{
    double r,sum,pi;
    pi = 3.14159;
    scanf("%lf",&r);
    sum = pi*r*r*r;///pow(r,3);
    printf("VOLUME = %.3lf\n",sum*(4/3.0));
    return 0;

}
