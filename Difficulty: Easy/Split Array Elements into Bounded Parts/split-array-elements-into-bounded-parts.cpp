class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int parts=0, i=0; 
        while(i<arr.size())
        {
            if(arr[i]<=k)
            {
                parts++;
                i++;
            }
            else
            {
                arr[i]-=k;
                parts++;
            }
        }
        return parts;
    }
};