#include <iostream>
using namespace std;
int main (){
    int stop = 1;
    while (stop){
    int num1, num2;
    char operacao;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Escolha a operação (+, -, *, /): ";
    cin >> operacao;

    if (operacao == '+'){
        cout << "Resultado: " << num1 + num2 << endl;
    } else if(operacao == '_'){
         cout << "Resultado: " << num1 - num2 << endl;
    } else if (operacao == '*'){
         cout << "Resultado: " << num1 * num2 << endl;
    } else if (operacao == '/'){
        if (num2 !=0){
         cout << "Resultado: " << num1 / num2 << endl;
        }
     }else{
        cout << "Operação invalida" << endl;
        break;
    }
    int a = 1;
    cout << "Deseja parar o programa? (1 - sim / 2 - não): ";
    cin >> a;
    if (a == 1){
        stop = false;
    }

    }
    
    return 0;
    
}