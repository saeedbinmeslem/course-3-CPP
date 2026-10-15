#include <iostream>
using namespace std;

enum enCategory
{
    Men,
    Women,
    Kid
};

struct product
{
    /* data */
    int ID;
    string name;
    enCategory category;
};

int main()
{
    product rolex;
    product cartier;
    product skmie;

    rolex.name = "rolex";
    rolex.ID = 123;
    rolex.category = enCategory::Men;

    cartier.name = "cartier";
    cartier.ID = 124;
    cartier.category = enCategory::Women;

    skmie.name = "skmie";
    skmie.ID = 147;
    skmie.category = enCategory::Kid;

    cout
        << "\"Rolex\"\n";
    cout << "  " << rolex.name << endl
         << "  " << rolex.ID << endl
         << "  " << rolex.category << endl
         << endl;

    cout << "\"cartier\"\n";
    cout << "  " << cartier.name << endl
         << "  " << cartier.ID << endl
         << "  " << cartier.category << endl
         << endl;

    cout << "\"skmie\"\n";
    cout << "  " << skmie.name << endl
         << "  " << skmie.ID << endl
         << "  " << skmie.category << endl;

    return 0;
}