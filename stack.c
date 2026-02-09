#include<stdio.h>
int top=-1;

void push(int arr[], int n, int x){
    if (top==n-1) printf("Stack overflow\n");
    else {
        top++;
        arr[top]= x;
        printf("Element %d pushed onto stack\n", x);
    }
}

void pop(int arr[], int n){
    if (top==-1) printf("Stack underflow\n");
    else{
        int x= arr[top];
        top--;
        printf("Element %d popped from stack\n", x);
    }
}

void display(int arr[], int n){
    if (top==-1) printf("Stack empty\n");
    else {
        printf("Stack elements:\n");
        for (int i=top; i>0; i--){
            printf("%d ", arr[i]);
        }
    }
}

void peek(int arr[], int n){
    if (top==-1) printf("Stack empty\n");
    else {
        printf("Top element: %d\n", arr[top]);
    }
}

int main(){
    int n;
    printf("Enter the size of stack: ");
    scanf("%d", &n);
    int arr[n];
    while (1){
        int ch;
        printf("Enter choice:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        if (ch==1){
            int x;
            printf("Enter element to push: ");
            scanf("%d", &x);
            push(arr, n, x);
        }
        else if (ch==2){
            pop(arr, n);
        }
        else if (ch==3){
            display(arr, n);
        }
        else if (ch==4){
            peek(arr, n);
        }
        else if (ch==5){
            printf("Thank You!\n");
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }
}