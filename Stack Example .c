#include <stdio.h>
#include "stacks.h"

int stack [MAX_SIZE];     
int top = -1;     

int isempty () {

   if (top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if (top == MAX_SIZE)
      return 1;
   else
      return 0;
}

int peek () {
  if (top != -1)
   return stack[top];
  else 
  	printf ("Stack is empty\n");
}

int pop () {
   int data;

   if (isempty() != 1) {
      data = stack [top];
      top--;   
      return data;
   } 
   else
      printf("Error: Stack is empty\n");
}

void push (int data) {

   if (isfull() == 0)
   	  stack[top++] = data;   
    else 
      printf("Error: Stack is full\n");
}

void clear () {
	top = 0;
}
