#include<stdio.h>
void main()
{
    int a[10],n,sum,count=0,i,j;
    printf("enter n value\n");
    scanf("%d",&n);
    printf("enter values\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum%2!=0)
            {
                count=count+1;
            }

        }
    }
    printf("%d\n",count);
}
