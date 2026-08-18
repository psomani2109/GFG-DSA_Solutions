class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        unordered_set<int> check;
        for(int i=0; i<k; i++)
        {
            if(check.find(arr[i])!=check.end())
                return true;
            else
                check.insert(arr[i]);
        }
        for(int i=0; i<arr.size()-k; i++)
        {
            if(check.find(arr[i+k])!=check.end())
                return true;
            else{
                check.insert(arr[i+k]);
                check.erase(arr[i]);
            }
        }
        return false;
    }
};