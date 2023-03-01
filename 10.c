//WAP to write and read roll, name and percentage of 5 students to/from data file

#include <stdio.h>
void main(){
	FILE *fp;
	int roll, i;
	char name[20];
	float per;
	fp= fopen("record.txt","w");
	for(i=0;i<5;i++){
		printf("Enter Roll no, Name and Percentage");
		scanf("%d%s%f",&roll, name,&per);
		fprintf(fp,"\n%d %s %f",roll,name,per);
	}
	fclose(fp);
	
	fp = fopen("record.txt","r");
	printf("output from file");
	while(fscanf(fp,"%d %s %f",&roll,name,&per)!=EOF){
		printf("\nRoll is %d \t name is %s\t percentage is%f", roll, name,per);
		printf("\n"); 
	}
	fclose(fp);
}
