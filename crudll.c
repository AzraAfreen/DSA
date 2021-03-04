 #include <stdio.h>

//

#define size 4

int stack[size];

int top=-1;

int data=0;

int ch=0;

int main()

{

do

{

menu();

printf("Enter your choice \n");

scanf("%d",&ch);

switch(ch)
  
  
  {

case 1: push(); break;

case 2: pop(); break;

case 3: print(); break;

case 4: exit(1);

default: printf("Wrong choice choice 1 to 4");

}

}while(ch!=4);

return 0;

}

void push(){

// check if stack is full

if(top == size -1)

{

printf("Stack is full cannot Push\n");

menu();

return;

}

printf("Enter Element to Push \n");

scanf("%d",&data);

++top;

stack[top]=data;

}

void pop(){

// check for empty stack

if(top == -1)

{

printf("Stack Empty \n");

menu();

return;

}

printf("Deleted Element is %d\n",stack[top]);

--top;

return;

}

void print(){

for (int i = top; i >=0; i--) {

printf("%d \n",stack[i]);

}

}

void menu()
{
  printf("\n1 PUSH \n2 POP \n3 Print \n4 Exit \n");
}
