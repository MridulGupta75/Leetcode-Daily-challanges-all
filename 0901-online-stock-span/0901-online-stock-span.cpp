class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int val=1;
        while(!st.empty()&&price>=st.top().first)
        {
            val+=st.top().second;
            st.pop();   
        }
      st.push({price,val});
        
        return st.top().second;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */