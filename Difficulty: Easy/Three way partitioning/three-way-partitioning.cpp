class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        int low=0, high=arr.size()-1, i=0;
        while(i<=high)
        {
            if(arr[i]<a)
            {
                swap(arr[low], arr[i]);
                low++;
                i++;
            }
            else if(arr[i]>b)
            {
                swap(arr[high], arr[i]);
                high--;
            }
            else
                i++;
        }
    }
};