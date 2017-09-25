/*
 * Jeremy Reynolds
 * COSC 2030
 * Due: Sept 24, 2017
 *
 */

#include "Collection.h"


int main()
{
   Collection<int> driver;
    // max is 10

    driver.display();
    driver.insert(10);
    driver.insert(34);
    driver.insert(55);
    driver.insert(4);
    driver.insert(9);
    driver.insert(89);
    driver.insert(22);
    driver.insert(14);
    driver.insert(12);
    driver.insert(7);
    driver.insert(100);
    driver.display();
    cout << endl;

    driver.remove(10);
    driver.display();

    int containedNUM1 = 100;
    if (driver.notContained(containedNUM1) == false){
        cout << containedNUM1 << ":is not contained"<< endl;
    } else{
        cout << containedNUM1 << ": is in the collection" << endl;
    }




    driver.display();
    cout << endl;

    if (driver.isEmpty() == true){
        cout << " Yes this collection is empty"<< endl;
    } else {
        cout << "The collection is NOT empty."<< endl;
    }

    driver.removeRandom();
    driver.display();

    cout << endl;

    driver.makeEmpty();

    if (driver.isEmpty() == true){
        cout << "Yes this collection is empty"<< endl;
    } else {
        cout << "The collection is NOT empty."<< endl;
    }
     cout << endl;

    driver.insert(9);
    driver.display();
}