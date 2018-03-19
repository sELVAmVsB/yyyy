#include<stdio.h>
int main(void)#include <stdio.h>
int main()
{
	int x=1,y=1,n,z,f;
	printf("enter the number ");
	scanf("%d",&n);
	printf("\n %d \t %d",x,y);
	for(f=1;f<=n-2;f++)
	{
		z=x+y;
		printf("\t%d",z);
		x=y;
		y=z;
		
		
	}
{#include<stdio.h>
int main()#include<stdio.h>
void main()
{
int a[10],i,big;
printf("\n enter 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",a[i]);
}
big=a[0];
for(i=1;i<10;i++)
{
if(a[i]>a[0])
{
big=a[i];
}
}
printf("Biggest number %d",big);
}
{
int x,y;
printf("enter the two numbers");
scanf("%d%d",&x&y);
printf("before swapping the number");
swap(x,y);
printf("after swapping the number");
swap(y,x);
getch();
}
