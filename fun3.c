#include <stdio.h>
#include <stdlib.h> // Include the necessary header for dynamic memory allocation
#include <string.h>
char* range(int, int, int);

int main() {
    int u, l, n;
    char* res;
    scanf("%d%d%d", &u, &l, &n);
    res = range(u, l, n);
    printf("%s", res);
    
    // Free the allocated memory for the result string
    free(res);
    
    return 0;
}

char* range(int u, int l, int n) {
    char* res;
    if (n > l && n < u) {
        res = malloc(4 * sizeof(char)); // Allocate memory for the result string "yes"
        strcpy(res, "yes"); // Copy the string "yes" into the allocated memory
    }
    else {
        res = malloc(3 * sizeof(char)); // Allocate memory for the result string "NO"
        strcpy(res, "NO"); // Copy the string "NO" into the allocated memory
    }
    return res;
}

