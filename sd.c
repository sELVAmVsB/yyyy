//print the number given by the user by spliting
#include <stdio.h>
int main(void) {
	int n,temp,a,b,c,d;
	scanf("%d",&n);
	temp=n;
	if(temp!=0)
	{
		a=temp/100;
		b=temp%100;
		c=b/10;
		d=b%10;
	}
	printf("%d %d %d",a,c,d);
	
	return 0;#include <stdio.h>

int main(void) {
        int n,rem,rev,dig;
        scanf("%d",&n);
        while(n!=0)
        { 
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
     while(rev!=0)
    {
       dig=rev%10;
        rev=rev/10;
        printf("%d ",dig);
    }
       
}
}
