// optimal
// Time Complexity=O(n)
// Space Complexity=O(1)
class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int secondlarge = -1;
        int large = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > large)
            {
                secondlarge = large;
                large = arr[i];
            }
            else if (arr[i] < large && arr[i] > secondlarge)
            {
                secondlarge = arr[i];
            }
        }
        return secondlarge;
    }
};

// brute (using sort function)
// Time Complexity=O(nlogn)
// Space Complexity=O(1)

class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = n - 2; i >= 0; i++)
        {
            if (arr[i] != arr[n - 1])
            {
                return arr[i];
            }
        }
        return -1;
    }
};