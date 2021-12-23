#include<stdio.h>
#include<stdbool.h>
// check if there is a subset (n, m)
// which n = 2 * m
// my algo O(n^2) time
// this is wrong on leet because 4 = -2 * 2
#define SIZE 4

bool check_if_exists_On2(int *arr, int arrSize){
	if(arr == NULL || arrSize == 0)
		return false;

	bool flag = false;
	for(int i = 0; i < arrSize; i++){
		if(arr[i] % 2 == 0){// eliminate odd numbers
			for(int j = 0; j<arrSize; j++){
				if(arr[i] == 2 * arr[j])
					flag = true;
			}
		}
	}
	return flag;
}

int main(){
	int arr[SIZE] = {5,4,7,10};

	if(check_if_exists_On2(arr,SIZE))
		printf("TRUE");
	else
		printf("FALSE");
}
