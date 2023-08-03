class Solution {
public:
      unordered_map<char,string>mpp{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
     vector<string>sol;
    void func(int strind,string&digits,string&substr)
    {
        
        if(substr.size()==digits.size())sol.push_back(substr);
        string temp=mpp[digits[strind]];
        for(int i=0;i<temp.size();i++)
        {
            substr.push_back(temp[i]);
            func(strind+1,digits,substr);
            substr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return sol;
       string substr="";
       func(0,digits,substr);
       return sol;
    }
};