#include<stdio.h>
void main()
{
    int people[10],house[10],i,j,n,count=0,homeless=0;
    printf("enter no.of houses and people\n");
    scanf("%d",&n);
    printf("enter no.of people in house\n");
    for(i=0;i<n;i++)
        scanf("%d",&people[i]);
    printf("enter height of house\n");
    for(j=0;j<n;j++)
        scanf("%d",&house[j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(people[i]<=house[j])
            {
                count++;
                house[j]=house[j]-1;
                break;
            }
        }
    }
    homeless=n-count;
    printf("%d\n",homeless);
}
