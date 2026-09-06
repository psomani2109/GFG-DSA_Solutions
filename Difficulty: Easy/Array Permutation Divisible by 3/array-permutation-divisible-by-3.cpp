class Solution {
  public:
    bool isPossible(vector<int>& arr) {
        // code here
        int i=0, sum=0;
        while(i<arr.size())
        {
            if(arr[i]==0)
                i++;
            else
            {
                sum+=arr[i]%10;
                arr[i]/=10;
            }
        }
        return (sum%3==0)? true:false;
    }
};