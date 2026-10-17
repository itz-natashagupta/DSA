class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int indexOfUnique = 0;
        int i = 1;
        while(i<n){
            if(nums[indexOfUnique] == nums[i])  i++;
            else{
                nums[++indexOfUnique] = nums[i];
                i++;
            }
        }
        return indexOfUnique+1;
    }
};