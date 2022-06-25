#include<stdio.h>

int stack[100],n,choice,x;
int top=-1;

void push(){
    printf("\nEnter data: ");
    scanf("%d",&x);
    if(top>=n-1){
        printf("\nStack Overflow.");
    }else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("\nStack Underflow");
    }else{
        printf("%d",stack[top]);
        top--;
    }

}
void display(){
    if(top>=0){
        for(int i=top;i>=0;i--){
            printf("\n%d",stack[i]);
        }
    }else{
        printf("\nThe Stack is empty.");
    }
}

void main(){
    printf("Enter the size of Stack[max=100]: ");
    scanf("%d",&n);
    printf("1.Push \n2.pop \n3.Display \n4.Exit");
    do{
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("\nExit.");
                break;
            }
            default:{
                printf("\nEnter given choice only.");
            }
        }
    }while(choice!=4);


   
}
