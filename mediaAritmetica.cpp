#include <iostream>
using namespace std;
#include <numeric>

int main(){
int len_nums;
int sum = 0;
cout << "Escribe el numero de digitos que quieres promediar: ";
cin >> len_nums;
//create a int array to store each digit
int nums [len_nums];
//get input for each element
for(auto i=1;i<len_nums+1;i++){
    cout<<"Inserta elemento "<<i<<": ";
    cin >> nums[i];
    cout<< nums[i] <<endl;
    }
//sum all array elements
for(auto i=1; i<len_nums+1;i++){
    sum+= nums[i];
    cout<<"\n"<<sum<<endl;
}
//get average value
float ans = (float)sum/(float)len_nums;
//print
printf("El promedio es: %0.2f",ans);
}