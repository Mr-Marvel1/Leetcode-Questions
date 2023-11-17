class Solution {
public:
    int smallestRepunitDivByK(long long k) {
        if(k%2==0 || k%5==0){
            return -1;
        }
        long long sum=0;
       for(long long i=1;i<=k;i++){
          sum = (sum*10+1)%k;
          if(sum==0){
              return i;
          }
       } 
       return -1;
    }
};
