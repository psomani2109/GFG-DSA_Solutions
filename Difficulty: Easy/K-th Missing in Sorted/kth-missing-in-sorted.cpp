class Solution {
  public:
    int KthMissingElement(vector<int> &arr, int &k) {
        // Code here
        int count=0, prev_count=0;
        if(k<=0)
            return -1;
        for(int i=1; i<arr.size(); i++)
        {
            count+=arr[i]-arr[i-1]-1;
            if(count==k)
                return arr[i]-1;
            else if(count>k)
            {
                if(prev_count==0)
                    return arr[i-1]+k;
                else
                    return arr[i-1]+k-prev_count;
            }
            prev_count=count; 
            
        }
        return -1;
    }
};