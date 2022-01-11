#include<stdio.h>

int stack[5];       //declaring globally
int top=-1;


void display()                 // function for display
{
    int i;
    printf("\n********* stack status*********\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    
}

void push()                           //function for inserting 
{
    int element;
    printf("Enter the element: ");
    scanf("%d",&element);
    
    if(top==5-1)
    {
        printf("Stack Overflow");            //if stack is full
        display();
    }
    
    else
    {
        top++;
        stack[top]=element;                    //insert element in the stack
        display();
    }
}

void pop()                   //function for deletion
{
    int temp;
    if(top==-1)
    {
        printf("Stack underflow");              //if stack is empty
        display();
    }
    else
    {
        temp=stack[top];
        top--;
        printf("The popped item is %d",temp);
        display();
    }
}

void peek()                         //value of the top element
{
    	if(top==-1)
	{
		printf("stack empty");
		display();
	}
	else
	{
		printf("\n%d\n",stack[top]);
		display();
	}
}

int main()
{
    int choice=0 ;

	printf("Enter 1 for push\n");           //for push
	printf("Enter 2 for pop\n");           //for pop
	printf("Enter 3 for peek\n");         //for peek
	printf("Enter 4 for break\n");       //for break
	
	while(1)
	{
	    printf("Enter your choice ");
        scanf("%d",&choice);
        
        if(choice==1)
        {
            push();
        }
        else if(choice==2)
        {
            pop();
        }
        else if(choice==3)
        {
            peek();
        }
        if(choice==4)
        {
            break;
        }
	
	}
}
