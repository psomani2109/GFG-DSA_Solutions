class Solution {
  public:
    int replaceBit(int n, int k) {
        // code here
        vector <int> arr;
        int rem, m=n;
        if(k==0)
            return n;
        while(m>1)
        {
            rem=m%2;
            m=m/2;
            arr.push_back(rem);
        }
        arr.push_back(m);
        reverse(arr.begin(), arr.end());
        
        if(k>arr.size() || arr[k-1]==0) 
            return n;
        else
            arr[k-1]=0;
        m=0;
        int j=0;
        for(int i=arr.size()-1; i>=0; i--)
        {
            m+=arr[i]*pow(2,j);
            j++;
        }
        return m;
    }
};