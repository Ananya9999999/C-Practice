#include<stdio.h>
int main(){
    int r, c;
    int mat1[100][100], mat2[100][100];
    scanf("%d %d", &r, &c);
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    int res[100][100];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}