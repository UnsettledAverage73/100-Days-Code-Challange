#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int item) {
	if (top == SIZE - 1) {
		printf("Stack Overflow! Cannot push %d\n" ,item);
	}else {
		top++;
		stack[top] = item;
		printf("Pushed %d into stack\n",item);
	}
}

void pop() {
	if (top == -1){
		printf("Stack Underflow! Cannot pop from stack\n");

	} else{
		printf("Popped %d from stack\n",stack[top]);
		top --;
	}
}

void display() {
	if (top == -1) {
		printf("Stack is empty\n");
	} else {
		printf("Current Stack: ");
		for (int i = 0; i<=top ; i++) {
			printf("%d ", stack[i]);
		}
		printf("\n");
	}
}

void main() {
	push(20);
	push(40);
	push(80);
	display();
	pop();
	display();

}

