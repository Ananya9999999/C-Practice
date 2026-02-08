#include <stdio.h>
int search(int arr[], int n, int x){
    for (int i=0;i<n; i++){
        if (arr[i]==x) return i;
    }
    return 0;
}

int main() {
    int n,x;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int res= search(arr, n, x);
    if (res==0) printf("Not found");
    else printf("Found at %d", res);
    return 0;
}