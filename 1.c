// WAP to input ‘n’numbers and sort them in ascending order.
#include <stdio.h>
int main(){
	int n,i,j,temp;
	printf("enter no of terms:");
	scanf("%d",&n);
	int a[n];
//	input
	for(i=0;i<n;i++){
		printf("\nEnter Number");
		scanf("%d",&a[i]);
	}
//	Accending
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		
		}
	}
//	printing in assending
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
	
}
