#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int TAM = 10;
    int vet[TAM] = {1,3,2,4,6,5,8,7,9,0};
    int i,j,min,aux;

    cout << "\nValores do vetor:\n";

    for (i=0; i <=TAM; i++){
        cout << vet[i]<<"\t";
    }

    for (i=0; i <= TAM-1; i++){
        min = i;
        for (j=i+1; j < TAM; j++){
            if(vet[j] > vet[min])
            min = j;
        }
        aux = vet[min];
        vet[min] = vet[i];
        vet[i] = aux;
    }

    cout << "\nMostrando os valores do vetor de forma ordenada:\n";
    for (i=0; i <= TAM; i++)
    {
        cout<< vet[i]<<"\t";
    
    }

    cout << endl;


}