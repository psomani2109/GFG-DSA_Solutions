class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        d=d % arr.size();
        /*int count=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(count==d)
                break;
            arr.push_back(arr[i]);
            count++;
        }
        int var=0;
        for(int i=d; i<arr.size(); i++)
        {
            arr[var]=arr[i];
            var++;
        }
        int temp=d;
        while(temp>0)
        {
            arr.pop_back();
            temp--;
        }*/
        
        reverse(arr.begin(), arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};