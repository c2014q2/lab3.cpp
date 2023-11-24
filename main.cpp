#include <iostream>
#include "class.hpp"
#include "class2.hpp"

using namespace std;

// Declararea funcției template min3
template <typename T>
T min3(T a, T b, T c);

int main()
{
    cout << "Cel mai mic numar din sir: " << min3(1, 5, 8) << endl;

    Complex complex(5.9, 8);
    complex.Print();

    // Exemplu de utilizare pentru clasa Array
    Array<int, 5> myArray = {1, 2, 3}; // Inițializare cu lista de inițializare
    myArray.PrintArray();

    Array<int, 5> anotherArray = myArray; // Constructor de copiere
    anotherArray.PrintArray();

   // Array<int, 5> thirdArray;
   // thirdArray = myArray; // Operator de atribuire
   // thirdArray.PrintArray();

    return 0;
}

// Definirea funcției template min3
template <typename T>
T min3(T a, T b, T c)
{
    T min = a;

    if (b > c)
    {
        if (min > c)
            min = c;
    }
    else
    {
        if (min > b)
            min = b;
    }

    return min;
}
