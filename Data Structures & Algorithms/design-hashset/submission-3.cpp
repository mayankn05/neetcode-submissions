class MyHashSet {
private : vector<int> data;
public  : MyHashSet() {}

    auto findKey(int key){
        return find(data.begin(), data.end(), key);
    };
    
    void add(int key) {
        if(findKey(key) == data.end()){
            data.push_back(key);
        }
    }
    
    void remove(int key) {
        if(findKey(key) != data.end()){
            data.erase(findKey(key));
        }
    }
    
    bool contains(int key) {
        return (findKey(key) != data.end());
    }
};