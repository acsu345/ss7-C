#include <stdio.h>

int main(){
	int a;
	int arr[a];
	printf("Moi nhap mang:");
	scanf("%d",&a);
	for (int i = 0; i<a; i++){
		printf("Xin moi nhap phan tu vao trong mang:\n");
		scanf("%d", &arr[i]);
		while(arr[i]%2==0){
			printf("Moi ban nhap lai:");
			scanf("%d", &arr[i]); 
		} 
	}
	
	return 0; 
} 
