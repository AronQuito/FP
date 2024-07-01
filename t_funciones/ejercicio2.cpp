#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;
void randomMax(int &max){
    srand(time(0));
    cout<<rand()%max +1;
}
int main(){
    int max;
    cin>>max;
    randomMax(max);
    return 0;
}