#include<stdio.h>
void main()
{
    int earn[10],book[10],n,totalearn=0,bookscost=0,i,j,friend;
    printf("no.of days he bought book");
    scanf("%d",&n);
    printf("enter how much he earn on day\n");
    for(i=0;i<n;i++)
        scanf("%d",&earn[i]);
    printf("enter cost of books he bought\n");
    for(j=0;j<n;j++)
        scanf("%d",&book[j]);
    for(i=0;i<n;i++)
    {
        totalearn=totalearn+earn[i];
    }
    for(j=0;j<n;j++)
    {
        bookscost=bookscost+book[j];
    }
    friend=bookscost-totalearn;
    printf("%d\n",friend);
}
