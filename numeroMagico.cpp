#include <iostream>
#include <random>

int main() {
//initialize variables
int ans;
int i = 1;
//initialize random generator
std::random_device rd;
std::mt19937 rng(rd());
std::uniform_int_distribution<int> uni(0,100);
//create random number
int magic_number = uni(rng);
//user input engine
std::cout<<"Ingresa un numero del 1 al 100: ";
std::cin>>ans;
std::cout<<"\n";
if(ans!=magic_number){
    //check is ans is < or > than magic number
    while(ans!=magic_number){
        if(ans<magic_number){
            printf("El numero magico es mayor a %d\n",ans);
        }
        else if(ans>magic_number){
            printf("EL numero magico es menor a %d\n",ans);
        }
        std::cout<<"Intentalo de nuevo: ";
        std::cin>>ans;
        //register tries
        i++;
    }
}
//end program
std::cout<<"Correcto!"<<std::endl;
printf("El numero magico es %d\n",ans);
printf("Te tomo %d intentos para encontrar el numero magico",i);
}