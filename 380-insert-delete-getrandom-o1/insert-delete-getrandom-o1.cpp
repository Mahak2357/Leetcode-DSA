class RandomizedSet {
public:
vector<int>nums;

  unordered_map<int,int> mp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) //element already found
        return false;

        nums.push_back(val); //insert value into vector

        mp[val]=nums.size()-1; //store its index in map
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()) // element is not found
        return false;

        int idx=mp[val]; //get index of that element which has to be removed
        int last=nums.back(); // finded last element of vector
        nums[idx]=last; //put last element at deleted element position
        mp[last]=idx; //update last element index in map

        nums.pop_back(); //remove last element position
        mp.erase(val); //remove element from map
        return true;
        
    }
    
    int getRandom() {
        int idx=rand()%nums.size();
        return nums[idx];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */