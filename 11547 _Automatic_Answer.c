#include<stdio.h>
int main()
{
    long long  n,value,t,i;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        value=n*567;
        value=value/9;
        value=value+7492;
        value=value*235;
        value=value/47;
        value=value-498;
        value=value/10;
        value=value%10;
        if(value<0)
          {
             value=value*(-1);
             printf("%d\n",value);
          }
        else
          {
             printf("%d\n",value);
          }
    }
    return 0;
}

