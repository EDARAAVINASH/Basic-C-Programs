#include<stdio.h>
void main()
{
    int i=0,j=0,a[10],b[10];
    printf("enter marks of 1st attempt\n");
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    printf("enter marks of 2nd attempt\n");
    for(j=0;j<4;j++)
        scanf("%d",&b[j]);
    printf("results\n");
    for(i=0,j=0;i<4,j<4;i++,j++)
    {
        if(a[i]>b[j])
            printf("%d\n",a[i]);
        else
            printf("%d\n",b[j]);
    }
}
