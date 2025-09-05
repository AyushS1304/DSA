//Time Complexity:O(n^2)
//Space Complexity:O(n)
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        // int n=grid.size();
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>mat(n,vector<int>(n,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[i-j].push_back(grid[i][j]);
                
            }
        }
        for(auto &it:mp){
            if(it.first>=0){
                sort(it.second.begin(),it.second.end(),greater<int>());
            }
            else{
                sort(it.second.begin(),it.second.end());
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = mp[i - j].front();
                mp[i - j].erase(mp[i - j].begin());
            }
        }
        return mat;

    }
};