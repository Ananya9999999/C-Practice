#include<stdio.h>
int main(){
    int str1[100], str2[100];
    int freq[256]= {0};
    scanf("%s", str1);
    scanf("%s", str2);
    for (int i=0; str1[i]!='\0'; i++){
        freq[str1[i]]++;
    }
    for (int i=0; str2[i]!='\0'; i++){
        freq[str2[i]]--;
    }
    for (int i=0; i<256; i++){
        if (freq[i]!=0){
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}