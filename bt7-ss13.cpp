#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
void createMatrix(int rows, int cols, int arr[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap vao gia tri arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void printMatrix(int rows, int cols, int arr[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("Nhap vao so hang: ");
    scanf("%d", &rows);
    printf("Nhap vao so cot: ");
    scanf("%d", &cols);
    if (rows <= 0 || cols <= 0 || rows > MAX_ROWS || cols > MAX_COLS) {
        printf("So nhap vao khong hop le!");
        return 1;
    }
    int arr[MAX_ROWS][MAX_COLS]; 
    createMatrix(rows, cols, arr);
    printMatrix(rows, cols, arr);

    return 0;
}
