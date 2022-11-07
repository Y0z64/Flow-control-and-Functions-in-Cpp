#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int x;
    cout << "Escibre un numero: ";
    cin >> x;
    if (x % 2 == 0){
        printf("El numero %d es par",x);
    }
    else {
        printf("EL numero %d es impar",x);
    }
}
