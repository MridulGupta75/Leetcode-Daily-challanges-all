class Solution {
    private:
    priority_queue<int,vector<int>,greater<int>>min_heap;
    priority_queue<int>max_heap;
    void ins(int ele)
    {
        if(min_heap.empty())min_heap.push(ele);
        else
        {
            min_heap.push(ele);
            if(min_heap.size()-max_heap.size()>1)
            {
                max_heap.push(min_heap.top());
                min_heap.pop();
            }
        }
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            int low;
           if(nums1[i]<nums2[j])low=nums1[i],i++;
            else low=nums2[j],j++;
            ins(low);
        }
        while(i<nums1.size())ins(nums1[i]),i++;
         while(j<nums2.size())ins(nums2[j]),j++;
        
        return min_heap.size()==max_heap.size()?(double)(((double)min_heap.top()+ (double)max_heap.top())/2*1.0):(double)min_heap.top();
    }
};