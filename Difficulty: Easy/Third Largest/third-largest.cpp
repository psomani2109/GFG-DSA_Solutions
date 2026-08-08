class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int first=-1, second=-1, third=-1;
        for(int i:arr)
        {
            if(i>first)
            {
                third=second;
                second=first;
                first=i;
            }
            else if(i<=first && i>second)
            {
                third=second;
                second=i;
            }
            else if(i<=second && i>third)
                third=i;
        }
        return third;
    }
};