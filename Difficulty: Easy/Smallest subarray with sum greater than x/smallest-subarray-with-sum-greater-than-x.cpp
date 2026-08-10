class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int i=0, start=0, sum=0, len=1, min_len=INT_MAX;
        while(start<arr.size() && i<arr.size())
        {
            sum+=arr[i];
            if(sum>x)
            {
                if(len<min_len)
                    min_len=len;
                start++;
                i=start;
                sum=0;
                len=1;
            }
            else
            {
                i++;
                len++;
            }
        }
        if(min_len==INT_MAX)
            return 0;
        else
            return min_len;
    }
};