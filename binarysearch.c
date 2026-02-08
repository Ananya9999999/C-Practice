#include <stdio.h>
int search(int arr[], int n, int x){
    int low=0;
    int high= n-1;
    while (low<=high){
        int mid= low+ (high-low)/2;
        if (arr[mid]==x) return mid;
        else if (arr[mid]<x) low= mid+1;
        else high= mid-1;
    }
    return -1;
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
    if (res==-1) printf("Not found");
    else printf("Found at %d", res);
    return 0;
}