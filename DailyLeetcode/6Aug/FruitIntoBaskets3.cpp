//Segment Tree
//Time Complexity=O(nlogn)
//Space Complexity=O(4n) size of segment tree
class Solution {
public:
    void build(int i,int l,int r,vector<int>& baskets, vector<int>& segmenttree){
        if(l==r){
            segmenttree[i]=baskets[l];
            return;
        }
        int mid=l+(r-l)/2;

        build(2*i+1,l,mid,baskets,segmenttree);
        build(2*i+2,mid+1,r,baskets,segmenttree);

        segmenttree[i]=max(segmenttree[2*i+1] ,segmenttree[2*i+2]);
    }
    //to check placed or not
    bool queryst(int i,int l,int r, vector<int>& segmenttree , int fruit){
        if(segmenttree[i]<fruit){
            return false;
        }
        if(l==r){ //mark it and assign the fruit to the basket
            segmenttree[i]=-1;
            return true;
        }
        int mid=l+(r-l)/2;
        bool placed=false;
        if(segmenttree[2*i+1]>=fruit){
            placed=queryst(2*i+1,l,mid,segmenttree,fruit);

        }
        else{ //segmenttree[2*i+1]<fruit
         placed=queryst(2*i+2,mid+1,r,segmenttree,fruit);



        }
        segmenttree[i]=max(segmenttree[2*i+1],segmenttree[2*i+2]);

        return placed;
    }
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();

        vector<int>segmenttree(4*n,-1); //segment tree is always 4 times the original length

        build(0,0,n-1,baskets,segmenttree); //build the segment tree recursively
        
        int unplaced=0;
        for(int &f:fruits){
            if(queryst(0,0,n-1,segmenttree,f)==false){ //check if number can be placed means if the fruit is less than the basket 
                unplaced++;
            }
        }
        return unplaced;
    }
};