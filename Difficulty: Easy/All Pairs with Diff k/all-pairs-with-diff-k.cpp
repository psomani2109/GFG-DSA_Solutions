class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        // code here
        unordered_map <int ,int> freq;
        int x,y, pairs=0;
        for(int i=0; i<arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        for(int num:arr)
        {
            x=num+k;
            y=num-k;
            if(freq[x])
                pairs+=freq[num]*freq[x];
            if(freq[y])
                pairs+=freq[num]*freq[y];
            freq[num]=0;
        }
        return pairs;
    }
};