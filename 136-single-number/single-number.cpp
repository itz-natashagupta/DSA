class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_value = 0; 
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            xor_value = nums[i] ^ xor_value;
        }
        return xor_value;
    }
};
