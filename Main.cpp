#include <iostream>
#include <math.h>
using namespace std;

float circumfurence(float);
float area(float);

int main(){
    float radius;
    cout << "Enter Radius of the Circle : ";
    cin >> radius;
    cout << "Circumfurence : " << circumfurence(radius) << endl;
    cout << "Area : " << area(radius) << endl;
    return 0;
}

float circumfurence(float r){
    float circumfurence = 2*M_PI*r;
    return circumfurence;
}
float area(float r){
    return M_PI*pow(r, 2);
}