#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d", &n);
    while (n>0){
        int num= n%10;
        sum+= num;
        n=n/10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}