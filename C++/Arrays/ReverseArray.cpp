//optimal(2 pointer)
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
};

//stl approach
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
      
        reverse(arr.begin(),arr.end());
    }
};