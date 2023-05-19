#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion, opcion2;
    float v, v0, a, t, x, r, theta;
    char continuar;

    do {
        cout << "Selecciona el tipo de movimiento:\n";
        cout << "1. Movimiento rectilineo uniforme (MRU)\n";
        cout << "2. Movimiento rectilineo uniformemente acelerado (MRUV)\n";
        cout << "3. Movimiento Circular Uniforme (MCU)\n";
        cout << "4. Movimiento Parabolico (MP)\n";
        cin >> opcion;

        switch (opcion) {
            // Inserta el código del movimiento rectilíneo aquí...

            case 3:
                cout << "Selecciona la opcion que quieras calcular:\n";
                cout << "1. Velocidad Angular\n";
                cout << "2. Tiempo\n";
                cin >> opcion2;

                switch (opcion2) {
                    case 1:
                        cout << "Ingresa el radio en metros: ";
                        cin >> r;
                        if (r < 0) {
                            cout << "Error: El radio no puede ser negativo.\n";
                            break;
                        }
                        cout << "Ingresa el tiempo en segundos: ";
                        cin >> t;
                        if (t < 0) {
                            cout << "Error: El tiempo no puede ser negativo.\n";
                            break;
                        }
                        v = 2*M_PI*r/t;
                        cout << "La velocidad angular es: " << v << " rad/s.\n";
                        break;
                    case 2:
                        cout << "Ingresa el radio en metros: ";
                        cin >> r;
                        if (r < 0) {
                            cout << "Error: El radio no puede ser negativo.\n";
                            break;
                        }
                        cout << "Ingresa la velocidad angular en rad/s: ";
                        cin >> v;
                        if (v < 0) {
                            cout << "Error: La velocidad angular no puede ser negativa.\n";
                            break;
                        }
                        t = 2*M_PI*r/v;
                        cout << "El tiempo es: " << t << " s.\n";
                        break;
                    default:
                        cout << "Opcion invalida.\n";
                }
                break;
            case 4:
                cout << "Selecciona la opcion que quieras calcular:\n";
                cout << "1. Alcance horizontal\n";
                cout << "2. Altura maxima\n";
                cin >> opcion2;

                switch (opcion2) {
                    case 1:
                        cout << "Ingresa la velocidad inicial en m/s: ";
                        cin >> v0;
                        if (v0 < 0) {
                            cout << "Error: La velocidad inicial no puede ser negativa.\n";
                            break;
                        }
                        cout << "Ingresa el angulo de lanzamiento en grados: ";
                        cin >> theta;
                        if (theta < 0 || theta > 90) {
                            cout << "Error: El angulo de lanzamiento debe estar entre 0 y 90 grados.\n";
                            break;
                        }
                        theta = theta * M_PI / 180; // Conversion de grados a radianes
                        x = pow(v0, 2) * sin(2*theta) / 9.81;
                        cout << "El alcance horizontal es: " << x << " m.\n";
                        break;
                    case 2:
                        cout << "Ingresa la velocidad inicial en m/s: ";
                        cin >> v0;
                        if (v0 < 0) {
                            cout << "Error: La velocidad inicial no puede ser negativa.\n";
                            break;
                        }
                        cout << "Ingresa el angulo de lanzamiento en grados: ";
                        cin >> theta;
                        if (theta < 0 || theta > 90) {
                            cout << "Error: El angulo de lanzamiento debe estar entre 0 y 90 grados.\n";
                            break;
                        }
                        theta = theta * M_PI / 180; // Conversion de grados a radianes
                        x = pow(v0, 2) * pow(sin(theta), 2) / (2 * 9.81);
                        cout << "La altura maxima es: " << x << " m.\n";
                        break;
                    default:
                        cout << "Opcion invalida.\n";
                }
                break;
            default:
                cout << "Opcion invalida.\n";
        }

        cout << "Deseas realizar un nuevo ejercicio? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}

