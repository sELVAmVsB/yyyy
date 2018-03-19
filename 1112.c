//print the number given by the user by spliting
#include <stdio.h>#53 problem
l=list(input("Enter Number"))
print(sum(map(int,l)))
int main(void) {
	int n,temp,a,b,c,d;
	scanf("%d",&n);#include<stdio.h>
int main()
{
 int num;
 printf("enter the number:");
 scanf("%d",&num);
 switch(num)
 {
 case 1:printf("one");
         break;
 case 2:printf("two");
         break;
 case 3:printf("three");
        break;
 case 4:printf("four");
        break;
 case 5:printf("five");
        break;
 case 6:printf("six");
        break;
 case 7:printf("seven");
        break;
 case 8:printf("eight");
        break;
 case 9:printf("nine");
        break;
 case 10:printf("ten");
         break;
  default:printf("nothing");
  }
  return 0;
  }
        
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
