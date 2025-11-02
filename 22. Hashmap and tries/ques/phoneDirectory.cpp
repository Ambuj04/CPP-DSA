#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Trie Node
struct TrieNode {
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    TrieNode() : isEndOfWord(false) {}
};

class Trie {
    TrieNode* root;
public:
    Trie() { root = new TrieNode(); }

    void insert(const string& contact) {
        TrieNode* node = root;
        for (char ch : contact) {
            if (!node->children.count(ch))
                node->children[ch] = new TrieNode();
            node = node->children[ch];
        }
        node->isEndOfWord = true;
    }

    void searchHelper(TrieNode* node, string prefix, vector<string>& results) {
        if (node->isEndOfWord)
            results.push_back(prefix);
        for (auto& pair : node->children) {
            searchHelper(pair.second, prefix + pair.first, results);
        }
    }

    vector<string> search(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            if (!node->children.count(ch))
                return {};
            node = node->children[ch];
        }
        vector<string> results;
        searchHelper(node, prefix, results);
        return results;
    }
};

int main() {
    Trie phoneDirectory;
    int n;
    cout << "Enter number of contacts: ";
    cin >> n;
    cout << "Enter contacts:\n";
    for (int i = 0; i < n; ++i) {
        string contact;
        cin >> contact;
        phoneDirectory.insert(contact);
    }
    string query;
    cout << "Enter prefix to search: ";
    cin >> query;
    vector<string> matches = phoneDirectory.search(query);
    if (matches.empty()) {
        cout << "No contacts found with prefix '" << query << "'\n";
    } else {
        cout << "Contacts matching '" << query << "':\n";
        for (const string& name : matches)
            cout << name << endl;
    }
    return 0;
}