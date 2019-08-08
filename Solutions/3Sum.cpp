class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()==0)
            return {};
        vector<vector<int> > result;
        sort(nums.begin(), nums.end());
        set<vector<int> >set1;
        int n = nums.size();
        vector<int> v;
        for(int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    vector<int> ans={nums[i], nums[left], nums[right]};
                    set1.insert(ans);
                    left+=1;
                    right-=1;
                }
                else if(sum < 0) left++;
                else right--;
            }
        }
        for(auto i : set1)
            result.push_back(i);
        return result;
    }
};
