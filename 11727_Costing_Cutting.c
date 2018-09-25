#include<stdio.h>
int main()
{
    int a,b,c,n,i,casek=1;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
    scanf("%d%d%d",&a,&b,&c);
    if(((a>b) && (a<c)) || ((a<b) && (a>c)))
    {
        printf("Case %d: %d\n",casek,a);
    }
    else if(((b>a) && (b<c)) || ((b<a) && (b>c)))
    {
       printf("Case %d: %d\n",casek,b);
    }
    else if(((c>a) && (c<b)) || ((c<a) && (c>b)))
    {
        printf("Case %d: %d\n",casek,c);
    }
    casek++;
    i++;
    }

    return 0;

}
