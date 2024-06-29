#include "iostream"
#include "ctime"
#include "cstdlib"
using namespace std;
int main(){
    int mc,mp,c=0,p=0;
    while (p<3 && c<3){
        cout<<endl<<"Introduce tu jugada (1. R, 2. P, 3. S): "; cin>>mp;
        srand(time(0));
        mc=rand()%3 +1;
        cout<<"PC: "<<mc<<endl;
        if (mp==mc){
            cout<<"Empate";
        }else if(mp!=mc && mp==1){
            if (mc==2){
                cout<<"Perdiste";
                c++;
            }else{
                cout<<"Ganaste";
                p++;
            }
        }else if(mp!=mc && mp==2){
            if (mc==1){
                cout<<"Ganaste";
                p++;
            }else{
                cout<<"Perdiste";
                c++;
            }
        }else if (mp!=mc && mp==3){
            if (mc==1){
                cout<<"Perdiste";
                c++;
            }else{
                cout<<"Ganaste";
                p++;
            }
        }
        cout<<endl<<"PUNTOS --- "<<"PC: "<<c<<" Player: "<<p<<endl;
    }
    if (p==3){
        cout<<endl<<"Eres el ganador";
    }else{
        cout<<"Perdiste";
    }
    return 0;
}
