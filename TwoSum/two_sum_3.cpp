//
// Created by ereno on 07/08/2023.
//

#include "two_sum.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target){

    std::unordered_map <int, int> _map;

    for(int i{0}; i < nums.size(); ++i){

        auto it = _map.find(target - nums[i]);

        if (it != _map.end()){ // found
            return {it->second, i}; // first=value, second=key
        }
        _map[nums[i]] = i;
    }


    return {};

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
