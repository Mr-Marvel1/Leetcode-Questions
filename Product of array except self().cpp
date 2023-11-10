class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        vector<int>a(nums.size());
       for(int i=0;i<nums.size();i++){
           a[i]=p;
            p=p*nums[i];
       }
       int r=1;
       for(int j=nums.size()-1;j>=0;j--){
           a[j]=a[j]*r;
           r=r*nums[j];
       }
       return a;
    }
};
