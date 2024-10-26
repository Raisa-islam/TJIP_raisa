class RandomizedSet {
public:
    vector<int> randomized_set;
    unordered_map<int, int>val_to_idx;
    RandomizedSet() {
        randomized_set.clear();
        val_to_idx.clear();
    }
    
    bool insert(int val) {
        if(val_to_idx.count(val)) return false;
        val_to_idx[val] = randomized_set.size();
        randomized_set.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(val_to_idx.count(val)==0) return false;
        int target_idx = val_to_idx[val];
        int last = randomized_set.back();
        swap(randomized_set[target_idx], randomized_set[randomized_set.size()-1]);
        randomized_set.pop_back();
        val_to_idx[last] = target_idx;
        val_to_idx.erase(val);
        return true;
        
    }
    
    int getRandom() {
        int random = rand() % randomized_set.size();
        return randomized_set[random];
    }
};
