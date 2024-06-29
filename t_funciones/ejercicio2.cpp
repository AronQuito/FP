#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;
int main(){
    int max;
    cin>>max;
    srand(time(0));
    cout<<rand()%max +1;
    return 0;
}