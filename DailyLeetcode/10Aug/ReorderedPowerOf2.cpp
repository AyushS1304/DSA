//Time complexity=O(logn)
//Space complexity=O(1)
class Solution {
public:
 // Count digit frequencies of a non-negative integer n
    vector<int> freq(int n){
        vector<int>res(10,0);
        while(n>0){
            res[n%10]++;
            n=n/10;
        }
        return res;
    }
    // Compare two frequency arrays (size 10) for equality
    bool compa(const vector<int>&a ,const vector<int>&b){
        for(int i=0;i<10;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }

    bool reorderedPowerOf2(int n) {
        // Frequency of digits in the input number n
        vector<int>freq2=freq(n);
         // Check all powers of two up to 2^30 (fits in 32-bit signed int ie till limit ie 10^9)
        for(int i=0;i<30;i++){
            int pow2=(int)pow(2,i); //2^i
            if(compa(freq2,freq(pow2))){
                return true;
            }
        }
        return false;
        
    }
};