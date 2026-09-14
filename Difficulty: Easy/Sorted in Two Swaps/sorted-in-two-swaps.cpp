class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int swap_count=0, double_swap=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==i+1)
                continue;
            else if(arr[arr[i]-1]==i+1)
                swap_count++;
            else if(arr[arr[arr[i]-1]-1]==i+1)
                double_swap++;
            else
                return false;
        }
        return (swap_count==0 || swap_count==4 || double_swap==1)? true:false;
        
    }
}; 