class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        // code here
        int prev=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(i==0)
            {
                prev=arr[0];
                arr[i]=arr[i]^arr[i+1];
            }
            else if(i==arr.size()-1)
                arr[i]=arr[i]^prev;
            else
            {
                int temp=prev;
                prev=arr[i];
                arr[i]=temp^arr[i+1];
            }
        }
    }
};