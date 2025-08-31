//Time Complexity:O(n)
//Space Complexity:O(1)
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int  maxdl=INT_MIN;
        int maxarea=0;
        for(auto d:dimensions){
            int l=d[0];
            int w=d[1];

            int dl=(l*l +w*w);
            // int dl=sqrt(dl1);
            int area=l*w;

            if(dl>maxdl){
                maxdl=dl;
                maxarea=area;
            }
            else if(dl==maxdl){
                maxarea=max(maxarea,area);
            }

            
        }
        return maxarea;
        
    }
};