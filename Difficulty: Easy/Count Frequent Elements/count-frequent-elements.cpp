class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        unordered_map <int, int> freq;
        int count=0;
        for(int i:arr){
            freq[i]++;
        }
        for(auto pair:freq)
        {
            if(pair.second>arr.size()/k)
                count++;
        }
        return count;
    }
};