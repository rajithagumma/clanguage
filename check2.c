#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m;
    int* a=(int *)malloc(n*sizeof(int));
    printf("Enter the number of rows ");
    scanf("%d",&n);
    int **arr = (int **)malloc(n* sizeof(int *));
    for (int i=0;i<n;i++){
        printf("Enter the size of row %d: ", i+1);
        scanf("%d", &m);
        a[i]=m;
        arr[i] = (int *)malloc(m * sizeof(int));
        printf("enter the elenments");
        for (int j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<a[i];j++) {
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

