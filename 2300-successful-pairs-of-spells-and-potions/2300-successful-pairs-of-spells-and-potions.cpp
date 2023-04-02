// class Solution {
// public:
//     vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
//         vector<int>ans;
//        sort(potions.begin(),potions.end());
//         int l=0,h=potions.size()-1;
//         for(int i=0;i<spells.size();i++)
//         {
//             int count=0;
//             int mid=l+((h-l)/2);
            
            
//             while(1)
//             {
//                  long long lol=(long long)potions[mid]*(long long)spells[i];
//                 if(lol>=success)
//                 {
//                      h=mid;
//                     count++;
//                 }
//                 else break;
               
//             }
            
          
           
         
//             ans.push_back(count);
//         }
//         return ans;
        
//     }
// };




class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> pairs(n, 0);
        sort(potions.begin(), potions.end());
        for (int i = 0; i < n; i++) {
            int spell = spells[i];
            int left = 0;
            int right = m - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                long long product = (long long)spell * (long long)potions[mid];
                if (product >= success) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            pairs[i] = m - left;
        }
        return pairs;
    }
};