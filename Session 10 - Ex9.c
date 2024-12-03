#include <stdio.h>

int main() {
    int row, col;
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot(bang so dong): ");
    scanf("%d", &col);
    if (row != col) {
        printf("Không the sap xep.\n");
        return 0;
    }
    int arr[100][100];
    int cheo[100];
    int n = row;
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        cheo[i] = arr[i][i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (cheo[j] > cheo[j + 1]) {
                int temp = cheo[j];
                cheo[j] = cheo[j + 1];
                cheo[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i][i] = cheo[i];
    }
    printf("Mang sau khi sap xep duong cheo chinh tang dan:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

