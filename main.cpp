#include <iostream>
using namespace std;

int main (){
   int idade;
   cout << "Digite sua idade: ";
   cin >> idade;
   if(idade >= 18){
    cout << "Você pode ser preso";
   }
   else{
    cout << "Você vai pra FASE";
   }
   
    return 0;
    }