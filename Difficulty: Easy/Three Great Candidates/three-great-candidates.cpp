class Solution {
  public:
    int maxProduct(vector<int> arr) {
        // code here
        int first=INT_MIN, sec=INT_MIN, third=INT_MIN, neg_first=INT_MAX, neg_sec=INT_MAX;
        for(int i:arr)
        {
            if(i<=neg_first)    
            {
                neg_sec=neg_first;
                neg_first=i;
            }
            else if(i<neg_sec)
            {
                neg_sec=i;
            }
            if(i>=first)    
            {
                third=sec;
                sec=first;
                first=i;
            }
            else if(i>sec)
            {
                third=sec;
                sec=i;
            }
            else if(i>third)
                third=i;
        }
        return max(first*sec*third, neg_first*neg_sec*first);
    }
};