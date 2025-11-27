#include <iostream>
#include <cmath>
#include <bits//stdc++.h>

using namespace std;

//Vector Class
class VectorType
{
    private:
    //Parameters
        int Vector_Size;
    
    public:
    //Default Contructor
    VectorType():
        Vector_Size(0){}

    //Parameterized Constructor
    VectorType(int x): 
        Vector_Size(x)
        {
            int Vector[Vector_Size];
            for (int i = 0; i<Vector_Size; i++)
            {
                cin >> Vector[i]; 
            }
        }

    //printVector Function
     void printVector()
     {
        cout << "Vector = [";
        for (int i = 0; i<Vector_Size; i++)
        {
            cout << Vector[i]
        }
     }
};

//DEBUGGING AND TESTING
int main()
{
    int x1,y1,z1;
    int x2,y2,z2;

    //Input Vector 1 & 2
    cin >> x1 >> y1 >> z1
        >> x2 >> y2 >> z2;

    VectorType v1(x1, y1, z1);
    VectorType v2(x2, y2, z2);

    //Show 2 Vectors
    v1.printVector();
    v2.printVector();
}
