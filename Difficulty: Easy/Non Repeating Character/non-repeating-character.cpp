
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        vector <int> present(26, 0);
        for(char ch:s)
        {
            present[ch-'a']++;
        }
        for(char ch:s)
        {
            if(present[ch-'a']==1)
                return ch;
        }
        return '$';
    }
};