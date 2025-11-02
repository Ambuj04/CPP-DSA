#include <iostream>
#include <vector>
using namespace std;

class TrieNode
{
public:
    char data;
    int childCount;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        childCount = 0;
        this->isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('-');
    }
    void insert(string word)
    {
        insertWord(root, word);
    }
    void insertWord(TrieNode *root, string word)
    {
        // base-case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        char ch = word[0];
        ch = tolower(ch);
        int index = ch - 'a';

        TrieNode *child;
        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(ch);
            root->childCount++;
            root->children[index] = child;
        }
        insertWord(child, word.substr(1));
    }

    void lcp(string str, string &ans)
    {

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            if (root->childCount == 1)
            {
                ans.push_back(ch);
                int index = ch - 'a';
                root = root->children[index];
            }
            else
            {
                break;
            }
            if (root->isTerminal)
            {
                break;
            }
        }
    }
};

string longestCommonPrefix(vector<string> arr, int n)
{
    Trie *t = new Trie();
    for (int i = 0; i < n; i++)
    {
        t->insert(arr[i]);
    }
    string first = arr[0];
    string ans = "";
    t->lcp(first, ans);
    return ans;
}

int main()
{
    vector<string> arr;
    int n;
    arr.push_back("ambuj");
    arr.push_back("amba");
    n = arr.size();
    cout << longestCommonPrefix(arr, n);

    return 0;
}