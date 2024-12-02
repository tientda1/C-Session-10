#include <stdio.h>
int main(){
int m,n;
printf("Moi nhap vao so cot va so hang: ");
scanf("%d %d",&m,&n);
int arr[m][n];
for (int i=0;i<m;i++){
        for (int j=0;j<n;j++) {
            printf("Moi nhap vao arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
}
for (int j = 0; j < n; j++){
        for (int i = 1; i < m; i++){
            int key = arr[i][j];
            int k = i - 1;
            while (k >= 0 && arr[k][j] > key) {
                arr[k + 1][j] = arr[k][j];
                k--;
            }
            arr[k + 1][j] = key;
        }
    }
for(int i=0; i<m; i++){
        for(int f=0; f<n; f++){
        printf("[%d]",arr[i][f]);
        }
        printf("\n");
    }
}
