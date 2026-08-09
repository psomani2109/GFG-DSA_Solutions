class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        vector <int> result;
        int first=INT_MAX, second=INT_MAX;
        if(!arr.size())
        {
            result.push_back(-1);
            return result;
        }
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]<first)
            {
                second=first;
                first=arr[i];
            }
            else if(arr[i]>first && arr[i]<second)
                second=arr[i];
        }
        if (second==INT_MAX)
        {
            result.push_back(-1);
            return result;
        }
        else
        {
            result.push_back(first);
            result.push_back(second);
        }
        return result;xzxx
    }
};