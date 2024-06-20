#include <stdio.h>
int main()
{
    float P,T,R;
	scanf("%f",&P);
	scanf("%f",&T);
    scanf("%f",&R);
	float SI = (P * T * R) / 100;
	printf("Simple Interest = %f\n", SI);
    return 0;
}


