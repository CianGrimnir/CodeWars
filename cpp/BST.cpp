/*

Question is from testdome.com
Write a function that, efficiently with respect to time used, 
checks if a given binary search tree contains a given value.

*/

#include <stdexcept>
#include <string>
#include <iostream>

class Node
{
public:
    Node(int value, Node* left, Node* right)
    {
        this->value = value;
        this->left = left;
        this->right = right;
    }

    int getValue() const
    {
        return value;
    }

    Node* getLeft() const
    {
        return left;
    }

    Node* getRight() const
    {
        return right;
    }

private:
    int value;
    Node* left;
    Node* right;
};

class BinarySearchTree
{
public:
    static bool contains(const Node& root, int value) {
        const Node* parent = &root;
        if (parent == nullptr )
            return false;
        
        if (root.getValue() == value) 
           return true; 
     
    // Key is greater than root's key 
        if (root.getValue() < value) 
           return contains(*root.getRight(), value); 
  
    // Key is smaller than root's key  
    return contains(*root.getLeft(), value);  
    }
};

#ifndef RunTests
int main()
{
    Node n1(1, NULL, NULL);
    Node n3(3, NULL, NULL);
    Node n2(2, &n1, &n3);

    std::cout << BinarySearchTree::contains(n2, 3);
}
#endif
