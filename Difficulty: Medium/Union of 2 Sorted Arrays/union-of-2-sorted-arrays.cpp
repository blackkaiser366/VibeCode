class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        vector<int> unionarr;
        int i = 0;
        int j = 0;
        while(i < n1 && j < n2){
            if(a[i]<b[j]){
                if (unionarr.empty() || unionarr.back() != a[i]){
                    unionarr.push_back(a[i]);}
                i++;
              
            }
            else if(b[j]<a[i]){
                if (unionarr.empty() || unionarr.back() != b[j]){
                    unionarr.push_back(b[j]);}
                j++;
                
            }
            else{
                 if (unionarr.empty() || unionarr.back() != a[i]){
                    unionarr.push_back(a[i]);}
                i++;
                j++;
                
            }
            
        }
        while(i<n1){
              if (unionarr.empty() || unionarr.back() != a[i]){
                    unionarr.push_back(a[i]);}
                i++;
              
            
        }
        while(j<n2){
             if (unionarr.empty() || unionarr.back() != b[j]){
                    unionarr.push_back(b[j]);}
                j++;
            
        }
        return unionarr;
        
        
    }
};