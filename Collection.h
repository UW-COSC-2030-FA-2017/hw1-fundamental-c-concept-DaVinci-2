/*
 * Jeremy Reynolds
 * COSC 2030
 * Due: Sept 24, 2017
 *
 */

#ifndef COLLECTION_H_
#define COLLECTION_H_

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

template <class T>
class Collection{

private:
    int size;
    int spot;
    T *objects;


public:
    //The Constructor with 10 as max
    Collection(int x = 10);


    bool isEmpty() const;
    void makeEmpty();
    void display();
    void insert(int x);
    void remove(int x);
    void removeRandom();
    bool notContained(int x);

    ~Collection();
};
//Deconstructor
template <class T>
Collection<T>::~Collection() {

    delete[] objects;
}
//constructor
template <class T>
Collection<T>::Collection(int i) {
    size = i;
    objects = new T[size];
    spot = 0;
}

template <class T>
void Collection<T>::makeEmpty(){
    delete [] objects;
    spot = 0;
    objects = new T[size];

}

template <class T>
void Collection<T>::insert(int x) {
    if(spot < size){
        objects[spot] = x;
        cout << x << " is now inserted"<< endl;
        spot++;

    } else{
        size = size * 2;
        T * dou = new T[size];

        for(int i = 0; i < spot; i++){
            dou[i] = objects[i];
        }
        delete[] objects;
        objects = dou;
        objects[spot] = x;
        cout << x << "  is now inserted"<< endl;
        spot++;
    }
}

template <class T>
void Collection<T>::remove(int x) {
    for(int i = 0; i < size; i++){
        if(objects[i] == x){
            for (int j = i; j < size; j++) {
                objects[j] = objects[j+1];

            }
            cout << x << " is removed"<< endl;
            spot--;
        }
    }
}

template <class T>
void Collection<T>::removeRandom() {

    srand(time(0));
    int rando = rand() % spot;
    remove(objects[rando]);
}

template <class T>
void Collection<T>::display() {

    cout << spot << " elements are in the collection." << endl;

    cout << "The elememts are: ";
    int count = 0;
    for (int i = 0; i < spot; i++)
    {

        cout << objects[i] << " ";
    }
    cout << endl;
}

//checks if array is empty
template <class T>
bool Collection<T>::isEmpty() const {

    if(spot==0){
        return true;
    } else{
        return false;
    }
}

//checks if x is in array
template <class T>
bool Collection<T>::notContained(int x) {
    for (int i = 0; i < size ; i++) {
        if (objects[i] == x){
            return true;
        }

    }
}

#endif