class Solution {
  public:
    int unvisitedLeaves(vector<int>& arr, int k) {
        // code here
        vector<int> visited (k+1, 0);
        int unvisited=0;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==1)
                return 0;
            else if(arr[i]>k)
                continue;
            else if(visited[arr[i]])
                continue;
            for(int leaf=arr[i]; leaf<visited.size(); leaf+=arr[i])
            {
                visited[leaf]=1;
            }
        }
        for(int i=0; i<visited.size(); i++)
        {
            if(visited[i]==0)
                unvisited++;
        }
        return unvisited-1;
    }
};