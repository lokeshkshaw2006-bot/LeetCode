class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=0;
        int e = nums.size()-1;
        vector<int> trac = nums;
        int ans[2];
        sort(nums.begin(), nums.end());
        while(s<e){
            if(nums[s]+nums[e] == target){
                ans[0]=nums[s];
                ans[1]=nums[e];
                break;
            }else if((nums[s]+nums[e]) > target){
                e--;
            }else{
                s++;
            }
        }
        vector<int> a;
        for(int i=0; i<trac.size(); i++){
            if(trac[i]==ans[0]){
                a.push_back(i);
            }else if(trac[i] == ans[1]){
                a.push_back(i);
            }
        }
        sort(a.begin(), a.end());
        return a;

    }
};