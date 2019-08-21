/*  Exercises using vectors in C++
    a)
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    b)
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    c)
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    d)
    Use the back() method. Get the value and the address of the last element of `vector `.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vector1; // Declaration of an empty vector (no initialization)
    vector<int> vector2;

    vector1.push_back(10);  // Add 10 to the vector
    vector1.push_back(20);  // Add 20 to the vector
        
    cout << "The first element in `vector.1` is: " << vector1.at(0) << "\n";  // print out a value
    cout << "Print out size: " << vector1.size() << endl;
    cout << "=========================================================" << endl;
    
    for(int i = 0; i < vector1.size(); i++) {     // print out all the values of `vector1`.
            cout << vector1.at(i) << endl;      // Note: curly braces {} were added by me but they are not required for the `for loop`
    }

    cout << "=========================================================" << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);

    for(int i = 0; i < vector2.size(); i++) {cout << vector2.at(i) << "\n";} // one-liner `for` loop, just for fun. :p
    

    cout << "The value of the last element in `vector.1` is " << vector1.back() << "\n";
    cout << "The address of the last element in `vector.1` is " << &vector1.back();

}