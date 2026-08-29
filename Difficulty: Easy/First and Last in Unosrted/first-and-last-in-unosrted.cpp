class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here
        vector<int> result(2,0);
        int left=0, right=arr.size()-1;
        while(left<=right)
        {
            if(arr[left]!=key)
                left++;
            if(arr[right]!=key)
                right--;
            else if(arr[left]==key && arr[right]==key)
                return{left, right};
        }
        return {-1, -1};
    }
};