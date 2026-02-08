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
    cout << "List after appending 10, 20, 30: " << list << endl;
    //test insert
    list.insert(1,15);
    cout << "List after inserting 15 at position 1: " << list << endl;
    // Test getElement
    cout << "Element at position 1: " << list.getElement(1) << endl;
    // Test replace and getElement
    list.replace(1, 25);                                
    cout << "List after replacing element at position 1 with 25: " << list << endl;
    cout << "Element at position 1: " << list.getElement(1) << endl;
    // Test remove
    list.remove(1);
    cout << "List after removing element at position 1: " << list << endl;          
    // Test clear
    list.clear();
    cout << "List after clearing: " << list << endl;
    return 0;
}