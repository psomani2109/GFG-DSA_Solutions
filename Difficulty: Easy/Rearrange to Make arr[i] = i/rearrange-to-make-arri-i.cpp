class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        // code here
        int i=0;
        while(i<arr.size())
        {
            
            if(arr[i]==i || arr[i]==-1)
                i++;
            else if(arr[i]!=i)
                swap(arr[i], arr[arr[i]]);
            
        }
    }
};
