#include "iostream"
#include "cmath"
using namespace std;
void areaC(float &r){
    cout<<"El area del circulo es: "<<pow(r,2)*M_PI;
}
int main(){
    float r;
    cout<<"Introduce el radio: ";cin>>r;
    areaC(r);
    return 0;
}