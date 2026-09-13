/* Structure of the Height
struct Height {
    int feet;
    int inches;
};
*/
class Solution {
  public:
    int findMax(vector<Height>& arr) {
        // Code here
        int maxi=0;
        for(auto node:arr)
        {
            int total=(node.feet)*12 + node.inches;
            maxi=max(maxi, total);
        }
        return maxi;
    }
};