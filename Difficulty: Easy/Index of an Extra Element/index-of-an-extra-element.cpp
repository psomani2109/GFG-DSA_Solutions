class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        for(int i=0; i<a.size(); i++)
        {
            if(i==b.size() || a[i]!=b[i])    
                return i;
            
        }
    }
};