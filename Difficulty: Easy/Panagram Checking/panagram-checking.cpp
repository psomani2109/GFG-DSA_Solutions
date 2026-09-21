class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        vector<int> present(26, 0);
        for(char ch:s)
        {
            if(islower(ch))
                present[ch-'a']=1;
            else if(isupper(ch))
                present[ch-'A']=1;
        }
        for(int x:present)
        {
            if(x==0)
                return false;
        }
        return true;
    }
};