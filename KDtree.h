#ifndef KDTREE_H_INCLUDED
#define KDTREE_H_INCLUDED

class Tree
{
    public:
        Tree();
        ~Tree();

    private:
        struct Point
        {
            double xCoord;
            double yCoord;

            Point(double x, double y) : xCoord(x), yCoord(y) {}
		};

<<<<<<< HEAD
=======
		// Node's structure (element of the tree)
		struct Node{
			Point data;
			Node *left, *right, *parent;
		};

		Node *root;

>>>>>>> b9061b668eadc707e62c845b46b4a2d228082109
};

#endif // KDTREE_H_INCLUDED
