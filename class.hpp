#ifndef CLASS_HPP
#define CLASS_HPP

template <class T1, class T2>
class Complex 
{
public:
    Complex(T1 a, T2 b)
    {
        value = a;
        value2 = b;
    }

void Print()
{
    std::cout << "Numarul complex creat: " << value << "+" << value2 << "i" << std::endl;
}



private:
    T1 value;
    T2 value2;

};


#endif