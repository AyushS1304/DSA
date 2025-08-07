
//Optimised
//Time Complexity=O(n)
//Space Complexity=O(1)
// GFG Link: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        int rightmost=arr[n-1]; //-and the rightmost must be in the array
        vector<int>temp; //array to store result
        //-we will store rightmost and
// compare it 
// if its greater or equal push in array 
// and make it new right most

        for(int i=n-1;i>=0;i--){
            if(arr[i]>=rightmost){
                rightmost=arr[i];
                temp.push_back(rightmost);
            }
        }
        reverse(temp.begin(),temp.end()); //reverse to get the right ans as we are doing reverse loop
        
        return temp;
        
        
    }
};