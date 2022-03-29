#include<stdio.h>
#include <stdbool.h>

bool validMountainArray(int *arr, int arrSize){
	int i = 0;

	while (i+1 < arrSize && arr[i] < arr[i + 1])
		i ++;
	
	if(i == 0 || i == arrSize - 1)
		return false;

	while(i+1 < arrSize && arr[i] > arr[i+1])
		i++;

	return i == arrSize-1;
}

int main(){
	int arr[] = {0,2,3,4,5,5,1,0};

	if(validMountainArray(arr, 8))
		printf("True");
	else
		printf("false");
}