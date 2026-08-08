class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        unordered_map <int, int> freq;
        for(int i:arr)
        {
            freq[i]++;
            if(freq[i]==k)
                return i;
        }
        return -1;
    }
};