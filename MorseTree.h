//
// Created by Luke Gilsinger on 12/6/16.
//

#ifndef TREE_MORSETREE_H
#define TREE_MORSETREE_H

#endif //TREE_MORSETREE_H
#include <iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;


struct node {
    char data;
    string code;
    node *left;
    node *right;
};
node* getNewNode(char letter, string code){
    cout << "creating new node" << endl;
    node* newNode = new node();
    newNode->data = letter;
    newNode->code = code;
    newNode ->left = newNode->right = NULL;
    return newNode;
}

class MorseTree{
public:
    void BuildTree(char letter, string code);
    string decode(string code);
    string encode(string word);

private:
    node *root;
    map<char, string> lettertocode;

};