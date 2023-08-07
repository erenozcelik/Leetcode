//
// Created by ereno on 07/08/2023.
//

#include "two_sum.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {

    std::vector <int> result;

    for (auto it1 = nums.begin(); it1 != nums.end(); ++it1){
        auto it2 = find(it1+1, nums.end(), target - *it1);
        if (it2 != nums.end()){ // found the number

            result.push_back(it1 - nums.begin()); // it1 --> pointer ==> add difference of addresses
            result.push_back(it2 - nums.begin());
            break;

        }
    }

    return result;
}


int main(){

    std::vector<int> nums{2, 7, 11, 15};
    int target = 9;

    Solution solution;

    std::vector<int> results = solution.twoSum(nums, target);

    for (int index : results) {
        std::cout << index << " ";
    }

    return 0;

}