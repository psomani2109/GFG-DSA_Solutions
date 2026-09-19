class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        vector<string> temp;
        string parts="";
        for(char ch:s)
        {
            if(ch=='.' && parts.empty())
                continue;
            else if(ch=='.')
            {
                temp.push_back(parts);
                parts.clear();
                continue;
            }
            else
                parts.push_back(ch);
        }
        if(!parts.empty())
            temp.push_back(parts);
        reverse(temp.begin(), temp.end());
        s.clear();
        for(auto m:temp)
        {
            s+=m;
            s.push_back('.');
        }
        s.pop_back();
        return s;
    }
};