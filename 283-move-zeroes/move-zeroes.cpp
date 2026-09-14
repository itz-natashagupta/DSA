class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lastZeroFoundAt = 0;
        for(int i=0;i<n;i++) {
            if(nums[i]!=0) {
                nums[lastZeroFoundAt++] = nums[i];
            }
        }
        for(int i=lastZeroFoundAt;i<n;i++) {
            nums[i] = 0;
        }
    }
};