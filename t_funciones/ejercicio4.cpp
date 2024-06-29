#include "iostream"
#include "cmath"
using namespace std;
void calcularRaices(float &a,float &b, float &c){
    float r1,r2;
    if (4*a*c<=pow(b,2)){
        r1=(-b+sqrt(pow(b,2)-4*a*c))/2;
        r2=(-b-sqrt(pow(b,2)-4*a*c))/2;
        cout<<r1<<" "<<r2;
    }else{
        cout<<"La funcion tiene una solucion en los complejos";
    }
}
int main(){
    float a,b,c,r1,r2;
    cin>>a>>b>>c;
    calcularRaices(a,b,c);
    return 0;
}

