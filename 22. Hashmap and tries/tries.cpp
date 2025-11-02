#include<iostream>

using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char ch){
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        
        this->isTerminal = false;
    }

};
void insertWord(TrieNode* root,string word){
    //base-case
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
    char ch = word[0];
    ch = tolower(ch);
int index = ch - 'a';

    TrieNode* child;
    //present
    if(root->children[index]!=NULL){
        child = root->children[index];
    }else{
        //absent
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    insertWord(child,word.substr(1)); 
}

bool searchWord(TrieNode* root,string word){
    if(word.length()==0){
        return root->isTerminal;
    }
     char ch = word[0];
ch = tolower(ch);
int index = ch - 'a';

    TrieNode* child;
    if(root->children[index]!=NULL){
        child = root->children[index];
    }else{
        return false;
    }
    return searchWord(child,word.substr(1));

}
void deleteWord(TrieNode* root,string word){
     if(word.length()==0){
         root->isTerminal = false;
         return;
    }
     char ch = word[0];
ch = tolower(ch);
int index = ch - 'a';

    TrieNode* child;
    if(root->children[index]!=NULL){
        child = root->children[index];
    }else{
        return ;
    }
     deleteWord(child,word.substr(1));
}
int main(){
  TrieNode* root = new TrieNode('-');
  insertWord(root,"ambuj");
  insertWord(root,"Abhay");
  insertWord(root,"PUSHPA");
  insertWord(root,"Ambu");

  if(searchWord(root,"AMBUJ")){
    cout<<"found";
  }else{
    cout<<"not found";
  }

  deleteWord(root,"ambuj");
cout<<endl;

  if(searchWord(root,"AMBUJ")){
    cout<<"found";
  }else{
    cout<<"not found";
  }
 
return 0;
 }