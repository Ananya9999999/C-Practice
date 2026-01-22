#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int rev=0;
    while (n>0){
        int num= n%10;
        rev= rev*10+num;
        n= n/10;
    }
    printf("%d", rev);
    return 0;
}