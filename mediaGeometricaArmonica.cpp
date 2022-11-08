#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>

int main(){
    int x;
    int prod_n=1;
    int i=0;
    float inv_n_sum;
    
    //create a flexible array
    std::vector<int> n;
    std::vector<float> inv_n;
    //title
    std::cout<<"Inserta valores para obtener la media Geometrica y armonica\nPara dejar de introducir valores introduce 0"<<std::endl;
    do{
        printf("Introduce el valor numero %d: ",i+1);
        std::cin>>x;
        std::cout<<"\n";
        n.push_back(x);
        i++;
    }while(x !=0 );
    //sum n and store value into sum_n
    n.erase(n.end() - 1);
    n.erase(n.end() - 1);
    //multiply every digit in n
    for(int i=0;i<n.size()+1;i++){
        prod_n = prod_n * n[i]; 
    }
    //media geometrica
    auto geo = std::pow(prod_n,1.0/((float)n.size()+1));
    //media armonica
    //turn every iteration in n into its mathematical inverse
    for(int i=0;i<n.size()+1;i++){
        inv_n.push_back(1.0/n[i]);
    }
    //media armonica operacion
    float arm = ((float)n.size()+1)/((float)(std::accumulate(inv_n.begin(),inv_n.end(),inv_n_sum)));

    //print everithing
    printf("\nEl numero de digitos es n=%d",n.size()+1);
    printf("\nLa media geometrica es %0.4f\n",geo);
    printf("La media armonica es %0.4f",arm);
}