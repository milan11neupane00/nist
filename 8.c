//WAP that takesemp_id,nameand salary of 10 employees and print the records of the employeewho has maximum salary.
#include <stdio.h>
struct emp{
	int id;
	char name[10];
	int salary;
}emp[10],temp;
int main(){
	int i,j;
//	taking input
	for(i=0;i<10;i++){
		printf("enter emp id");
		scanf("%d",&emp[i].id);
		printf("enter emp name");
		scanf("%s",emp[i].name);
		printf("enter emp salary");
		scanf("%d",&emp[i].salary);
		printf("\n New detail\n");
	}
//	arranging in decending order so i=0 will be max 
	for(i=0;i<10;i++){
		for(j=i+1;j<9;j++){
			if(emp[i].salary<emp[j].salary){
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
				}
		}
	}
//	diplaying max salary
	printf("The max salary is %d with emp id %d name:%s",emp[0].salary,emp[0].id,emp[0].name);
	
}
