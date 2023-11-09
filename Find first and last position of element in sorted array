class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = findFirstOccurrence(nums, target);
        int end = findLastOccurrence(nums, target);
        return {start, end};
    }
     private:
    int findFirstOccurrence(vector<int>& nums, int target) {
        int result=-1,s=0,e=nums.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(nums[mid]==target){
               result= mid;
               e=mid-1;
            }
          else if(nums[mid]<target){
            s=mid+1;
           }   
           else{
               e=mid-1;
           }
           mid=(s+e)/2;
        }
           return result;
        }
         int findLastOccurrence(vector<int>& nums, int target) {
       int result=-1, s=0,e=nums.size()-1;
        int mid=(s+e)/2;
         while(s<=e){
            if(nums[mid]==target){
                result= mid;
                s=mid+1;
            }
          else if(nums[mid]<target){
            s=mid+1;
           }   
           else if(nums[mid]>=target){
               e=mid-1;
           }
           mid=(s+e)/2;
        } 
        return result;
    }
};
