//Time Complexity:O(n^3)
//Space Complexity:O(1)
class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size();

        int res=0;

        for(int i=0;i<n;i++){
            //a
            int x1=points[i][0];
            int y1=points[i][1];

            for(int j=0;j<n;j++){
                //b
                if(i==j){
                    continue;
                }

                int x2=points[j][0];
                int y2=points[j][1];

                if(x1<=x2 && y1>=y2){
                    bool pointinside=false;
                    for(int k=0;k<n;k++){
                        //c
                        if(k==i || k==j){
                            continue;
                        }
                        int x3=points[k][0];
                        int y3=points[k][1];

                        if(x3>=x1 && x3<=x2 && y3<=y1 && y3>=y2){
                            pointinside=true;
                            break;
                        }

                    }
                    if(!pointinside){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};