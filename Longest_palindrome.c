#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    scanf("%s", str);
    int maxlen=1;
    int start=0;
    int n=strlen(str);
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int left=i, right=j, ispal=1;
            while (left<right){
                if (str[left]!=str[right]){
                    ispal=0;
                    break;
                }
                left++;
                right--;
            }
            int len= j-i+1;
            if (ispal && len>maxlen){
                maxlen=len;
                start=i;
        }
    }
    for (int i=start; i<start+maxlen; i++){
        printf("%c", str[i]);
    }
}