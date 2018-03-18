/**
 * @file sapo.hpp
 * @brief Interface da classe Sapo
 * @author George Franklin
 * @since 18/03/2018
 * @date 18/03/2018
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Sapo {
    private:
        string identificador;
        int dist_percorrida;
        int qnt_pulos;
        int forca_pulo;

    public:
        /**
         * @brief Construtor padrao
         */
        Sapo();

        /**
         * @brief Construtor que inicializa o identificador e a forca do pulo de um sapo
         * @param i Identificador do sapo
         * @param f Forca do pulo do sapo
         */
        Sapo(string i, int f);

        /**
         * @brief Metodo get para obter o identificador de um sapo
         * @return Identificador do sapo
         */
        string get_identificador();

        /**
         * @brief Metodo get para obter a distancia percorrida de um sapo
         * @return Distancia percorrida do sapo
         */
        int get_dist_percorrida();

        /**
         * @brief Metodo get para obter a quantidade de pulos de um sapo
         * @return Quantidade de pulos do sapo
         */
        int get_qnt_pulos();

        /**
         * @brief Metodo que incrementa a distancia pecorrida de forma randômica entre 1 e o máximo que um sapo pode saltar e incrementa o número de pulos dados pelo sapo em uma unidade
         */
        void pular();

        /**
         * @brief Atributo estático que define a distância total de uma corrida de sapos
         */
        static int dist_total;

        /**
         * @brief Método estático que exibe o vencedor de uma corrida de sapos
         * @param s Vetor de sapos alocado dinamicamente
         * @param n Tamanho do vetor
         */
        static void exibir_vencedor(Sapo* s, int n);
};
