class Solution {
  public:
    bool isKSortedArray(vector<int>& arr, int k) {
        // code here.
        unordered_map <int, int> org;
        for(int i=0; i<arr.size(); i++)
        {
            org[arr[i]]=i;
        }
        sort(arr.begin(), arr.end());
        unordered_map <int, int> sorted;
        for(int i=0; i<arr.size(); i++)
        {
            sorted[arr[i]]=i;
        }
        for(auto x:arr)
        {
            if(abs(org[x]-sorted[x])>k)
                return false;
        }
        return true;
    }
};
