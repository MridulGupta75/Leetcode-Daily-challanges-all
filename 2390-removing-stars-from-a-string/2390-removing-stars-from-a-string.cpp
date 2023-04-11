class Solution {
public:
    string removeStars(string s) {
        string ans="";
        stack<char>st;
        for(auto it:s)
        { 
          if(it=='*' && !st.empty())
          {
              st.pop();
          }
            else
            {
                st.push(it);
            }
            
        }
        
//         while(!st.empty())
//         {
//             ans=st.top()+ans;
//          
//             st.pop();
//         }
//         return ans;
         while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};



// class Solution {
// public:
//     string removeStars(string s) {
//         // create a stack to store the characters
//         stack<char> st;
        
//         // iterate through each character in the input string
//         for (char c : s) {
//             // if the current character is a star and the stack is not empty, pop the topmost character
//             // from the stack
//             if (c == '*' && !st.empty()) {
//                 st.pop();
//             } else {
//                 // otherwise, push the current character onto the stack
//                 st.push(c);
//             }
//         }
        
//         // create a string to store the result
//         string ans;
        
//         // pop the elements of the stack and add them to the result string
//         while (!st.empty()) {
//             ans += st.top();
//             st.pop();
//         }
        
//         // reverse the result string and return it as the output
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };