#include <iostream>
using namespace std;

int factorial(int n);

int main(){
    cout << "Hola! Ingrese un número entero positivo para calcular su factorial :)" << endl;
    int n, resultado;
    cin >> n;
   
    resultado = factorial(n);
    cout << "\nEl resultado es: " << n << "!=" << resultado << endl;
}

int factorial(int n){
    
    int res;
    
    if(n == 0){
        res = 1;
    }
    else{
        res = n*factorial(n-1);
    }
    
    return res;
}