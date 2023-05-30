#include<iostream>
#include <string>
#include "tree.h"

/*
Rearrange the lines of code from the image called code_to_add.png to create a recursive print function 
which prints the data of all of the nodes.  Put this function in tree.cpp and declare it in tree.h
complete this project on github codespaces calling the project directory: tree-project when you are completed, 
submit the url for your github codespaces repository as shown in the previous lab.

Code in image:

if(root != nullptr){ root ->print();}
void Node::print() const
cout << data << endl;
void Tree::print() const
for(Node* np : children) {np->print();}
{
}
{
}

*/

using namespace std;

int main()
{
   Tree t1("Anne");
   Tree t2("Peter");
   t1.add_subtree(t2);
   Tree t3("Zara");
   t1.add_subtree(t3);
   Tree t4("Savannah");
   t2.add_subtree(t4);
   std::cout << "Size: " << t1.size() << std::endl;

   // t1.print();   // this will recursively print the tree.


    return 0;

}


