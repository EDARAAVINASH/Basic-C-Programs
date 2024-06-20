#include<stdio.h>
#include<math.h>
void main()
{
    int n=5000,sum=0,b[10],i,a,max,size=5;
    printf("enter price of grocerys\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    printf("%d",sum);
    a=sum;
    printf("hello");
    if(sum>5000)
    {
        printf("hell");
        do
        {
            printf("hel");
            max=b[0];
            for(i=0;i<size;i++)
            {
                printf("%d",b[i]);
                if(b[i]>=max)
                {
                    max=b[i];
                }

                printf("mav val %d\n",max);
            }
            b[i]=0;
            sum=sum-max;

           printf("sum val %d",sum);
        }
        while(sum>5000);
    }

}
