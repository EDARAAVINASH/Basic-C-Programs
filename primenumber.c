#include<stdio.h>
void main()
{
    int a,i,flag=0;
    scanf("%d",&a);
    if(a==1)
    {
        printf("neither prime nor composite");
    }
    else
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("%d is prime number",a);
        }
    }
}
