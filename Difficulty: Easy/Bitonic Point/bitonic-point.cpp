class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        for(int i=0; i<arr.size(); i++)
        {
            if(i==0 && arr[i]>arr[i+1])
                return arr[0];
            else if(i==arr.size()-1 && arr[i-1]<arr[i])
                return arr[i];
            else if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
                return arr[i];
        }
    }
};