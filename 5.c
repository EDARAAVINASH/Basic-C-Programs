#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
   printf("array elements\n");
   for(i=1;i<n;i++)
   printf("%d\n",a[i]);
   printf("array elements2\n");
   for(i=n;i>=1;i--)
    printf("%d\n",a[i]);
}
