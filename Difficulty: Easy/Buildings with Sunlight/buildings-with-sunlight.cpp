class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int count=0, max=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>=max)
            {
                count++;
                max=arr[i];
            }
        }
        return count;
    }
};