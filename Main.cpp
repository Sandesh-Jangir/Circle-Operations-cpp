#include <iostream>
#include <math.h>
using namespace std;

// Declaring Functions
float circumfurence(float);
float area(float);

int main(){
    float radius;
    
    // IO Interface
    char input[20];
    cout << "Please select one of the desired operations : "<< endl;
    cout << "Circumfurence" << endl << "Area";
    cin >> input;

    cout << "Enter Radius of the Circle : ";
    cin >> radius;
    cout << "Circumfurence : " << circumfurence(radius) << endl;
    cout << "Area : " << area(radius) << endl;
    return 0;
}

// Defining Functions
float circumfurence(float r){
    float circumfurence = 2*M_PI*r;
    return circumfurence;
}
float area(float r){
    return M_PI*pow(r, 2);
}