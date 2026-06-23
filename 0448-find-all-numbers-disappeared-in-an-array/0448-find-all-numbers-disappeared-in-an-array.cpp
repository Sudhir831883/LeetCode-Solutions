class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> dup(nums.size()+1,0);

        vector<int> missing;

        for(int i=0; i<nums.size(); i++){
            dup[nums[i]]++;
        }

        for(int i=1; i<dup.size(); i++){
            if(dup[i]==0){
                missing.push_back(i);

            }
        }
        return missing;

        
    }
};