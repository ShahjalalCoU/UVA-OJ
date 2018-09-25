#include<stdio.h>
long long  sum(long long n)
{
    long long temp,sm=0,digt;
    temp=n;
    while(n>0)
    {
        digt=n%10;
        sm=sm+digt;
        n=n/10;
    }
    if(sm>9)
    {
        n=sm;
        sm=sum(n);
    }
    return sm;


}
int main()
{
    long long n,digit;
    while(scanf("%lld",&n)!=EOF)
    {
         if(n==0)
         {
             break;
         }
         digit=sum(n);
         printf("%lld\n",digit);
    }
    return 0;
}
