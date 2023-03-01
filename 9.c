//WAP that takesemp_id,nameand salary of 10 employees and print the records of the employeewho has maximum salary.
#include <stdio.h>
struct emp{
	int id;
	char name[10];
	float per;
}emp[5];
int main(){
	int i;
//	taking input
	for(i=0;i<5;i++){
		printf("enter emp id");
		scanf("%d",&emp[i].id);
		printf("enter emp name");
		scanf("%s",emp[i].name);
		printf("enter emp per");
		scanf("%f",&emp[i].per);
	}
	
	for(i=0;i<5;i++){
		if(emp[i].per>=80){
			printf("name:%s\tid%d\tper:%.2f\n",emp[i].name,emp[i].id,emp[i].per);
		}
	}
	
	
}
