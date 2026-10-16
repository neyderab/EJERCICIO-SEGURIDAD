
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    string clave;
    int puntos = 0;

    bool longitudCorrecta = false;
    bool tieneMayuscula = false;
    bool tieneDigito = false;
    bool tieneSimbolo = false;

    cout << "SISTEMA DE SEGURIDAD" << endl;
    cout << "Ingrese tu nombre: ";
    cin >> nombre;
    cout << "Ingresa una contraseña: ";
    cin >> clave;

    if (clave.length() >= 8) {
        longitudCorrecta = true;
    }

    for (int posicion = 0; posicion < clave.length(); posicion++) {
        char letra = clave[posicion];

        if (letra >= 'A' && letra <= 'Z') {
            tieneMayuscula = true;
        }

        if (letra >= '0' && letra <= '9') {
            tieneDigito = true;
        }

        if (letra == '!' || letra == '@' || letra == '#' ||
            letra == '$' || letra == '%' || letra == '&' ||
            letra == '*') {
            tieneSimbolo = true;
        }
    }

    puntos = longitudCorrecta + tieneMayuscula
           + tieneDigito + tieneSimbolo;

    cout << "\nRESULTADO DEL ANALISIS" << endl;
    cout << "Reglas cumplidas: " << puntos << " de 4" << endl;

    if (puntos <= 2) {
        cout << "Nivel de seguridad: DEBIL como TU" << endl;
    } else if (puntos == 3) {
        cout << "Nivel de seguridad: MEDIA pero de aguardiente" << endl;
    } else {
        cout << "Nivel de seguridad: FUERTE como ilegitimo estado de ISRAEL" << endl;
    }

    return 0;
}
