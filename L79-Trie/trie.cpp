#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
  public:
    TrieNode* root;
 
    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //assumption, word will be in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //Recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }
};

bool isEmpty(TrieNode* root){
    for(int i=0; i<26; i++){
        if(root->children[i]){
            return false;
        }
    }
    return true;
    //returns true if root has no children, else false
}

TrieNode* remove(TrieNode* root, string key, int depth=0){
    //if tree is empty
    if(!root){
        return NULL;
    }

    //if last character of key is being processed
    if(depth == key.size()){
        if(root->isTerminal){
            root->isTerminal = false;
        }

        //if given is not prefix of any other word
        if(isEmpty(root)){
            delete (root);
            root = NULL;
        }
        return root;
    }

    //if not last character, recur for the child
    int index = key[depth] - 'a';
    root->children[index] = remove(root->children, key, depth+1);

    //if root does not have any child(it's only child gets deleted), and it is not end of another word.
    if(isEmpty(root) && root->isTerminal==false){
        delete (root);
        root = NULL;
    }
    return root;
}

int main(){

    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout<<"present or not   "<<t->searchWord("TIME")<<endl;
    cout<<"present or not   "<<t->searchWord("TIM")<<endl;

    return 0;
}
