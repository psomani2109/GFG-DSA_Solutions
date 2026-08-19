class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        vector <int> result(arr.size(), 0);
        int max=INT_MIN, current_max=INT_MIN;
        for(int i=arr.size()-1; i>=0; i--)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                if(i==arr.size()-1)
                    result[i]=-1;
                else
                    result[i]=current_max;
                current_max=max;
            }
            else
                result[i]=max;
        }
        return result;
    }
}; 