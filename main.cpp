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


//SUMA RECURSIVA 3n+1 

int OTresNMasUnoRecursiva(int n) {
   if (n == 1) {
        return 0;
    } else if (n % 2 == 0) {
        return 1 + OTresNMasUnoRecursiva(n / 2);
    } else {
        return 1 + OTresNMasUnoRecursiva(3 * n + 1);
    }
}

int OTresNMasUnoIterativa(int n) {
    int pasos = 0;
    while (n != 1) {
        n = 3 * n + 1;
        ++pasos;
    }
    return pasos;
}

int main() {
    int n;

    cout << "Ingresa n: ";
    cin >> n;

    
    cout << " metodo iterativo: " << sumaIterativa(n) << endl;
    cout << " metodo recursivo: " << sumaRecursiva(n) << endl;
    cout << "metodo directo: " << sumaDirecta(n) << endl;
    cout << " pasos usando el metodo recursivo: " << OTresNMasUnoRecursiva(n) << endl;
    cout << " pasos usando el metodo iterativo: " << OTresNMasUnoIterativa(n) << endl;

    return 0;
}





    
  
    