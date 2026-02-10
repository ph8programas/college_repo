#include <iostream>

using namespace std;

main (){

    int *p = new int[5];
    int n, i = 0;
    do{
        n = rand() %41 + 10;
        if (n%2 != 0){
            p[i] = n;
            i++;
        }
    } while ( i<5);

    cout << "Vetor: ";
    for( i=0; i< 5; i++){
        cout << p[i]<< " ";
    }
    cout << endl;
    delete [] p;
    return EXIT_SUCCESS;
}