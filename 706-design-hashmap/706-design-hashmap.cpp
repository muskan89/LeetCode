class MyHashMap {
public:
    
    vector<vector<pair<int,int>>>mp;
    const int size=10000;
    MyHashMap() {
        mp.resize(size);
    }
    
    void put(int key, int value) {
        int index=key%10000;
        for(auto iter=mp[index].begin();iter != mp[index].end();iter++){
            if(iter->first == key){
                iter->second = value;
                return;
            }
        }
        mp[index].push_back({key,value});       
    }
    
    int get(int key) {
        int index=key%10000;
        for(auto iter=mp[index].begin();iter != mp[index].end();iter++){
            if(iter->first == key){
                return iter->second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index=key%10000;
        for(auto iter=mp[index].begin();iter != mp[index].end();iter++){
            if(iter->first == key){
                mp[index].erase(iter);
                return;
            }
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */