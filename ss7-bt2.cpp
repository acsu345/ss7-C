#include <stdio.h>

int main(){
	int arr[5];
	printf("Moi ban nhap lan luot nam phan tu trong mang: \n");
	for(int i=0 ; i<5 ; i++){
		printf("Moi ban nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]); 
	}
	printf("Mang da duoc nhap la: \n");
	for ( int i=0 ; i<5; i++){
		printf("arr[%d] = %d \n", i, arr[i]); 
	}
	
	return 0; 
}
