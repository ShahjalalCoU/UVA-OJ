#include<stdio.h>
int main()
{
    int a,b,i,j,sum,casek=1,n;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        sum=0;
        scanf("%d\n%d",&a,&b);
        for(i=a; i<=b; i++)
        {
            if(i%2!=0 || i==1)
            {
                sum=sum+i;
            }
        }
        printf("Case %d: %d\n",casek,sum);
        casek++;
    }

    return 0;
}
