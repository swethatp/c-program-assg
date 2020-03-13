#include<stdio.h>
void main()
        {
         nt a=0,b=1,c,n,i;
         printf("ntr the value of n");
         scanf("%d",&n);
         printf("first %d fibonaccinumbers are ",n);
         printf("%d",a);
         printf("%d",b);
         i=2;
         while(i<n)
             {
              c=a+b;
              i++;
              printf("%d",c);
              a=b;
              b=c;
             }
         }    
       
