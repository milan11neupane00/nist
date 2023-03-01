 // MAtrix addition using function
 
 #include <stdio.h>
// declaring function prototype
int add(int[][3],int[][3]);
void main(){
	int a[3][3],b[3][3],c[3][3],i,j;
//	input for 1st element
	printf("Enter the Element of matrix A\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("A[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Element of matrix B\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("B[%d][%d]: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
//	Adding 
	s=add(a,b);
//	printing 
	printf("The sum is :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
int add(int a[][3],int b[][3]){
	int i,j,c[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	return c;
}
