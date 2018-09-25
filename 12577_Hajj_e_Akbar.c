#include<stdio.h>
#include<string.h>

int main()
{
     int n,i,casek=1;
     char str[10];
     while(scanf("%s",str))
     {

         if(strcmp(str,"*")==0)
            {
               break;
            }
         else if(strcmp(str,"Hajj")==0)
            {
               printf("Case %d: Hajj-e-Akbar\n",casek);
            }
         else if(strcmp(str,"Umrah")==0)
            {
               printf("Case %d: Hajj-e-Asghar\n",casek);
            }
         casek++;
     }

     return 0;
}
