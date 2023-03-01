//WAP that takes roll number, fname, lname of 5 students and prints the same records in ascending order on the basis of roll number
#include <stdio.h>
struct std{
	int roll;
	char fname[10];
	char lname[10];
}std[5],temp;
int main(){
	int i,j;
//	taking input
	for(i=0;i<5;i++){
		printf("enter std roll no");
		scanf("%d",&std[i].roll);
		printf("enter std fname");
		scanf("%s",std[i].fname);
		printf("enter std lname");
		scanf("%s",std[i].lname);
		printf("\n New detail\n");
	}
//	arranging in accending order 
	for(i=0;i<5;i++){
		for(j=i+1;j<4;j++){
			if(std[i].roll<std[j].roll){
				temp=std[i];
				std[i]=std[j];
				std[j]=temp;
				}
		}
	}
	
//	Printing in accending order
	for(i=0;i<5;i++){
		printf("roll:%d\n",std[i].roll);
		printf("fname:%s\n",std[i].fname);
		printf("lname:%d\n",std[i].lname);
	}
}
