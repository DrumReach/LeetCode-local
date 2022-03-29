#include<stdio.h>
#define SIZE 10
int removeDuplicates(int *nums, int numsSize){
	
	if (numsSize == 0) return 0;
	int k = 1;

	for(int i = 1; i < numsSize; i++){
		if(nums[i] != nums[i -1]){
			nums[k] = nums[i];
			k++;
		}
	}
	//print array
	for(int i = 0; i < k; i++){
		printf("%d ", nums[i]);
	}
	return k;
}

int main(){
	//int nums[SIZE] = {0,0,1,1,1,2,2,3,3,4};
	int k;
	int nums[0] = {};
	k = removeDuplicates(nums, SIZE);

}
