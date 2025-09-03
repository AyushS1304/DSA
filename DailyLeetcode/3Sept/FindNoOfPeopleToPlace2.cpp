//Time complexity:o(n^2)
//Space complexity:o(1)
class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size();

        int res=0;

        auto lambda=[](vector<int>&points1 , vector<int>&points2){
            if(points1[0]==points2[0]){
                return points1[1]>points2[1];
            }
            return points1[0]<points2[0];

        };
        sort(points.begin(),points.end(),lambda);
        for(int i=0;i<n;i++){
            //a
            int x1=points[i][0];
            int y1=points[i][1];

            int maxY=INT_MIN;

            for(int j=i+1;j<n;j++){
                //b
                int x2=points[j][0];
                int y2=points[j][1];

                if(y2>y1){
                    continue;
                }
                if(y2>maxY){
                    res++;
                    maxY=y2;
                }
            }
        }
        return res;
    }
};