
#include<stdio.h>
#include<conio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void display();

void main()
{
    printf("Enter the number of elements in the stack : ");
    scanf("%d",&n);
    printf("\n******Stack operations using array *******");
    printf("\n-----------------------------------\n");
   
    while(choice!=4)
    {
        printf("Chose one from the below options\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4: 
                exit(1);
                break;
            default:
                printf("Please enter valid choice");
        }
    };
 
}

void push()
{
     int val;
     if(top == n) {
        
         printf("\n Overflow");
     }
     else {
         printf("Enter any value : ");
         scanf("%d",&val);
         top=top+1;
         stack[top]=val;
     }
}

void pop()
{
    int y;
    if(top==-1){
     printf("Underflow\n");
    }
    else
    {
        y=stack[top];
        top--;
        printf("The poped item is : %d\n",y);
    }
    
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
    if(top==-1){
     printf("Stack is empty\n");
    }
 
}
