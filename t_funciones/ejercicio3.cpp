#include "iostream"
#include "cmath"
using namespace std;
int hip(int a, int b){
    int r;
    r=sqrt(pow(a,2)+pow(b,2));
    return r;
}
int main(){
    int c1,c2,h;
    cout<<"Introduce el cateto 1: ";cin>>c1;
    cout<<"Introduce el cateto 2: ";cin>>c2;
    cout<<"La hipotenusa es: "<<hip(c1,c2);
    return 0;
}