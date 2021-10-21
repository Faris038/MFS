#include<stdlib.h> 
#define max_size 5
int stack[max_size],top=-1;
void push();
void pop();
void display();
int main()
{ int choice;
while(1)
{ printf("\n\n--------STACK OPERATIONS-----------\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("\nEnter your choice:\t");
scanf("%d",&choice);
switch(choice)
{ case 1 : printf("Enter the element to be inserted:\t");
scanf("%d",&item);
push(ele); break;
case 2 : ele=pop(); 
if(ele==-1)
printf("stack Underflow\n”);
else
printf("Poped element =%d\n”, ele);
break;
case 3 : display(); break;
case 4 : return 0;
default : printf("\nInvalid choice:\n") ; break;
}
