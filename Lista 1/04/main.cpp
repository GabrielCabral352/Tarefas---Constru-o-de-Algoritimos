#include <iostream>

using namespace std;

int main() {
    float salFixo, vendas;
    cout << "Digite o valor do salario base";
    cin >> salFixo;
    cout << "Digite o valor das vendas";
    cin >> vendas;

    if(vendas <= 1500){
        cout << "Salario: R$" << salFixo + (vendas * 0.03) << endl;
    }else{
        cout << "Salario: R$" << salFixo + (vendas * 0.05) << endl;
    }

}