class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        string l="", r="";
        if(s1.size()==1)
        {
            if(s1==s2)
                return true;
            else
                return false;
        }
        for(int i=2; i<s1.size(); i++)
        {
            l.push_back(s1[i]);
        }
        l.push_back(s1[0]);
        l.push_back(s1[1]);
        r.push_back(s1[s1.size()-2]);
        r.push_back(s1[s1.size()-1]);
        for(int i=0; i<s1.size()-2; i++)
        {
            r.push_back(s1[i]);
        }
        return (s2==l || s2==r)? true:false;
    }
};
