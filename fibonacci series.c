#include<stdio.h>
void main()
      {
       int i,n,a=0,b=1,c;
       printf("enter the no of terms: ");
       scanf("%d"&n);
       prntf("fbonacci series: ");
       for(i=1;i<=n;++i)
          {
           prntf("%d, ",a);
           c=a+b;
           a=b;
           b=c;
          }
        }
        
