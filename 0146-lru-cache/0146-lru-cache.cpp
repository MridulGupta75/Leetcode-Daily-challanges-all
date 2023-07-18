// class LRUCache {
// public:
//     list <int>ls;
//     map<int, list<int>::iterator>mpp;
//     int cap;
//     LRUCache(int capacity) {
//         cap=capacity;
//     }
    
//     int get(int key) {
//         auto itr=mpp.find(key);
//         if(itr!=mpp.end())
//         {

//                auto it1=itr->second;
//              mpp.erase(itr);
//             ls.erase(it1);

//             ls.push_back(key);
//             mpp[key]=--ls.end();
//             return key;
            
//         }
//        return -1;
        
//     }
    
//     void put(int key, int value) {
//         if(mpp.size()<cap)
//         {
//         auto itr=mpp.find(key);
//         if(itr!=mpp.end())
//         {
//             ls.erase(itr->second);
//                 mpp.erase(key);  
//             ls.push_back(key);
             
                  
//         }
//             else
//             {
//             ls.push_back(key);
                  
               
//             }
            
//         }
//         else
//         {
//             mpp.erase(key);
//            ls.pop_front();
            
//             ls.push_back(key);
              
//         }
          
//          auto itr = ls.end();
//             mpp.insert({key,--itr});  
     
        
        
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */






class LRUCache {
public:
    int caps;
    list<pair<int,int>> mylist;
    unordered_map<int,list<pair<int,int>>::iterator> mymap;
    LRUCache(int capacity) {
        caps = capacity;
    }
    
    int get(int key) {
        auto it = mymap.find(key);
        if(it == mymap.end())
        {
            return -1;
        }
        auto it1 = it->second;
        mymap.erase(key);
        int val = it1->second;
        mylist.erase(it1);
        mylist.push_back({key,val});
        auto itr = mylist.end();
        mymap.insert({key,--itr});
        return val;
    }
    
    void put(int key, int value) {
        auto it = mymap.find(key);
        if(it == mymap.end())
        {
            pair<int,int> p = mylist.front();
            if(mylist.size() == caps)
            {
                mylist.pop_front();
                mymap.erase(p.first);
            }  
        }
        else
        {
            auto it1 = it->second;
            mylist.erase(it1);
            mymap.erase(key);
        }
        mylist.push_back({key,value});
        auto itr = mylist.end();
        mymap.insert({key,--itr});
    }
};