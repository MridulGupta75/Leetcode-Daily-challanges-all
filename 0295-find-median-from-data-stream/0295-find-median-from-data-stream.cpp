class MedianFinder {
public:
    priority_queue<int>maxih;
    priority_queue<int,vector<int>,greater<int>>minih;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(!maxih.empty()&&maxih.top()<num)
        {
            minih.push(num);
            if(minih.size()>maxih.size())
            {
                maxih.push(minih.top());
                minih.pop();
            }
        }
        else
        {
            maxih.push(num);
            if(minih.size()+1<maxih.size())
            {
                minih.push(maxih.top());
                maxih.pop();
            }
        }
    }
    
    double findMedian() {
        if(maxih.size()>minih.size()) return maxih.top();
        else return((maxih.top()+minih.top())/2.0);
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */