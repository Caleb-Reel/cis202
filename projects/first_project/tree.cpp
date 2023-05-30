#include <iostream>
#include "tree.h"

using namespace std;

/*
Rearrange the lines of code from the image called code_to_add.png to create a recursive print function 
which prints the data of all of the nodes.  Put this function in tree.cpp and declare it in tree.h
complete this project on github codespaces calling the project directory: tree-project when you are completed, 
submit the url for your github codespaces repository as shown in the previous lab.

Code in image:

if(root != nullptr) {root ->print();}
void Node::print() const
cout << data << endl;
void Tree::print() const
for(Node* np : children) {np->print();}
{
}
{
}

*/

void Node::print() const
{
    for(Node* np : children){np ->print();}
}

void Tree::print() const
{
    if(root != nullptr){root ->print();}
    cout << data << endl;
}

Tree::Tree()
{
   root = nullptr;
}

Tree::Tree(std::string root_data)
{
   root = new Node;
   root->data = root_data;
}

void Tree::add_subtree(const Tree& subtree)
{
   root->children.push_back(subtree.root);
}

int Tree::size() const
{
   if (root == nullptr) { return 0; }
   else { return root->size(); }
}

int Node::size() const
{
   int sum = 0;
   for (Node* child : children)
   {
      sum = sum + child->size();
   }
   return 1 + sum;
}