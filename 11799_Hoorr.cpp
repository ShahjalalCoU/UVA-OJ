#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            int maxx=0,j,val,m;
            scanf("%d",&m);
            for(j=1; j<=m; j++)
            {
                scanf("%d",&val);
                if(val>maxx)
                {
                    maxx=val;
                }
            }
            printf("Case %d: %d\n",i,maxx);
        }
    }
    return 0;
}
