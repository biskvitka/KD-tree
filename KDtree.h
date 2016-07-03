#ifndef KDTREE_H_INCLUDED
#define KDTREE_H_INCLUDED

#include <iostream>

class Tree
{
    public:
        Tree();
        ~Tree();


    private:

		//Data type of the Node
        struct Point
        {
            double xCoord;
            double yCoord;

            Point(double x, double y) : xCoord(x), yCoord(y) {}
		};
		// Node's structure (element of the tree)
		struct Node{
			Point data;
			Node *left, *right, *parent;
		};

		Node *root;

};

#endif // KDTREE_H_INCLUDED
