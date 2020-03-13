#include<stdio.h>
void main()
         {
          char operator;
          double first,second;
          printf("Entr an operator(+,-,*,/):");
          scanf("%c",&operator);
          printf("Enter two operands: ");
          scanf("%1f%1f",&first,&second);
          switch(operator)
                {
                 case '+':
                     printf("%.11f+%.11f=%.11f",first,second,first+second);
                     break;
                 case '-':
                     printf("%.11f-%.11f=%.11f",first,second,first-second);
                     break;    
                  case '*':
                     printf("%.11f*%.11f=%.11f",first,second,first*second);
                     break;   
                  case '/':
                     printf("%.11f/%.11f=%.11f",first,second,first/second);
                     break;   
                  default:
                     printf("Error!operator is not correct");
                 }
           }      
