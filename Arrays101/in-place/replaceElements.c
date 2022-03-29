#include<stdio.h>
#include<stdlib.h>
/*
Given an array arr, replace every element 
in that array with the greatest element 
among the elements to its right, 
and replace the last element with -1.
*/

int* replaceElements(int* arr, int arrSize){
    int cur_max = -1;
    int tmp;

    for (int i = arrSize-1; i>=0; i--) {
        tmp = arr[i];
        arr[i] = cur_max;
        if (tmp>cur_max) 
            cur_max = tmp;
    }
    return arr;
}

int main(){
    int *arr = malloc(sizeof(int) * 6);
    arr[0] = 17;
    arr[1] = 18;
    arr[2] = 5;
    arr[3] = 4;
    arr[4] = 6;
    arr[5] = 1;

    arr = replaceElements(arr, 6);

    //print array
    for (int i = 0; i<6; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
}