#include <stdio.h>
#include<math.h>
int main()
{
    double principal,rate,time;
    scanf("%lf",&principal);
    scanf("%lf",&rate);
    scanf("%lf",&time);
    double Amount = principal *((pow((1 + rate / 100),time)));
    double CI = Amount - principal;
    printf("Compound Interest is : %lf",CI);
    return 0;
}
