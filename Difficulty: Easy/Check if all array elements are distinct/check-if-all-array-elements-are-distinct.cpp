class Solution {
  public:
    bool isDistinct(vector<int> arr) {
        // code here
        unordered_set<int> check;
        for(int i:arr)
        {
            if(check.find(i)==check.end()) 
                check.insert(i);
            else
                return false;
            
        }
        return true;
    }
};