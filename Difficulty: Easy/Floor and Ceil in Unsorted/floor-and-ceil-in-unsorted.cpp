class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int floor=INT_MIN, ceil=INT_MAX;
        vector<int> result;
        for(int i:arr)
        {
            if(i<=x && i>floor)
                floor=i;
            if(i>=x && i<ceil)
                ceil=i;
        }
        (floor==INT_MIN)? result.push_back(-1):result.push_back(floor);
        (ceil==INT_MAX)? result.push_back(-1):result.push_back(ceil);
        return result;
    }
};