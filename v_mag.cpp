#include <iostream>
#include <cmath>
using namespace std;

//method declaration 
void printArray();
double getMagnitude();
void getUserInput();

//variable declaration
const int SIZE = 3;     //change this to update how many numbers the user can enter
double userVector[SIZE];

int main(){
    getUserInput();
    double vectorMag = getMagnitude();
    cout << "Magnitude of Vector: ";
    printArray();
    cout << " = " << vectorMag << endl;
    return 0;
}

void getUserInput(){
    cout << "Enter " << SIZE << " numbers: ";
    for(int i = 0; i < SIZE; i++){
        cin >> userVector[i];
    }
}

void printArray(){
    cout << "<"; 
    for(int i = 0; i < SIZE; i++){
        cout << " " << userVector[i] << " ";
    }
    cout << ">";
}

double getMagnitude(){
    double total = 0;
    for(int i = 0; i < SIZE; i++){
        total += std::pow(userVector[i], 2);    // total = total + userVector[i]^2
    }
    double magnitude = std::sqrt(total);    // magnitude = square root of total
    return magnitude;
}