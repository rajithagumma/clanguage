#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m;
    scanf("%d%d",n,m);
    int** arr= (int**)malloc(n * sizeof(int*));
    for (int i = 0; i <n; i++) {
        arr[i] = (int*)malloc(m * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

