class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        long long mod=1000000007;
        int total_sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            total_sum=(total_sum+(arr[i]*i) % mod) % mod;
        }
        return total_sum;
    }
};