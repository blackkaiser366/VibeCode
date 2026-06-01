class Solution {
  public:
    vector<int> intersection(vector<int> &a, vector<int> &b) {
             int n1 = a.size();
        int n2 = b.size();
        vector<int> unionarr;
        int i = 0;
        int j = 0;
        while(i < n1 && j < n2){
            if(a[i]<b[j]){
                
                i++;

            }
            else if(b[j]<a[i]){
             
                j++;

            }
            else{
                 if (unionarr.empty() || unionarr.back() != a[i]){
                    unionarr.push_back(a[i]);}
                i++;
                j++;

            }

        }
        return unionarr;
        
    }
};