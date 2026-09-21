class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        vector<int> freq(26, 0);
        char times;
        for(char ch:s)
        {
            freq[ch-'a']++;
        }
        int max_occ=0;
        for(int i=0; i<freq.size(); i++)
        {
            if(freq[i]>max_occ)
            {
                max_occ=freq[i];
                times=i+'a';
            }
        }
        return times;
    }
};