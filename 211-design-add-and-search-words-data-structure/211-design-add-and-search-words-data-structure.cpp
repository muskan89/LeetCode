class WordDictionary {
public:
    unordered_map<int,vector<string>>mp;
    WordDictionary() {
        mp.clear();
    }
    
    void addWord(string word) {
        mp[word.length()].push_back(word);
    }
    
    bool search(string word) {
        int y=word.length();
        for(string s:mp[y]){
            int i=0,k=0;
            while(i<y){
                if(s[i]!=word[i] && word[i]!='.'){
                    k=1;
                    break;
                }
                i++;
            }
            if(k==0){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */