//Time Complexity=O(n^2)
//Space Complexity=O(n^2)
class Solution {
public:
vector<pair<int,int>>serves={{100,0},{75,25},{50,50},{25,75}};
vector<vector<double>>t;
    double prob_A(int A , int B){
        if(A<=0 && B<=0){ //if both are empty will return half the probability
            return 0.5;
        }
        if(A<=0){ //as when already A is 0  then it surely is empty
            return 1.0;
        }
        if(B<=0){ //we don't want B so we dont care will return 0
            return 0.0;
        }
        if(t[A][B]!=-1){
            return t[A][B];
        }
        double prob=0.0;
        for(auto it:serves){
            int probA=it.first;
            int probB=it.second;
            prob+=prob_A(A-probA,B-probB);
        }
        return t[A][B]= 0.25*prob;

    }
    double soupServings(int n) {
        if(n>=5000){  //if n is greater the chances of a getting A empty first 
            return 1;
        }
        t.resize(n+1,vector<double>(n+1,-1));
        return prob_A(n,n);
        
        
    }
};