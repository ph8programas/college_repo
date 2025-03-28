#include <iostream>

using namespace std;


// comentario

#include <iostream>
#include <string>

using namespace std;

int main() {
    float cambio_dolar, produto_valor, produto_valor_dolar;
    string produto;

    cout << "\nEscolha qual produto quer converter para dólar: ";
    cin >> produto;


    cout << "\nDigite o valor do produto em reais: R$ ";
    cin >> cambio_dolar;


    cout << "\nInforme a cotação atual do dólar: ";
    cin >> produto_valor;


    // Conversão para dólar
    produto_valor_dolar = produto_valor / cambio_dolar;

    cout << "O valor do produto " << produto << " em dólares, na cotação de R$ "
         << cambio_dolar << " é de US$ " << produto_valor_dolar << "." << endl;

    cout << "\n\n\n";
    return 0;
}
