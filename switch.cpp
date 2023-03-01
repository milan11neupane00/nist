#include<stdio.h>
int sum(int,int);
int dif(int,int);
int pro(int,int);
int main(){
	int a,b,c,ch;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\n1. Sum");
	printf("\n2. Difference");
	printf("\n3. Product");
	printf("\nEnter choice(1-3)");
	scanf("%d",&ch);
	if(ch==1){
		printf("The sum is %d",sum(a,b));
	}
	else if(ch==2){
		printf("The difference is %d",dif(a,b));
	}
	else if (ch==3){
		printf("the difference is %d",pro(a,b));
	}
	else{
		printf("Input error");
	}
	}
int sum(int a, int b){
	return a+b;
}
int dif(int a,int b){
	return a-b;
}
int pro(int a,int b){
	return a*b;
}
