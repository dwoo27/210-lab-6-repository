#include <iostream>
using namespace std;

void enterArrayData(double*, int);
void outputArrayData(double*, int);
double sumArray(double*, int);


int main()
{
    const int SIZE = 5; //const for arr size
    double* arr = new double[SIZE]; //dynamic memory allocation for arr

    enterArrayData(arr, SIZE);
    outputArrayData(arr, SIZE);
    cout << "Sum of values: " << sumArray(arr, SIZE);
}

void enterArrayData(double* arr, int size) {
    cout << "Data entry for the array: " << endl;
    string buf; 
    
    for (int i = 0; i < size; i++) {
        cout << "    > Element # " << i << ": ";
        cin >> buf; *(arr + i) = atof(buf.c_str());
        cin.ignore(1000, 10);
    }

    cout << "Data entry complete.";
}

void outputArrayData(double* arr, int size) {
    cout << "Outputting array elements: "; 

    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
}

double sumArray(double* arr, int size) {
    double sum;

    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    return sum;
}