class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int count=0;
        for(int i:arr)
        {
            if(i==0)
                count++;
        }
        return count;
    }
};