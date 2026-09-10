class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxi=0, count=0, element;
        for(int i=0; i<arr.size(); i++)
        {
            if(i==0)
            {
                element=arr[i];
                count++;
            }
            else
            {
                if(arr[i]==element)
                    count++;
                else
                {
                    maxi=max(maxi, count);
                    count=1;
                    element=arr[i];
                }
            }
        }
        return max(maxi, count);
    }
};