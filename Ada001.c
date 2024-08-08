#include<stdio.h>
#include<conio.h>
int main()
{
    int n,cost[10][10],parent[10],u,v,i,j;
    int count=1,mincost=0,min,a,b;
    printf("enter the number of vertices");
    scanf("%d",&n);
    printf("enter cost matrices");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&cost[i][j]);
        if(cost[i][j]==0)
        {
        cost[i][j]=999;
    }}}
    for(i=0;i<n;i++)
    {
        parent[i]=i;
    }
    while(count<n)
    {
        min=999;
        for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
        if(cost[i][j]<min)
        {
            min=cost[i][j];
            a=u=i;
            b=v=j;
        }}}
        while(parent[u]!=u)
        {
            u=parent[u];
        }
        while(parent[v]!=v)
        {
        v=parent[v];

        }
        if(u!=v)
        {
            count++;
            printf("edge(%d,%d)=%d\n",a,b,min);
            mincost+=min;
            parent[v]=u;
        }
        cost[a][b]=cost[b][a]=999;

    }
    printf("minimum cost:%d",mincost);
    getch();
    return 0;
}