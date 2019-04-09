#include<stdio.h>
int A[10], top=-1; 						// Creating Stack
int size_A = sizeof(A)/sizeof(A[0]); 	// Calculating Size of Array
/* Driver Functions */
void Push(int data);
int Pop();
void PrintStack();
int IsEmpty();

/* Main Method */
int main()
{
	Push(1);
	Push(2);
//	Push(33);
//	Push(2);
//	Push(3);
	Pop(); 			// Delete 3 from starting
	//Pop(); 			// Delete 2 from starting

	PrintStack(); 	//Print Stack

return 0;
}

/* Check for empty stack */
int IsEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

/* Insert Element */
void Push(int data)
{
	if(IsEmpty())
		top = 0;
	else if( top == size_A )
		printf("\n Stack is Full \n");
	else
		top++;

	A[top] = data;
}

///* Delete Element */
int Pop()
{
	if(IsEmpty())
		printf("\n Stack is Empty \n");
	else
		top--;

	return A[top-1];
}

/* Print Stack */
void PrintStack()
{
	int i=0;
	for(i=0;i<=top;i++)
		printf(" %d",A[i]);
}
