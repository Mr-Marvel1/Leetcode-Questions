class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n= mat[0].size();

        map<int,vector<int>>v;
        vector<int>result;

        for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
              v[i+j].push_back(mat[i][j]);
          }
        }

        bool f=true;
        for(auto &it : v){
            if(f){
                reverse(it.second.begin(),it.second.end());
            }
        
        for(auto &num : it.second){
            result.push_back(num);
        }
        f = !f;
        }
     return result;
}    
};
