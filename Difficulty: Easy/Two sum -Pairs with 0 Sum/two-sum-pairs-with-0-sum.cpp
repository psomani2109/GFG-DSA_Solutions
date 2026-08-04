class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        int left=0, right=arr.size()-1;
        while(left<right)
        {
            int sum=arr[left]+arr[right];
            if(sum==0)
            {
                result.push_back({arr[left], arr[right]});
                int l_val=arr[left];
                int r_val=arr[right];
                while(arr[left]==l_val)
                {
                    left++;
                }
                while(arr[right]==r_val)
                {
                    right--;
                }
            }
            else if(sum<0)
                left++;
            else
                right--;
        }
        return result;
        
        /* unordered_set<int> check and set<vector<int>> unique_results take up extra RAM 
        to store the elements and unique pairs.Set Approach: Uses $O(N)$ auxiliary space.
        Two Pointers: Uses $O(1)$ auxiliary space (zero extra memory vectors or sets needed—
        it just moves two variables left and right over the existing array).In many online 
        judge problems or coding interviews, constraints will explicitly ask 
        for:"Expected Auxiliary Space: $O(1)$" If a problem enforces $O(1)$ space, 
        the set solution will fail with a Memory Limit Exceeded (MLE), whereas Two Pointers passes easily.
        
        
        /*unordered_set <int> check;
        set <vector<int>> result;
        
        sort(arr.begin(), arr.end());
        for(int i:arr)
        {
            int comp=0-i;
            if(check.find(comp)!=check.end())       
            {
               result.insert({comp, i});//by default checks for uniques and sorts too
            }
            else
                check.insert(i);
        }
        
        return vector<vector<int>>(result.begin(), result.end());//type conv. set to vector<>*/
    }
};