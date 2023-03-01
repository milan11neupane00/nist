#include <stdio.h>
int main(){
	int i,j,k,a[3][3],b[3][3], sum[3][3];
	printf("Welcome to the matrix calculator\n");
	for(i=0; i<3;i++){
		for(j=0; j<3; j++){
			printf("please enter the matrix A element");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<3;i++){
		for(j=0; j<3; j++){
			printf("please enter the matrix B element");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("The Sum of Matrix is :\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
