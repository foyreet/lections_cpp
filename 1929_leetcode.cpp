#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        std::vector <int> a;
        for (int i = 0; i < nums.size(); i++) {
            a.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            a.push_back(nums[i]);
        }
        return a;
    }
};

int main() {
    Solution solution;
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::vector<int> result = solution.getConcatenation(a);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}