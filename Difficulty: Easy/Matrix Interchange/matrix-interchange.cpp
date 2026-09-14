class Solution {
  public:
    void interchange(vector<vector<int>>& mat) {
        // code here
        for(int i=0; i<mat.size(); i++)
        {
            int j=mat[i].size()-1;
            swap(mat[i][0], mat[i][j]);
        }
    }
};