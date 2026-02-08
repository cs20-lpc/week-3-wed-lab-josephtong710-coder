// TO DO: Implement the driver main() function to test your code.
#include "LinkedList.hpp"
#include <iostream>
using namespace std;
int main(){
    LinkedList<int> list;
    // Test append and getElement
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);
    list.append(60);
    list.append(70);
    cout << "List after appending: " << list << endl;
    cout <<"Length of the list: " << list.getLength() << endl;
    //test insert
    list.insert(1,15);
    list.insert(3,35);
    list.insert(5,45);
    list.insert(7,55);
    cout << "List after inserting: " << list << endl;
    // Test getElement
    cout << "Element at position 1: " << list.getElement(1) << endl;
    cout << "Lenght of the list: " << list.getLength() << endl;
    // Test replace and getElement
    list.replace(1, 25); 
    list.replace(3,42);
    list.replace(5,54);
    list.replace(8,56);                               
    cout << "List after replacing element at position 1: " << list << endl;
    cout << "Element at position 1: " << list.getElement(1) << endl;
    // Test remove
    list.remove(1);
    cout << "List after removing element at position 1: " << list << endl;          
    // Test clear
    list.clear();
    cout << "List after clearing: " << list << endl;
    return 0;
}