class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int flag =0;
        for(int i = 0; i<nums.size();i++){
            int x = target-nums[i];
            for(int j = i+1; j<nums.size(); j++){
                if(nums[j]==x){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag =1;
                    break;
                }

            }
            if(flag==1){
                break;
            }
        }
        
        return ans;
    }
};
