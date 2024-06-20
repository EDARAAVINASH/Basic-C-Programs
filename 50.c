#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,a[5],i,sum=0,max;
    printf("enter value of n\n");
    scanf("%d",&n);
    printf("enter prices of grocerys\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    if(sum<5000)
    {
        printf("%d\n",sum);
    }
    else
    {
        do
        {
            max=a[0];
            printf("%d\n",max);
            for(i=0;i<n;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
            }
            printf("%d\n",max);
            sum=sum-max;
            printf("%d\n",sum);
            a[i]=0;
        }
        while (sum<5000);
    }
}
