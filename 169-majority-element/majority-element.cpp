class Solution { 
    public: 
    int majorityElement(vector<int>& nums) { 
        int n = nums.size(); 
        unordered_map <int,int> freq_map; 
        for(int i =0; i < n; i++){ 
            freq_map[nums[i]]++; 
        } 
        for(auto& p : freq_map) { 
            if(p.second > n/2) return p.first; 
        }
        return -1;  
    } 
};