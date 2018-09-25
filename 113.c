#include<stdio.h>
#include<math.h>
int power(double n,double p);
int main()
{
   double ans,a,b;
   while(scanf("%lf%lf",&a,&b)==2)
   {
       ans=power(a,b);
       printf("%0.lf\n",ans);
   }
   return 0;
}

int power(double n,double p)
{
    double k;
    k=pow(p,1/n);
    return k;
}
