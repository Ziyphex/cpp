//Conor COHEN FARRELL 15449588

// Chapter 10 of C++ How to Program
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
inline void print(T ar[], int size) {
    for (int i = 0; i < size; i++) {
        cout << ar[i] << " ";
    }

    cout << endl << endl;
};

template <typename T>
inline void print(vector<T> v) {
    for (typename vector<T>::const_iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl << endl;
};

int main() {
    int int_ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "Int array: ";
    print(int_ar, sizeof(int_ar) / sizeof(int_ar[0]));

    double double_ar[] = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1, 0.1};
    cout << "Double array: ";
    print(double_ar, sizeof(double_ar) / sizeof(double_ar[0]));

    string string_ar[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "zero"};
    cout << "String array: ";
    print(string_ar, sizeof(string_ar) / sizeof(string_ar[0]));

    vector<int> int_v;
    for (int i = 0; i < sizeof(int_ar) / sizeof(int_ar[0]); i++) {
        int_v.push_back(int_ar[i]);
    }
    cout << "Int vector: ";
    print(int_v);

    vector<double> double_v;
    for (int i = 0; i < sizeof(double_ar) / sizeof(double_ar[0]); i++) {
        double_v.push_back(double_ar[i]);
    }
    cout << "Double vector: ";
    print(double_v);

    vector<string> string_v;
    for (int i = 0; i < sizeof(string_ar) / sizeof(string_ar[0]); i++) {
        string_v.push_back(string_ar[i]);
    }
    cout << "String vector: ";
    print(string_v);

    return 0;
}
/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/