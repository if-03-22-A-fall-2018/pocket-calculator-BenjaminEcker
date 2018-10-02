#include <stdio.h>

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
   int 
}
void subtract()
{

}
void multiply()
{

}
void divide()
{

}
