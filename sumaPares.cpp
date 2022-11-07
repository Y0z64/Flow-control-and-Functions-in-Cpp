#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int i = 1;
    int x = 0;
    while(i<101){
        if(i%2==0){
            x = x + i;
            cout << i << endl;
        }
    i = i + 1;
    }
printf("La suma de los pares de 100 es igual a: %d",x);
}