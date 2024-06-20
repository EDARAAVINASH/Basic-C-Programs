#include<stdio.h>
void main()
{
    int m,i,j,flag=0;
    scanf("%d",&m);
    if(m<0)
    {
        printf("Negative number");
    }
    else if(m==0||m==1)
    {
        printf("Neither prime nor composite");
    }
    else
    {
        for(i=2;i<=m;i++)
        {
            flag=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag++;
                }
            }
            if(flag==0)
                    printf("%d ",i);
        }
    }
}
