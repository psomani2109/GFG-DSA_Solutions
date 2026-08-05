class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int i;
        for(i=1; i<arr.size(); i++)
        {
            if(arr[i]<arr[i-1])
                return i;
        }
        
    }
};
