#include<iostream>
#include<vector>

using std::cout;
using std::vector;

class SolutionSelf{
    public:
        vector<int> sortArrayByParity(vector<int>& nums){
            //k tracks the even element starting from half
            // swaps it with ith element if nums[k] is even
            //cannot keep order
            int n = nums.size();
            int k = n/2;
            // #TODO doesnt work for {1,0}
            //bad solution
            if (n == 2){
                if(nums[0] % 2 != 0){
                    std::swap(nums[0], nums[1]);
                    return nums;
                }
            }

            //iterate first half
            for (int i = 0; i <= n/2; i++){
                //if k is even
                if(nums[k] % 2 == 0)
                    std::swap(nums[i], nums[k]);


                //skip to the next even
                while(nums[k] % 2 != 0)
                    k++;
            }

            return nums;
        }
};

class SolutionLeet{
public:
    vector<int> sortArrayByParity(vector<int>& nums){
        /* 
            i starts with the first index
            k starts with last
            swap if nums i is odd and numsk is even
            if not skip
            until i and k meet
        */
        int i = 0;
        int k = nums.size() - 1;

        while(i < k){
            //if ni is odd and nk is even swap
            if(nums[i] % 2 > nums[k] % 2)
                std::swap(nums[i], nums[k]);
            
            //if nums i is even skip
            if(nums[i] %2 == 0) i++;
            //if nums k is odd skip prev
            if(nums[k] %2 == 1) k--;
        }

        return nums;
    }
};


int main(){
    SolutionLeet s;
    //vector<int> nums = {3,1,2,4,6,7,8,3,2,};
    vector<int> nums = {1,0};

    nums = s.sortArrayByParity(nums);

    vector<int>::iterator i;
    for(i = nums.begin(); i != nums.end(); i ++)
        cout << *i << " ";
}