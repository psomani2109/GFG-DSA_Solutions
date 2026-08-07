class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int> pos, neg;
        for(int i:arr)
        {
            if(i>=0)
                pos.push_back(i);
            else
                neg.push_back(i);
        }
        
        for(int i=0; i<pos.size(); i++)
        {
            arr[i]=pos[i];
        }
        for(int i=0; i<neg.size(); i++)
        {
            arr[pos.size()+i]=neg[i];
        }
    }
};