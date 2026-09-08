class Solution {
  public:
    int minimumInteger(vector<int>& arr) {
        // code here
        int n=arr.size(), minima=INT_MAX;
        long long int sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
        }
        for(int i=0; i<arr.size(); i++)
        {
            if(sum<=(long long)n*arr[i] && arr[i]<minima)
                minima=arr[i];
        }
        return minima;
    }
};
