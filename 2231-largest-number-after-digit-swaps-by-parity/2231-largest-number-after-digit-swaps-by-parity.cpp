class Solution {
    private:
    priority_queue<char>odd;
    priority_queue<char>even;
public:
    int largestInteger(int num) {
        string str=to_string(num);
        for(auto&x:str)if((x-'0')%2)even.push(x);else odd.push(x);
        for(int i=0;i<str.size();i++) if((str[i]-'0')%2) str[i]=even.top(),even.pop();else  str[i]=odd.top(),odd.pop();
        return stoi(str);
    }
};