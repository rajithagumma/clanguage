#include <stdio.h>
int main(){
	int c,d;
    int *a=&d;
    printf("%p\n",a);
    scanf("%p",&a);
    *a=10;
    printf("%d\n",d);
    return 0;
}
