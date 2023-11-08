#include <stdio.h>
int main(){
char a[100]="rajitha";
getchar();
char b[100]="rajitha";
printf("%s\n%s",a,b);
if (a==b){
	printf("yes");
}
else{
	printf("no/n");
}
return 0;
}
