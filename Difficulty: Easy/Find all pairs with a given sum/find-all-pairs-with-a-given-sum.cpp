class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        // Code here
       sort(arr1.begin(), arr1.end());
       unordered_map <int, int> freqn;
       vector <pair<int, int>> result;
       for(int i:arr2)
       {
           freqn[i]++;
       }
       for(int a:arr1)
       {
           int b=target-a;
           if(freqn.find(b)!=freqn.end())
           {
               for(int count=0; count<freqn[b]; count++)
               {
                   result.push_back({a, b});
               }
           }
           
       }
       return result;
    }
};