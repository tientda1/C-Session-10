
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
for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j++) {
            int key = arr[i][j];
            int k = j - 1;
            while (k >= 0 && arr[i][k] > key) {
                arr[i][k + 1] = arr[i][k];
                k--;
            }
            arr[i][k + 1] = key;
        }
    }
for(int i=0; i<m; i++){
        for(int f=0; f<n; f++){
        printf("[%d]",arr[i][f]);
        }
        printf("\n");
    }
}

