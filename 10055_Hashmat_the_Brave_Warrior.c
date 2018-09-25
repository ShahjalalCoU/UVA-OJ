#include<stdio.h>
int main()
{
    long long int a,b,result1,result2;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            result1=a-b;
            printf("%lld\n",result1);
        }
        else
        {
            result2=b-a;
            printf("%lld\n",result2);
        }

    }
    return 0;
}
