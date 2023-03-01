// WAP designing a menu base system which has the following features:
//a. Writing records
//b. Reading records
//c. Appending records
//d. Deleting file
#include <stdio.h>
void write();
void read();
void append();
void delete();

struct std{
	int roll;
	char name[20];
}s;
void main(){
	int ch;
	printf("1.write\n2.Read\n3.Append\n4.delete\nEnter your choice");
	scanf("%d",&ch);
	switch(ch){
		case 1: 
			write();
			break;
		case 2: 
			read();
			break;
		case 3:
			append();
			break;
		case 4:
			delete();
			break;
		default:
			printf("Invalid Input");
	}
}
void write(){
	FILE *fp;
	fp=fopen("std.txt","w");
	printf("Enter  roll & name of student");
	scanf("%d%s",&s.roll,s.name);
	fprintf(fp,"\n%d %s",s.roll,s.name);
	fclose(fp);
}
void read(){
	FILE *fp;
	fp=fopen("std.txt","r");
	while(fscanf(fp,"%d %s",&s.roll,s.name)!=EOF){
		printf("\nRoll is %d \t name is %s", s.roll, s.name);
		printf("\n"); 
	}
	fclose(fp);
}
void append(){
	char c;
	FILE *fp;
	fp=fopen("std.txt","a");
	do{
		printf("Enter Roll no, Name");
		scanf("%d%s",&s.roll, s.name);
		fprintf(fp,"\n%d %s",s.roll,s.name);
		printf("Do You want to continue");
		c=getche();
		printf("\n");
	}
	while(c=='y');
	fclose(fp);
}
void delete(){
	remove("std.txt");
}
