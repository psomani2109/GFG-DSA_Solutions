class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        vector<int> present(26, 0);
        for(char ch:s1)
        {
            present[ch-'a']++;
        }
        for(char ch:s2)
        {
            present[ch-'a']--;
        }
        for(int x:present)
        {
            if(x!=0)
                return false;
        }
        return true;
    }
};