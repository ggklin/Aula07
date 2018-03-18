/**
 * @file main.cpp
 * @brief Funcao principal do programa
 * @author George Franklin
 * @since 18/03/2018
 * @date 18/03/2018
 */

#include <iostream>
#include <new>
#include "sapo.hpp"

using namespace std;

/**
 * @brief Funcao main que define a distancia total, instancia tres sapos e exibe o vencedor da corrida de sapos
 * @return 0
 */
int main() {
    Sapo::dist_total = 60;

    Sapo* sapos = new Sapo[3];

    sapos[0] = Sapo("Chule", 15);
    sapos[1] = Sapo("Croac", 20);
    sapos[2] = Sapo("Cururu", 25);

    Sapo::exibir_vencedor(sapos, 3);

    return 0;
}
