#include<stdio.h>
void main(){
	int a,b,c,ch;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\n1. Sum");
	printf("\n2. Difference");
	printf("\n3. Product");
	printf("\nEnter choice(1-3)");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			c=a+b;
			printf("Sum of two numbers=%d",c);
			break;
		}
		case 2:{
			c=a-b;
			printf("Difference of two numbers=%d",c);
			break;
		}
		case 3:{
			c=a*b;
			printf("Product of two numbers=%d",c);
			break;
		}
		default:
			printf("Wrong Choice!!! Please enter 1/2/3 only");
	}
}
