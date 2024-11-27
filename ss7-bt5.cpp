#include <stdio.h>

int main() {
    int arr[5] = {3, 5, 9, 1, 7};
    int min=arr[0] , max = arr[0];
	for (int i = 1; i<5; i++){
		if (arr[i]<min){
			min=arr[i]; 
		}
		if ( arr[i]> max){
			max=arr[i]; 
		} 
	}
    printf("Phan tu be nhat o trong mang la: %d\n", min);
	printf("Phan tu lon nhat o trong mang la; %d\n", max);
	
    return 0;
}
