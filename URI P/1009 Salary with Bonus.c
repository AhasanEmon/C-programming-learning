#include<stdio.h>
int main()
{
    double Salary,Bonus , sum;
    char name;
    scanf("%s",&name);
    scanf("%lf",&Salary);
    scanf("%lf",&Bonus);
    sum = Salary +(0.15*Bonus);
    printf("TOTAL = R$ %.2lf\n",sum);
    return 0;
}
