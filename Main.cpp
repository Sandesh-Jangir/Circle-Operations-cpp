#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

// Declaring Functions
float circumfurence(float);
float area(float);

int main(){
    float radius;
    
    // IO Interface
    char input;
    cout << "Please select one of the desired operations : "<< endl;
    cout << "Circumfurence (c)" << endl << "Area (a)" << endl;
    cin >> input;

    cout << "Enter Radius of the Circle : ";
    cin >> radius;

    if (input == 'a' || input == 'A'){
        cout << "Area : " << area(radius) << endl;
    }
    else if (input == 'c' || input == 'C'){
        cout << "Circumfurence : " << circumfurence(radius) << endl;
    }
    else{
        cout<< "Please enter a valid operation"<< endl;
    }
    getch();
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
