#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,c,sum,a[101],j,n,k;
    char str[101];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",str);
        len=strlen(str);
        for(j=0; j<len; j++)
        {
            if(str[j]=='O')
            {
                a[j]=1;
            }
            else if(str[j]=='X')
            {
                a[j]=0;
            }

        }
        c=0;
        sum=0;
        for(k=0; k<len; k++)
        {
            if(a[k]==1)
            {
                c++;
            }
            if(a[k]==0)
            {
                c=0;
            }
            sum=sum+c;
        }
        printf("%d\n",sum);
    }
    return 0;
}


