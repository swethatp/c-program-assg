#include<stdio.h>
#include<math.h>
void main()
         {
          float a,b,c;
          float root1,root2,imaginary,discriminant;
          printf("enter value of a,b,c of quadratic equaton ax^2+bx+c ");
          scanf("%f%f%f",&a,&b,&c);
          discriminant=(b*b)-(4*a*c);
          if(dscriminant>0)
           {
           root1=(-b+sqrt(discriminant))/(2*a);
           root2=(-b-sqrt(discriminant))/(2*a);
           printf("roots are ral and dstnct:%.2f and %.2f", root1,root2);
           }
          elseif(diiscriminant==0)
          {
           root1=root2=-b/(2*a);
           printf("two equal and real roots exists:%.2 and %.2f", root1, root2);
          }
          else f(dscriminant<0)
          {
           root1=root2=-b/(2*a);
           imaginary=sqrt(-discriminant)/(2*a);
           printf("two distinct complex roots exists:%.2f+i%.2f  and %.2f-i%.2f",root1,imaginary,root2,imaginary);
          } 
        }
