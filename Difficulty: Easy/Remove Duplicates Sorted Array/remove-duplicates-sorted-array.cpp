class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector <int> result;
        for(int i=0; i<arr.size(); i++)
        {
            if(i==0 || arr[i-1]!=arr[i])
                result.push_back(arr[i]);
        }
        return result;
    }
};