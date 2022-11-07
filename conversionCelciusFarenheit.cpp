#include <iostream>
using namespace std;

int main(){
    //formula far = (9/5)*cel+32
    //initialize variables
    int iterations;
    int diference;
    int i = 0;
    //initialize arrays
    float cel [iterations];
    float far [iterations];
    //get input
    cout<<"Valor de celcius inicial: ";
    cin>>cel[0];
    cout<<endl<<"Cantidad de conversiones: ";
    cin>>iterations;
    cout<<endl<<"Diferencia entre conversiones: ";
    cin>>diference;
    cout<<endl<<"Conversion de Celcius a Farenheit"<<endl<<endl;
    cout<<"Farenheit"<<"     "<<"Celcius"<<endl;
    //populate cel
    for(auto i=1;i<iterations+1;i++){
        cel[i] = cel[i-1] + (float)diference;
    }
    //make operations and print
    i = 0;
    while(i<iterations){
        far[i] = ((9.0/5.0)*((float)(cel[i])))+32;
        printf("%0.2f          %0.2f\n",far[i],cel[i]);
        i++;
    }
}