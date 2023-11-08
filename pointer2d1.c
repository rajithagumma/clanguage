#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    printf("Enter number of columns ");
    scanf("%d", &m);
    int **arr = (int **)malloc(n* sizeof(int *));
    for (int i=0;i<n;i++){
        arr[i] = (int *)malloc(m * sizeof(int));
    }
    printf("Enter the elements of array");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<n;i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

