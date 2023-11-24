#ifndef CLASS2_HPP
#define CLASS2_HPP

#include <initializer_list>
#include <iostream>
#include <stdexcept>

template <class T, size_t Size>
class Array {
public:
    // Constructor cu lista de inițializare
    Array(std::initializer_list<T> values) {
        fill(0);

        size_t i = 0;
        for (const T& value : values) {
            if (i < Size) {
                data[i] = value;
                i++;
            } else {
                break; // Nu este loc pentru mai multe elemente
            }
        }
    }

    Array() {
        fill(0);
    }

    // Funcție pentru afișarea array-ului
    void PrintArray() {
        std::cout << "[ ";
        for (size_t i = 0; i < Size; ++i) {
            std::cout << " " << data[i] << " ";
        }
        std::cout << "]" << std::endl;
    }

    // Constructor de copiere
    Array(const Array& other) {
        for (size_t i = 0; i < Size; ++i) {
            data[i] = other.data[i];
        }
    }

    // Operatorul de atribuire
    Array& operator=(const Array& other) {
        if (this != &other) {
            for (size_t i = 0; i < Size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    // Destructor
    ~Array() {}

    // Operatorul de indexare
    T& operator[](size_t index) {
        if (index >= Size) {
            throw std::out_of_range("Indexul depaseste dimensiunea array-ului.");
        }
        return data[index];
    }

    // Funcție membru size
    size_t size() const {
        return Size;
    }

    // Funcție membru fill
    void fill(const T& value) {
        for (size_t i = 0; i < Size; ++i) {
            data[i] = value;
        }
    }

private:
    T data[Size];
};

#endif
