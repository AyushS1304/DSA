//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]==9){ //if number is 9 make it zero
                digits[i]=0;
            }
            else{
                digits[i]++; //if not 9 add and  return 
                return digits;
            }
        }
        digits.resize(n+1); // if all are 9 inc size of array
        digits[0]=1; // put 1 in starting eg :999->1000
        return digits;
    }
};