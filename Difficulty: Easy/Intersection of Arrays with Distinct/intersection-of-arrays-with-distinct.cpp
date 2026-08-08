class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        unordered_map<int, int> freq, freqn;
        int count=0;
        for(int i:a)
        {
            freq[i]++;
        }
        for(int i:b)
        {
            freqn[i]++;
        }
        for(int i:a)
        {
            if(freq[i]==freqn[i])
                count++;
        }
        return count;
    }
};