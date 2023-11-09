class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int b=INT_MIN;
        while(s<e){
            int area=0;
            int a= e-s;
            if(height[s]>height[e]){
                area = height[e];
                e--;
            }
            else{
                area = height[s];
                s++;
            }
            area= area*a;
            if(area>b){
                b=area;
            }
        }
        return b;
    }
};
