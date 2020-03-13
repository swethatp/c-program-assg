#include<stdio.h>
void main()
      {
       float princple,time,rate,SI;
       printf("Enter principle(amount):");
       scanf("%f",&principle);
       printf("Enter time");
       scanf("%f",&time);
       printf("Enter the rate");
       scanf("%f",&rate);
       SI=(principle*time*rate)/100;
       printf("Simple Interest=%f",SI);
      }
