#ifndef ACTUACION_H
#define ACTUACION_H

#include <string>
#include <vector>
#include <iostream>
#include <utility>

struct Anotacion {
    int puntos;
    std::string juego;
};

class Actuacion {
public:
    std::vector<int> indiceDados;
    Anotacion anotacion;
    bool seRespeta;
    std::string accion;

    Actuacion(std::vector<int> idx, Anotacion anot, bool respeta, std::string acc)
        : indiceDados(idx), anotacion(anot), seRespeta(respeta), accion(acc) {}

    void display() const {
        std::cout << "indiceDados: [";
        for (size_t i = 0; i < indiceDados.size(); ++i) {
            std::cout << indiceDados[i] << (i == indiceDados.size() - 1 ? "" : ", ");
        }
        std::cout << "]" << std::endl;
        std::cout << "anotacion: (" << anotacion.puntos << ", " << anotacion.juego << ")" << std::endl;
        std::cout << "seRespeta: " << (seRespeta ? "True" : "False") << std::endl;
        std::cout << "accion: " << accion << std::endl;
    }

    void displayCompacto(int indice = -1) const {
        if (indice > -1) {
            std::cout << "[" << indice << "]";
        }
        std::cout << "([";
        for (size_t i = 0; i < indiceDados.size(); ++i) {
            std::cout << indiceDados[i] << (i == indiceDados.size() - 1 ? "" : ",");
        }
        std::cout << "], (" << anotacion.puntos << ", '" << anotacion.juego << "'), "
                  << (seRespeta ? "True" : "False") << ", " << accion << ")" << std::endl;
    }
};

#endif // ACTUACION_H
