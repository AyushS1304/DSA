//Optimized Approach
//Time Complexity : O(n+klogn)  n for positions and sum loop  logn for lower and upper bound
class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n=fruits.size();

        vector<int>prefixsum(n); //make a vector for prefix sum
        vector<int>positions(n); //make for positions

        for(int i=0;i<n;i++){
            positions[i]=fruits[i][0];

            prefixsum[i]=fruits[i][1] + (i>0? prefixsum[i-1] :0);
        }

        int maxfruit=0; //maxfruits

        for(int d=0;d<=k/2;d++){  //always d<=k/2 so that value is positive always
            //case1-left->right
            int remain=k-2*d;
            int i=startPos-d; //left pos
            int j=startPos+remain; // right pos

            int left=lower_bound(positions.begin() , positions.end(),i)-positions.begin(); //subtract begin as the lower_bound function gives pointer
            int right=upper_bound(positions.begin() , positions.end(),j)-positions.begin()-1; //subtract begin as the upper_bound function gives pointer

            if(left<=right){
                int total=prefixsum[right]-(left>0?prefixsum[left-1]:0); //taking sum of the full
                maxfruit=max(maxfruit,total);
            }

            //case2 right->left
            
           i=startPos-remain;
            j=startPos+d;

             left=lower_bound(positions.begin() , positions.end(),i)-positions.begin(); //subtract begin as the lower_bound function gives pointer
             right=upper_bound(positions.begin() , positions.end(),j)-positions.begin()-1; //subtract begin as the upper_bound function gives pointer

            if(left<=right){
                int total=prefixsum[right]-(left>0?prefixsum[left-1]:0);
                maxfruit=max(maxfruit,total);
            }
        }
        return maxfruit;

    }
};