struct TrieNode
{
    map<char, TrieNode *> children;
    int wordCount = 0;
};

class Trie
{
    TrieNode *root;

    public:
        Trie()
        {
            root = new TrieNode();
        }

        void insert(string word)
        {
            TrieNode *curr = root;

            for(auto ch : word)
            {
                if(curr->children.find(ch) == curr->children.end())
                {
                    curr->children[ch] = new TrieNode();
                }

                curr = curr->children[ch];
            }
            curr->wordCount += 1;
        }

        int countWordsWithPrefix(string prefix)
        {
            TrieNode *curr = root;
            //Reach the node pointed to by prefix
            for(auto ch : prefix)
            {
                if(curr->children.find(ch) == curr->children.end())
                {
                    return 0;
                }
                curr = curr->children[ch];
            }

            //Sum word count of all child nodes
            return countWords(curr);

        }

        int countWords(TrieNode *node)
        {
            int count = node->wordCount;
            for(auto it : node->children)
            {
                count += countWords(it.second);
            }
            return count;
        }
};

class Solution {

    Trie *trie;
public:
    Solution()
    {
        trie = new Trie();
    }

    int prefixCount(vector<string>& words, string pref) {

        for(auto word : words)
        {
            trie->insert(word);
        }        

        return trie->countWordsWithPrefix(pref);
    }

   
};