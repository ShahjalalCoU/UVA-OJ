#include<stdio.h>
int main()
{
    int i,casek=1,n,a,b,c;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a<=20)&&(b<=20)&&(c<=20))
        {
            printf("Case %d: good\n",casek);
        }
        else
        {
            printf("Case %d: bad\n",casek);
        }
        i++;
        casek++;
    }
    return 0;
}
