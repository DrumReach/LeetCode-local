#include <iostream>
#include <vector>

using std::vector;
using std::cout;

void printArray(vector<int>& nums){
            for(int i = 0; i< nums.size(); i++)
                cout << nums[i] << " ";
}

class SolutionSelf{
    public:
        vector<int> removeElement(vector<int>& nums, int val){

            //k points to last unswapped element
            //i goes through the array until k
            //moves val to the end

            int i = 0;
            int k = nums.size() - 1;

            while (i < k){

                if(nums[k] == val)
                    k--;
                
                else{

                    if (nums[i] == val){
                        nums[i] = -1;
                        std::swap(nums[i], nums[k]);
                        k--;
                    }
                    i++;
                }
            }

            return nums;
        }

};

class SolutionLeet{
    public:
        vector<int> removeElement(vector<int>& nums, int val){
            int i = 0;
            int k = nums.size();

            while (i < k){
                if( nums[i] == val){
                    nums[i] = nums[k-1];
                    k--;
                }
                else i++;
            }

            return nums;
        }
};
int main(){
    SolutionLeet s;

    vector<int> nums = {3,1,2,5,3,4,1,1};

    nums = s.removeElement(nums, 1);

    printArray(nums);
}