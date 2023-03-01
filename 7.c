//WAP that reads names and address of different students and rearrange them on the basis of name in alphabetic order
#include <stdio.h>
#include <string.h>
struct detail{
	char name[20];
	char address[20];
}std[5],temp;
void main(){
	int i,j;
	for(i=0;i<5;i++){
		printf("Enter Name and Address");
		scanf("%s%s",std[i].name,std[i].address);
	}
//	arranging in accending order
	for(i=0;i<5;i++){
		for(j=i+1;j<4;j++){
			if(strcmp(std[i].name,std[j].name)<0){
				temp=std[i];
				std[i]=std[j];
				std[j]=temp;
				}
		}
	}
	
	for(i=0;i<5;i++){
		printf("name:%s\taddress:%s\n",std[i].name,std[i].address);
	}
}
