#include <iostream>

using namespace std;


int main() {
    float sal;
    cout << "Qual o valor que você ganha por mes?" << endl;
    cin >> sal;

    cout << "Salario bruto: " << sal << endl; 
    cout << "IR (11%): " << sal * 0.11 << endl;
    cout << "INSS (8%): " << sal * 0.08 << endl;
    cout << "Sindicato (5%): " << sal * 0.05 << endl;
    cout << "Salario Liquido: " << sal - ((sal * 0.11) + (sal * 0.08) + (sal * 0.05))<< endl;

    system("pause");
}