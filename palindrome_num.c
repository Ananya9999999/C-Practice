#include<stdio.h>
int main(){
    int n,og, rev=0;
    scanf("%d", &n);
    og=n;
    while (n>0){
        int num= n%10;
        rev= rev*10+num;
        n= n/10;
    }
    if (rev==og) printf("Palindrome");
    else printf("Not a Palindrome");
}