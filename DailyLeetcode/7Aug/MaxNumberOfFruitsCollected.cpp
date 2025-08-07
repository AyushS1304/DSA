//Memoisation
// Time Complexity: O(n²)
// Space Complexity: O(n²)
class Solution {
public:
int n;
vector<vector<int>>t;
// child1 (0,0) can only move diagonal as then only
// we can reach final cell in n-1 moves
    int child1collect(vector<vector<int>>& fruits){
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=fruits[i][i];
        }
        return cnt;
    }
    //child2 (0,n-1) movements we can do recursion if i>j and i==j  so we can't choose it as then it will not reach in n-1 steps
    int child2collect(int i,int j,vector<vector<int>>& fruits){
        if(i>=n || j<0 || j>=n){
            return 0;
        }

        if(i==n-1 && j==n-1){
            return 0;
        }

        if(i==j ||i >j){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int bottomleft=fruits[i][j]+child2collect(i+1,j-1,fruits);
        int bottomdown=fruits[i][j]+child2collect(i+1,j,fruits);
        int diagonal=fruits[i][j]+child2collect(i+1,j+1,fruits);

        return t[i][j]=max({bottomleft,bottomdown,diagonal});
        
    }
    //child3 (n-1,0) we can do recursion
    //if i<j and i==j we can't choose them as then it will not reach in n-1 steps
    int child3collect(int i,int j,vector<vector<int>>& fruits){
        if(i>=n || j<0 || j>=n){
            return 0;
        }

        if(i==n-1 && j==n-1){
            return 0;
        }

        if(i==j ||i <j){
            return 0;
        }

        if(t[i][j]!=-1){
            return t[i][j];
        }
        int topright=fruits[i][j]+child3collect(i-1,j+1,fruits);
        int right=fruits[i][j]+child3collect(i,j+1,fruits);
        int diagonal=fruits[i][j]+child3collect(i+1,j+1,fruits);

        return t[i][j]= max({topright,right,diagonal});
        
    }


    int maxCollectedFruits(vector<vector<int>>& fruits) {
        n=fruits.size();
        t.resize(n,vector<int>(n,-1));

        int c1=child1collect(fruits);
        int c2=child2collect(0,n-1,fruits);
        int c3=child3collect(n-1,0,fruits);

        return c1+c2+c3;
        
    }
};


//bottom up dp
// Time Complexity: O(n²)
// Space Complexity: O(n²)
  int maxCollectedFruits(vector<vector<int>>& fruits) {

        
        
        //bottom up
        int n=fruits.size();
        vector<vector<int>>t(n,vector<int>(n,0));

        //child1collect -diagonal sum

        int res=0;
        for(int i=0;i<n;i++){
            res+=fruits[i][i];
        }

        //before child2 and child3, nullify all the cells which can't be visited
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j && i+j<n-1){
                    t[i][j]=0;
                }
                else if(i>j && i+j<n-1){
                    t[i][j]=0;
                }
                else{
                    t[i][j]=fruits[i][j];
                }
            }
        }
        //child2collect start from 0,n-1 and collect when i>j
        for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){
                t[i][j]+=max({t[i-1][j-1] , t[i-1][j] , (j+1<n)?t[i-1][j+1]:0});

            }
        }
        //child3collect start from n-1,0 and collect when i<j
        for(int j=1;j<n;j++){
            for(int i=j+1;i<n;i++){
                t[i][j]+=max({t[i-1][j-1] , t[i][j-1] , (i+1<n)?t[i+1][j-1]:0});

            }
        }

        return res+t[n-2][n-1] +t[n-1][n-2];


        
    }
};