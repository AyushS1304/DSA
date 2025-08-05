//using reverse function
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+n-d,arr.end());
        reverse(arr.begin(),arr.begin()+n-d);
        
       
    }
};

//using loop
//Time Complexity=O(n)
//Space Complexity=O(n)

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        d=d%n;
        vector<int>temp(n);
        for(int i=0;i<n-d;i++){
            temp[i]=arr[d+i];
        }
        for(int i=0;i<d;i++){
            temp[n-d+i]=arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
        
    }
};