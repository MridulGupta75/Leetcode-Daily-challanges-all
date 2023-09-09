class Solution {
    
private:
    bool func(int index,vector<int>&arr,vector<bool>&vis)
    {
        if(index<0||index>=arr.size())return false;
        if(arr[index]==0)return true;
        vis[index]=true;
        bool k=false;
        int ii=index+arr[index];
        if(ii>=0&&ii<arr.size()&&!vis[index+arr[index]])
        k=func(index+arr[index],arr,vis);
        ii=index-arr[index];
        if(ii>=0&&ii<arr.size()&&!vis[index-arr[index]])
        k|=func(index-arr[index],arr,vis);
        return k;
    }
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size(),0);
        return func(start,arr,vis);
    }
};