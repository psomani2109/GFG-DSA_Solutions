class Solution {
  public:
    vector<vector<int>> triplets(vector<int> &arr) {
        // code here
        vector<vector<int>> result;
        int left, right;
        sort(arr.begin(), arr.end());
        for(int i=0; i+2<arr.size(); i++)
        {
            if(i>0 && arr[i-1]==arr[i])
                continue;
            left=i+1;
            right=arr.size()-1;
            while(left<right)
            {
                if(arr[i]+arr[left]+arr[right]==0)
                {
                    result.push_back({arr[i], arr[left], arr[right]});
                    int left_val=arr[left];
                    while(arr[left]==left_val)
                    {
                        left++;
                    }
                    int right_val=arr[right];
                    while(arr[right]==right_val)
                    {
                        right--;
                    }
                } 
                else if(arr[i]+arr[left]+arr[right]>0)
                    right--;
                else
                    left++;
            }
        }
        return result;
    }
};
