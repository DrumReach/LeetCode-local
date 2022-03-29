#include<stdio.h>
#include<stdlib.h>

#define SIZE 4
// Looked to discuss :(


int swap(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}
int removeElement(int *nums, int numsSize, int val){
	int k = 0;
	for(int i = 0; i<numsSize; i++){
		if (nums[i] != val){
			nums[k++] = nums[i];
			//k++;
		}
	}
	return k;
}

int main(){
	int k;// length of items after moving all val to end
	int nums[SIZE] = {3,2,2,3};
	int val = 3;
	
	k = removeElement(nums, SIZE, 3);
	
	//print array
	for(int i = 0; i<SIZE; i++){
		printf("%d", nums[i]);
	}
}
