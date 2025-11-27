#include <iostream>
#include <cmath>
#include <bits//stdc++.h>

using namespace std;

//Vector Class
class VectorType
{
    private:
    //Parameters
        int x_mag;
        int y_mag;
        int z_mag;
    
    public:
    //Default Contructor
    VectorType():
        x_mag(0), y_mag(0), z_mag(0){}

    //Parameterized Constructor
    VectorType(int x, int y, int z): 
        x_mag(x), y_mag(y), z_mag(z){}

    //Show Vector Function
     void printVector()
     {
        cout << "Vector = [" 
             << x_mag << ", "
             << y_mag << ", "
             << z_mag << "]";
     }
};

//DEBUGGING AND TESTING
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    VectorType v1(x, y, z);
    v1.printVector();
}
