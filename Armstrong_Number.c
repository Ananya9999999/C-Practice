#include<stdio.h>
int main(){
    int n,og,cnt=0, res=0;
    scanf("%d", &n);
    if (n==0){
        printf("Armstrong Number");
        return 0;
    }
    og=n;
    while (og>0){
        og/=10;
        ++cnt;
    }
    og= n;
    while (og>0){
        int num= og%10;
        int power=1;
        for (int i=0; i<cnt; i++){
            power*= num;
        }
        res+=power;
        og/=10;
    }
    if (res==n) printf("Armstrong Number");
    else printf("Not an Armstrong Number");
    return 0;
}
