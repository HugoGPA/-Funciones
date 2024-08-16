#include <iostream>
using namespace std;


int sumaIterativa(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    return suma;
}

int sumaRecursiva(int n){
    if(n==1){
     return 1;
    }else{
        return n+sumaRecursiva(n-1); 
    }
    

}

int sumaDirecta(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    
    cout << "Ingrese un entero positivo n: ";
    cin >> n;

    
    cout << " metodo iterativo: " << sumaIterativa(n) << endl;
    cout << " metodo recursivo: " << sumaRecursiva(n) << endl;
    cout << "metodo directo: " << sumaDirecta(n) << endl;

    return 0;
}

 
    
  
    