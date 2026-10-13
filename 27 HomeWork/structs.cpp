#include <iostream>
using namespace std;

struct category
{
    /* data */
    bool men;
    bool women;
    bool kid;

};


struct product
{
    /* data */
    int ID;
    string name;
};



int main()
{
    product rolex;
    product cartier;
    product skmie;

    rolex.name = "rolex";
    rolex.ID = 123;

    cartier.name = "cartier";
    cartier.ID = 124;

    skmie.name = "skmie";
    skmie.ID = 147;



    cout << "\"Rolex\"\n";
    cout << "  " << rolex.name << endl << "  " << rolex.ID << endl << endl;

    cout << "\"cartier\"\n";
    cout << "  " << cartier.name << endl << "  " << cartier.ID << endl <<  endl;

    cout << "\"skmie\"\n";
    cout << "  " << skmie.name << endl << "  " << skmie.ID << endl;

    return 0;
}