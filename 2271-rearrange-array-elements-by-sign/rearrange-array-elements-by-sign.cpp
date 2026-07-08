class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();

        vector<int> positive;
        vector<int> negative;

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                            positive.push_back(nums[i]);

            }
             if(nums[i]<0){
                            negative.push_back(nums[i]);

            }
        }

       
nums.clear();
        for(int k=0;k<n/2;k++){
            nums.push_back(positive[k]);
            nums.push_back(negative[k]);
        }
        return nums;


    }
};