#include<stdio.h>
void display(int rows1, int cols1, int rows2, int cols2,int matrix1[rows1][cols1], int matrix2[rows2][cols2]);
int main() {
    int i, j, rows1, cols1, rows2, cols2;
    printf("enter number of rows for first matrix");
    scanf("%d", &rows1);
    printf("enter number of columns for first matrix");
    scanf("%d", &cols1);
     int matrix1[rows1][cols1];
     printf("\nenter elements for first matrix");
    for (i = 0;i < rows1;i++) {
        for (j = 0;j < cols1;j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    display(rows1,cols1,matrix1);
    return 0;
    printf("enter number of rows for second matrix");
    scanf("%d", &rows2);
    printf("enter number of columns for second matrix");
    scanf("%d", &cols2);
    int matrix2[rows2][cols2];
    printf("\nenter elements for second matrix");
    for (i = 0;i < rows2;i++) {
        for (j = 0;j < cols2;j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    display(rows2, cols2, matrix2);
    return 0;
}
void display(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("\nentered matrix");
    for (i = 0;i < rows;i++) {
        printf("\n");
        for (j = 0;j < cols;j++) {
            printf("%d\t", matrix[i][j]);
        }
    }

}