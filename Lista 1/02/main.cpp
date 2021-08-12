#include <iostream>
#include <cmath> 
using namespace std;


int main(){
    double area, latas;

    cout << "Digite o tamanho a ser pintado" << endl;
    cin >> area;

    latas = (area/3)/18;

    cout << "Devem ser compradas : "<< ceil(latas) << "Latas" << endl;
    cout << "Isso ira custar R$:" << ceil(latas) * 80 << endl; 
    

}