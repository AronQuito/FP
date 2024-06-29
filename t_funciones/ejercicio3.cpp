#include "iostream"
#include "cmath"
using namespace std;
int main(){
    int c1,c2,h;
    cout<<"Introduce el cateto 1: ";cin>>c1;
    cout<<"Introduce el cateto 2: ";cin>>c2;
    cout<<"La hipotenusa es: "<<sqrt(pow(c1,2)+pow(c2,2));
    return 0;
}