//Optimized solution
//Time complexity: O(nlogn) using sorting
//Space Complexity:O(n) using map
class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>mp; //make a map for basket1 and subtract basket2 from it to get the extra elements
        int minel=INT_MAX; //keep a track of min element
        for(int &x:basket1){ //adding basket1
            mp[x]++;
            minel=min(minel,x);
        }
        for(int &x:basket2){ //subtracting basket2 to get extra
            mp[x]--;
            minel=min(minel,x);
        }
        vector<int>finallist; //-map ->extra->vector

        for(auto &it:mp){
            int cost=it.first; //element
            int count=it.second; //no. of elements

            if(count==0){
                continue;
            }
            if(count%2!=0){ //if not divisible by 2 return -1
                return -1;
            }

            for(int c=1;c<=abs(count)/2;c++){ //we use abs as after subtract it can be negative
                finallist.push_back(cost);
            }
        }
        sort(finallist.begin(),finallist.end()); //sorting so that we will have min cost using greedy
        // nth_element(finallist.begin(),finallist.begin()+finallist.size()/2,finallist.end()); // we can also use this as we are only taking elements till half size so sort only half array

        long long res=0;
        for(int i=0;i<finallist.size()/2;i++){
            res+=min(finallist[i],minel*2); //edge case we will swap indirectly through the min element to get min cost
        }
        return res;

    }
};