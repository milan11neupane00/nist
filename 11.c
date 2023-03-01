//WAP that stores roll, name and percentage of students to a data file until you press y-yes and finally display the contents to the data file.

#include <stdio.h>
void main(){
	FILE *fp;
	int roll, i;
	char name[20];
	float per;
	char c;
	fp= fopen("record.txt","w");
	do{
		printf("Enter Roll no, Name and Percentage");
		scanf("%d%s%f",&roll, name,&per);
		fprintf(fp,"\n%d %s %f",roll,name,per);
		printf("Do You want to continue");
		c=getche();
		printf("\n");
	}
	while(c=='y');
	fclose(fp);
	
	
	fp = fopen("record.txt","r");
	printf("output from file");
	while(fscanf(fp,"%d %s %f",&roll,name,&per)!=EOF){
		printf("\nRoll is %d \t name is %s\t percentage is%f", roll, name,per);
		printf("\n"); 
	}
	fclose(fp);
}
