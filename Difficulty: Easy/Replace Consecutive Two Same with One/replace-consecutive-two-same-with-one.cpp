class Solution {
  public:
    string removeDuplicates(string& s) {
        // code here.
        string unique="";
        for(int i=0; i<s.size(); i++)
        {
            if(i==0 || s[i]!=s[i-1])
                unique.push_back(s[i]);
            else if(s[i]==s[i-1])
                continue;
        }
        return unique;
    }
};