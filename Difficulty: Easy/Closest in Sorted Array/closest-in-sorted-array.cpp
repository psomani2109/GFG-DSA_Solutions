class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        // Code Here
        int abs_diff=INT_MAX, closest;
        for(int i=0; i<arr.size(); i++)
        {
            if(abs(arr[i]-k)<abs_diff)
            {
                abs_diff=abs(arr[i]-k);
                closest=arr[i];
            }
            else if(abs(arr[i]-k)==abs_diff)
                closest=max(closest, arr[i]);
        }
        return closest;
    }
};