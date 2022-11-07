#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int placeholder;
    cout << "Escribe un numero: ";
    cin >> num1;
    cout << "Escribe otro numero: ";
    cin >> num2;
    placeholder = num1;
    num1 = num2;
    num2 = placeholder;
    printf("Numero 1= %d, Numero 2= %d",num1,num2);
    return 0;
}