class Solution {
  public:
    vector<int> addArrays(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int carry=0, sum=0, i=arr1.size()-1, j=arr2.size()-1;
        vector <int> result;
        while(i>=0 || j>=0)
        {
            if(i<0)
            {
                sum=arr2[j]+carry;
                carry=0;
            }
            else if(j<0)
            {
                sum=arr1[i]+carry;
                carry=0;
            }
            else
            {
                sum=arr1[i]+arr2[j]+carry;
                carry=0;
            }
                
            if(sum<=9)
            {
                result.push_back(sum);
                i--;
                j--;
            }
            else
            {
                result.push_back(sum%10);
                carry=sum/10;
                i--;
                j--;
            }
        }
        if(carry!=0)
            result.push_back(carry);
        reverse(result.begin(), result.end());
        return result;
    }
};