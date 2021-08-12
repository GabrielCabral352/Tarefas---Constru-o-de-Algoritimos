#include <iostream>

using namespace std;

int main() {
    float n1, n2;
    cout << "Digite a primeira nota" << endl;
    cin >> n1;
    cout << "Digite a segunda nota" << endl;
    cin >> n2;

    if((n1 + n2)/ 2 >= 7){
        cout << "Aprovado" << endl;
    }else{
        cout << "Reprovado" << endl;
    }

}
