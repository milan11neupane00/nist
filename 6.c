#include<stdio.h>
void main(){
	struct student{
		int roll;
		float marks;
		char name[30];
	}s[100],temp;
	int i,j,n=5;
	
	for(i=0;i<n;i++){
		printf("Enter the details of the students(roll,name,marks)");
		scanf("%d%s%.2f",&s[i].roll,s[i].name,&s[i].marks);
	}
// decending order	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
		if(s[i].marks>s[j].marks){
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;                         
		}
		}
	}
	printf("The details are:\n");
	for(i=0;i<n;i++){
		printf("%d%s%.2f",s[i].roll,s[i].name,s[i].marks);
	}
}                                                                                                                                                                                
