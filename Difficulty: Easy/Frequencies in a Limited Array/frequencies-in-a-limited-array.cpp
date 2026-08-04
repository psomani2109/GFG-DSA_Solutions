class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector <int> present(arr.size(), 0);//index 0 to n-1 (0 to 4)
        for(int i=0; i<arr.size(); i++)
        {
            present[arr[i]-1]++;
        }
        return present;
    }
};
