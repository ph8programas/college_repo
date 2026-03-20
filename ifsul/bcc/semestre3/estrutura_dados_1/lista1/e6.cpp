#include <ctime>   
#include <cstdlib> 
#include <fstream>
#include <windows.h> // Apenas para Windows
#include "../modules/vetor_dinamico.hpp"
#include "../modules/text_files.hpp"
#include "../modules/utils.hpp"


using namespace std;

struct Temperatura
{
    string dia;
    float temp_min;
    float temp_max;

    Temperatura(){
        dia = "";
        temp_min = 0.0;
        temp_max = 0.0;
    }

    Temperatura(string d, float t_min, float t_max){
    dia = d;
    temp_min = t_min;
    temp_max = t_max;
    }
};


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
        ifstream arquivo("C:\\Users\\pcarteli\\OneDrive - Alvarez and Marsal\\Repositories\\college_repo\\ifsul\\bcc\\semestre3\\estrutura_dados_1\\lista1\\temperatura.txt");
    
    if(!arquivo.is_open()){
        cout << "Erro ao abrir arquivo";
        return 1;
    }

    int qtd_linhas = 0;
    string lixo;
    while (getline(arquivo, lixo)) qtd_linhas++;
    arquivo.clear();
    arquivo.seekg(0);


    Temperatura* lista_temperaturas = new Temperatura[qtd_linhas];
    for (int i = 0; i < qtd_linhas; i++)
    {
        // Variáveis temporárias para coletar os dados para permitir chamar o construtor com parametros
        string d;
        float tmin;
        float tmax;

        arquivo >> d >> tmin >> tmax;
        lista_temperaturas[i] = Temperatura(d,tmin,tmax);
    }
    // Exibir resultados
    for (int i = 0; i < qtd_linhas; i++) {
        cout << "Dia: " << lista_temperaturas[i].dia << " (Temperatura Míninma: " << lista_temperaturas[i].temp_min << " Temperatura Máxima: "<< lista_temperaturas[i].temp_max <<")" << endl;
    }

    delete[] lista_temperaturas;
    arquivo.close();
    return 0;
}
