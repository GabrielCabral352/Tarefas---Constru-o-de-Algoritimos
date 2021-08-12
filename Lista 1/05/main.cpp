#include <iostream>

using namespace std;

int main(){
    float n1, n2;

    cout << "Digite o numero 1" << endl;
    cin >> n1;
     cout << "Digite o numero 2" << endl;
    cin >> n2;

    if(n1 > n2){
        cout << "Numero 1 eh maior";
    }else if(n2 > n1){
        cout << "Numero 2 eh maior";
    }else{
        cout << "Eles sao iguais";
    }
}