class Solution {
  public:
    vector<int> reArrange(vector<int>& arr) {
        // code here
        int even=0, odd=1, i=0;
        while(even<arr.size())
        {
            if(arr[even]%2==0)
                even+=2;
            if(arr[odd]%2!=0)
                odd+=2;
            else if(arr[even]%2!=0 && arr[odd]%2==0)
                swap(arr[odd], arr[even]);
        }
        return arr;
    }
};