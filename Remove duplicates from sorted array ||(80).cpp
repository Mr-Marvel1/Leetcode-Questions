class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     map<int,int>mp;
     int c=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(auto i:mp){
        if(i.second>1){
            nums[c]=i.first;  
             c++;
            nums[c]=i.first;
            c++;
        }
        else {
            nums[c]=i.first;
            c++;
        }
    } 
    return c;  
    }
};
