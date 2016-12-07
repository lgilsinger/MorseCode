//
// Created by Luke Gilsinger on 12/6/16.
//

#include "MorseTree.h"

//constructor
MorseTree::MorseTree()
{
	//create new tree and set everything to null
	root = new node;
	root->data = "";
	root->morseCode = "";
	root->left = NULL;
	root->right = NULL:
}

void MorseTree::BuildTree(char letter, string code) {

	morsify[letter] = code;
	node *ptr = root;
	ptr->data = letter;

	for (int i = 0; i <= code.length(); i++)
	{
		if (code[i] = '.')
		{
			if (ptr->left == nullptr)
			{
				ptr->left = new node;
				ptr = ptr->left;
			}
			else
			{
				ptr = (node = node->left);
			}
		}
		else if (code[i] = '-')
		{
			if (ptr->right == nullptr)
			{
				ptr->right = new node;
				ptr = ptr->right;
			}
			else
			{
				ptr = (node = node->right);
			}
		
		}
	}
	ptr->morseCode = code;
	

}
