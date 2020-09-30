class TrieNode{
  public:
    bool isEnd;
	vector<TrieNode*> dict;
    TrieNode(){
        isEnd = false;
        dict.resize(26,nullptr);
    }
};
class WordDictionary {
public:
    /** Initialize your data structure here. */
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    /** Adds a word into the data structure. */
	// Addition of word in the trie is fairly simple.
	// If you are not able to understand it, then solve the below question first :
	// https://leetcode.com/problems/implement-trie-prefix-tree/
    void addWord(string word) {
        TrieNode* itr = root;
        for(int i=0;i<word.length();i++){
            if(itr->dict[word[i]-'a']==nullptr){
                itr->dict[word[i]-'a'] = new TrieNode();
            }
            itr = itr->dict[word[i]-'a'];
        }
        itr->isEnd = true;
    }


	// Recursive function for searching the string in the trie.
    bool func(TrieNode* root, string word, int pos){
		// When pos becomes equal to length of the word i.e. we are at the end of the string.
        if(word.length()==pos){
			// If the string is present in the trie then "root" will be at the end of the trie.
            if(root->isEnd)
                return true;
            return false;
        }
		// If the character is not '.' then it is fairly simple.
		// We just need to check whether the word[pos] is present in the trie or not.
        if(word[pos]!='.'){
            if(root->dict[word[pos]-'a']!=nullptr)
                return func(root->dict[word[pos]-'a'], word,pos+1);
            else
                return false;
        }
        else{
			// Now, if we encounter '.' then we need to check every possible alphabet i.e. from a-z
			// If we find any alphabet which is present in the trie,
			// then we have to make the recursive call to the function with now --> pos + 1.
			// If we encounter null node then we will continue and check the rest of the alphabets.
            for(int i=0;i<26;i++){
                if(root->dict[i]==nullptr)
                    continue;
                else{
                    if(func(root->dict[i],word,pos+1))
                        return true;
                }
            }
        }
		// If after checking everything, we don't find the alphabet in the trie ->
        return false;
    }
    bool search(string word) {
        return func(root, word, 0);
    }
};
