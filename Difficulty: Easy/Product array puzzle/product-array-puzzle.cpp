class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        vector <int> res(arr.size(), 1);
        int left_prod=1, right_prod=1;
        for(int i=0; i<arr.size(); i++)
        {
            res[i]=left_prod;
            left_prod*=arr[i];
        }
        for(int i=arr.size()-1; i>=0; i--)
        {
            res[i]*=right_prod;
            right_prod*=arr[i];
        }
        return res;
        
    }
};
