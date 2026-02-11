#include<stdio.h>
#include<math.h>

int add(int a, int b){
    int res= a+b;
    return res;
}

int sub(int a, int b){
    int res= a-b;
    return res;
}

int mul(int a, int b){
    int res= a*b;
    return res;
}

int div(int a, int b){
    if(b==0){
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 or handle as needed
    }
    int res= a/b;
    return res;
}

int main(){
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result;
    switch(operator){
        case '+':
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '-':
            result = sub(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '*':
            result = mul(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '/':
            result = div(num1, num2);
            if (num2 != 0) {
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}