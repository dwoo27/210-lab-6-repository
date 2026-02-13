#include <iostream>
using namespace std;

void enterArrayData(double*, int);
void outputArrayData(double*, int);
double sumArray(double*, int);


int main()
{
    const int SIZE = 5; //const for arr size
    double* arr = new double[SIZE]; //dynamic memory allocation for arr


}

void enterArrayData(double* arr, int size) {
    cout << "Data entry for the array: ";
    
    for (int i = 0; i < size; i++) {
        cout << "    > Element # " << i << ": " << *(arr + i);
    }

    cout << "Data entry complete.";
}