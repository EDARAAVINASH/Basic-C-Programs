#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("array elements\n");
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
}
