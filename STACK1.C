#include<stdio.h>
#include<conio.h>

#define SIZE 20
/* size of the stack is fixed with 20 element.
One can change the size from #define   */
int stack[SIZE];
int top = -1;

void main()
{
	int choice;

	do
	{
		clrscr();
		printf("*** MENU ***\n");
		printf("\n1.Push\n2.Pop\n3.Print\n4 Exit");
		printf("\nEnter Your Choice.... : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
					push();
					break;
			case 2:
					pop();
					break;
			case 3:
					print();
					break;
			case 4:
					exit(0);
		}
		getch();
	}while(choice != 4);
}


push()
{
	int val,p=0;
	printf("\nEnter value you want to push in stack: ");
	scanf("%d",&val);
	if(val < 0 || val > 9)
	{
		printf("\nPlease enter number between 0 to 9");
		return 1;
	}
	else
	{
	if(top==-1)
	{
		top = top + 1;
		stack[top] = val;
		printf("\nElement entered in stack is %d",stack[top]);
	}
	else
	{       p=stack[top];
		printf("\nvalue of val is %d",val);
		if(val!=(p+1))
		{
			printf("\nSorry you have entered wrong element");
			printf("\nPlease enter element which is plus 1 to the last entered element in stack");
		}
		else
		{
			top = top + 1;
			stack[top] = val;
			printf("\nenter element is %d at %d position",stack[top],top);
			p=val;
		 }
		 if(top == SIZE - 1)
		{
			printf("\nstack Overflow...");
		}
      }
	    return 0;
	}
}

pop()
{
	if(top == -1)
	{
		printf("\nstack Underflow...");
	}
	else
	{
		printf("\nDeleted element is : %d",stack[top]);
		top = top - 1;
	}
	return 0;
}

print()
{
	int i;

	if(top == -1)
		printf("\nStack is Empty...");
	else
	    for(i=top;i>=0;i--)
		printf("\n%d",stack[i]);
		return 0;
}