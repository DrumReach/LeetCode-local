#include<iostream>
#include<vector>

using std::cout;
using std::vector;
/*
    Approach 2 form Solution

    Soluution$ is approach $ from leet/solution
*/
class Solution3{
public:
        
    vector<int> moveZeros(vector<int>& nums){
        int lastNonZero = 0;
        for(int i = 0; i < nums.size(); i ++){
            if (nums[i] != 0){
                std::swap(nums[lastNonZero], nums[i]);
                lastNonZero++;
            }
        }

        return nums;
    }
};

class Solution2{
    public:
    vector<int> moveZeros(vector<int>& nums){
        int lastNonZero=0;

        //move all non zero elements to the begining
        for( int i = 0; i< nums.size(); i ++){
            if(nums[i] != 0){
                nums[lastNonZero] = nums[i];
                lastNonZero++;
            }
        }

        //overwrite the remainder with zeros
        for(int i = lastNonZero; i<nums.size(); i++)
            nums[i] = 0;


        return nums;
    }
};

int main(){

    //change number for diff. apr.
    Solution2 sol;
    vector<int> nums = {0,1,3,0,12};
    nums = sol.moveZeros(nums);

    vector<int>::iterator iter;
    for(iter = nums.begin(); iter != nums.end(); iter++){
        cout << *iter << " ";
    }

}