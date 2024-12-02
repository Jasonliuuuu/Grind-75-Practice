#include <vector> 
#include <iostream>
#include <stdlib.h> 
using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size()-1 ; i++){
            for (int j = i+1; j < nums.size(); j++){
                if (nums[j] + nums[i] ==target){
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);

    for (int index : result) {
        cout << index <<endl; 
    }

    return 0;
}