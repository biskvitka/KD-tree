#ifndef KDTREE_H_INCLUDED
#define KDTREE_H_INCLUDED

class tree
{
    public:
        tree();
        ~tree();

    private:
        struct point
        {
            double xCoord;
            double yCoord;

            point(double x, double y) : xCoord(x), yCoord(y) {}
        };
        point *root;

};

#endif // KDTREE_H_INCLUDED
