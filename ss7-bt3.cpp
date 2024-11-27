#include <stdio.h>

int main(){
	int arr[5]={5,7,8,10,12};
	int count=0; 
	for ( int i=1 ; i<5; i++){
		if( arr[i] % 2 == 0){ 
		   printf("arr[%d] = %d \n", i, arr[i]);
		   count++; 
	}
	}
	if (count=0){
		printf("Không co so chan nao"); 
	} 
	return 0; 
}
