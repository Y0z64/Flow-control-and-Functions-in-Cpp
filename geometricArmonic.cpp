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
    std::cout<<"Insert values to get the Geometric mean and Armonic mean\nTo stop insert 0"<<std::endl;
    do{
        printf("Insert the value number %d: ",i+1);
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
    printf("\nThe number of digits is n=%d",n.size()+1);
    printf("\nThe geometric mean is: %0.4f\n",geo);
    printf("The armonic mean is: %0.4f",arm);
}