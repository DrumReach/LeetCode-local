#include<stdio.h>
#include<stdlib.h>
int swap(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}
int *removeElement(int* nums, int numsSize, int val){
	//remove all instances of val from num
	int count = 0;
	for(int i = 0; i <numsSize; i++){
		if(nums[i] == val){
			count++;
			swap(nums[i], nums[numsSize - count - 1]);
		}
	}
	return nums;

}

int main(){
	int k;	
	int numsSize = 4;
	int *nums = malloc(sizeof(int)* numsSize);
	
	for(int i = 0; i< numsSize; i++){
		scanf("%d", &nums[i]);
	}
	
	nums = removeElement(nums, numsSize, 3);
	for(int i = 0; i<numsSize; i++){
		printf("%d ", nums[i]);
	}
	free(nums);
}
