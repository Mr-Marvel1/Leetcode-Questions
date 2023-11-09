class Solution {
public:
    int reverse(int x) {
       int a=0;
       while(x!=0){
          int b=x%10;
           if((a>INT_MAX/10) || (a<INT_MIN/10)){
               return 0;
           }
           a=a*10 + b;
           x=x/10;
       } 
       return a;
    }
};
