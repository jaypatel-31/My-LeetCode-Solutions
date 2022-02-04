// 211. Design Add and Search Words Data Structure
class WordDictionary {
public:
    unordered_map<int,unordered_set<string>> dict;
    int lmax= 0;
    int lmin = (INT_MAX);
    WordDictionary() {
        lmax= 0;
        lmin = (INT_MAX);
        
    }
    
    void addWord(string word) {
    dict[word.length()].insert(word);
    if(word.length()>lmax) lmax=word.length();
    if(word.length()<lmin) lmin=word.length();
}

bool search(string word) {
    int l=word.length();
    if(l>lmax||l<lmin) return false;
    if(dict[l].count(word)>0) return true;
    int j;
    for(auto i:dict[l])
    {
        if(i.length()!=l)
            continue;
        for(j=0;j<l;j++)
        {
            if(word[j]!='.'&&word[j]!=i[j])
                break;
        }
        if(j>=l)
            return true;
    }
    return false;
}
};


