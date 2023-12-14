#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numToIndex;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numToIndex.find(complement) != numToIndex.end()) {
            result.push_back(numToIndex[complement]);
            result.push_back(i);
            return result;
        }

        numToIndex[nums[i]] = i;
    }

    return result;
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> indices = twoSum(nums, target);

    if (indices.size() == 2) {
        std::cout << "Output: [" << indices[0] << ", " << indices[1] << "]" << std::endl;
        std::cout << "Explanation: Because nums[" << indices[0] << "] + nums[" << indices[1] << "] == " << target << ", we return [" << indices[0] << ", " << indices[1] << "]." << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}

