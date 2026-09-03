class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int low=0, high=arr.size()-1, mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]==key)
                return mid;
            else if(arr[low]<=arr[mid]) //1st half sorted
            {
                if(key>arr[mid] || key<arr[low])
                    low=mid+1;
                else
                    high=mid-1;
            }
            else if(arr[mid]<=arr[high]) //2nd half sorted
            {
                if(key>arr[high] || key<arr[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
                
        }
        return -1;
    }
};