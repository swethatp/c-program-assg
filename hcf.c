#include<stdio.h>
void main()
         {
          int a,b,i,hcf;
          printf("Enter two numbers\n");
          scanf("%d%d",&a,&b);
          for(i=0;i<=a||i<=b;i++)
              {
               if(a%i==0&&b%i==0)
                hcf=i;
              }
          printf("HCF=%d",hcf);
         } 
