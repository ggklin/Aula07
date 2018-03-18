/**
 * @file sapo.cpp
 * @brief Implementacao da classe Sapo
 * @author George Franklin
 * @since 18/03/2018
 * @date 18/03/2018
 */

#include "sapo.hpp"

int Sapo::dist_total;

Sapo::Sapo() {
    identificador = " ";
    dist_percorrida = 0;
    qnt_pulos = 0;
    forca_pulo = 0;
}

Sapo::Sapo(string i, int f) {
    identificador = i;
    dist_percorrida = 0;
    qnt_pulos = 0;
    forca_pulo = f;
}

string Sapo::get_identificador() {
    return identificador;
}

int Sapo::get_dist_percorrida() {
    return dist_percorrida;
}

int Sapo::get_qnt_pulos() {
    return qnt_pulos;
}

void Sapo::pular() {
    srand(time(NULL));
    int r = (rand() % forca_pulo) + 1;
    dist_percorrida += r;
    qnt_pulos++;
}

void Sapo::exibir_vencedor(Sapo* s, int n) {
    bool vencedor = false;
    for(int i = 0; i < Sapo::dist_total; i++) {
        for(int j = 0; j < n; j++) {
            s[j].pular();
            if (s[j].get_dist_percorrida() >= Sapo::dist_total) {
                cout << "O sapo " << s[j].get_identificador() << " venceu!" << endl;
                cout << "Quantidade de pulos: " << s[j].get_qnt_pulos() << endl;
                cout << "Distancia percorrida: " << s[j].get_dist_percorrida() << endl;
                vencedor = true;
                break;
            }
        }
        if(vencedor) {
            break;
        }
    }
    delete[] s;
}
