#include <stdio.h>
#include <float.h>
#include "calculator.h"

void printMenu()
{
  printf("Add          (1)\n");
  printf("Subtract     (2)\n");
  printf("Multiply     (3)\n");
  printf("Divide       (4)\n");
  printf("Stop program (-1)\n");
}
void add()
{
   double operand1;
   double operand2;
   readOperand(&operand1, &operand2);

   if (((operand1+operand2)<operand2)||((operand1+operand2)<operand1))
   {
     printf("Stackoverflow");
   }
   printf("Sum :%f",operand1+operand2);
}
void subtract()
{
  double operand1;
  double operand2;
  readOperand(&operand1, &operand2);
  if (((operand1-operand2)>operand2)||((operand1-operand2)>operand1))
  {
    printf("Stackoverflow");
  }
  printf("Sum :%f",operand1-operand2);
}
void multiply()
{
  double operand1;
  double operand2;
  readOperand(&operand1, &operand2);
  printf("Sum :%f",operand1*operand2);
}
void divide()
{
  double operand1;
  double operand2;
  readOperand(&operand1, &operand2);
  printf("Sum :%f",operand1/operand2);
}
void readOperand(double* numb1, double* numb2)
{
  printf("Please enter the first operand:");
  scanf("%lf\n",numb1);
  printf("Please enter the second operand:");
  scanf("%lf\n",numb2);
}

 int main(int argc, char const *argv[])
 {
   int choice;

   printMenu();

   scanf("%d",&choice);

   switch (choice) {
     case -1:
     break;

     case 1:
     add();
     break;

     case 2:
     subtract();
     break;

     case 3:
     multiply();
     break;

     case 4:
     divide();
     break;

     default:

     break;
   }
 }
