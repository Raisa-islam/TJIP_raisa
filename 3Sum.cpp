lass Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i<size-2; i++){
            if(i!=0 && (nums[i])==nums[i-1]){
                continue;
            }
           
            for(int j = i+1; j<size-1; j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int x = -nums[i]-nums[j];
                // for(int k = j+1; k<size; k++){
                //     if((x+nums[k])==0){
                        
                //         result.push_back({nums[i], nums[j], nums[k]});
                //         break;
                //     }
                // }
                int start = j+1;
                int end = size-1;
                int mid;
                while(start<=end){
                    mid = (start+end)/2;
                    if(nums[mid]==x){
                        result.push_back({nums[i], nums[j], nums[mid]});
                        break;
                    }
                    else if(nums[mid]< x){
                       
                        start = mid+1;
                    }
                    else {
                         end = mid-1;
                    }

                }
                
            }
            
            
        }
        return result;
    }
};
