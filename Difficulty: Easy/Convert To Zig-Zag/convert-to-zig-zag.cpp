class Solution {
  public:
    void zigZag(vector<int> &arr) {
        // code here
        for(int i=1; i<arr.size(); i+=2)
        {
            if(arr[i]<arr[i-1])
                swap(arr[i], arr[i-1]);
            if(i + 1 <arr.size() && arr[i]<arr[i+1])
                swap(arr[i], arr[i+1]);                                      
        }
    }
};
