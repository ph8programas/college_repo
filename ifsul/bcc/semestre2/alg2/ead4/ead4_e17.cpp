/*
    Autor: Pedro H.C Rossetto
    Data: 01/09/2025
    Descrição: Escreva um programa para controlar a venda de ingresso de um estádio de futebol
    Trabalho prático 4, Exercício 1, Algoritimos 2
*/



#include <cstring>
#include <iostream>
#include <fstream>
#include <windows.h>


using namespace std; 

int main () {
    system("chcp 1252 > nul");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);


    /*
    Obter o caminho absoluto do arquivo atual, 
    estava tendo problemas com o output do arquivo indo para o diretório do compilador ao invés do diretório do projeto
    */
    char absolutePath[FILENAME_MAX];
    if (!_fullpath(absolutePath, __FILE__, FILENAME_MAX)) {
        cerr << "Erro ao obter o caminho absoluto do arquivo." << "\n";
        return 1;
    }
    string path_file(absolutePath);
    size_t lastSlash = path_file.find_last_of("\\/");
    string file_name = path_file.substr(lastSlash + 1, path_file.find_last_of('.') - lastSlash - 1);
    path_file = path_file.substr(0, lastSlash + 1);

    string nome_arquivo = path_file + "saida.txt", operador;
    string vetor[10];
    int valor, vetor_output_1[100], vetor_output_2[100], indice_vetor;

    ifstream leitura_entradas("entradas.txt", ios::in);
        if (!leitura_entradas)
            {
                cout << "Arquivo nao foi aberto.\n";
                return 1;
            }
        else while (!leitura_entradas.eof())
    {
        leitura_entradas >> operador;
        if (operador == "adiciona")
        {
            leitura_entradas >> vetor >> valor;
            if (vetor == "V1")
            {
                /* code */
            }
            
            

            

        }
        
    }

    

    


}
