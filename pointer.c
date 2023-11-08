/*#include <stdio.h>
int sum()
{
	
}
int main()
{ 
	int size,v,r;
	int A[]={1,2,3,4,5,6};
	size=sizeof(A);
	v=sizeof(A[4]);
	r=size/v;
	printf("size of a=%d\n",size);
	printf("size A[0]=%d\n",v);
	printf("number of elements is:%d\n",r);
	return 0;
}*/
/*#include <stdio.h>
void double1(int* a,int n)
{
	int sum=0;
	for (int i=0;i<n;i++)
	{
		a[i]=2*a[i];
	}
}
int main()
{
	int n=5;
	int a[5]={1,2,3,4,5};
	double1(a,n);
	for (int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}*/

/*#include <stdio.h>
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int x,y;
	x=10;
	y=20;
	swap(&x,&y);
	printf("%d%d",x,y);
	return 0;
}*/


//#include <stdio.h>
/*void print(int *a){
	for (int i=0;i<5;i++){
		
	}
}

int main(){
	int n=5;
	int a[]={1,2,3,4,5};
	int *p=a;
	print(p);
	return 0;
}*/
#include <stdio.h>
int main()
{
 char *ptr = "GeeksQuiz";
 printf("%c", *&*&*ptr);
 return 0;
}
