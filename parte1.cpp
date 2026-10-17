
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    string clave;
    char continuar;
    int puntos;

    do {
        puntos = 0;

        bool longitudCorrecta = false;
        bool tieneMayuscula = false;
        bool tieneDigito = false;
        bool tieneSimbolo = false;

        cout << "\n SISTEMA DE SEGURIDAD" << endl;
        cout << "Ingrese tu nombre: ";
        cin >> nombre;

        cout << "Ingresa una contrasena: ";
        cin >> clave;

        if (clave.length() >= 8) {
            longitudCorrecta = true;
        }

        for (int i = 0; i < clave.length(); i++) {
            char caracter = clave[i];

            if (caracter >= 'A' && caracter <= 'Z') {
                tieneMayuscula = true;
            }

            if (caracter >= '0' && caracter <= '9') {
                tieneDigito = true;
            }

            if (caracter == '!' || caracter == '@' ||
                caracter == '#' || caracter == '$' ||
                caracter == '%' || caracter == '&' ||
                caracter == '*') {
                tieneSimbolo = true;
            }
        }

        puntos = longitudCorrecta + tieneMayuscula
               + tieneDigito + tieneSimbolo;

        cout << "\nRESULTADO DEL ANALISIS" << endl;
        cout << "Usuario: " << nombre << endl;
        cout << "Reglas cumplidas: " << puntos << " de 4" << endl;

        if (puntos <= 2) {
            cout << "Nivel de seguridad: muy DEBIL como TU" << endl;
        } else if (puntos == 3) {
            cout << "Nivel de seguridad: esta como MEDIA pero de aguardiente" << endl;
        } else {
            cout << "Nivel de seguridad: MUY FUERTE como el ilegitimo estado de ISRAEL" << endl;
        }

        cout << "\nDeseas evaluar otra contrasena? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\nSistema cerrado. Hasta luego!" << endl;

    return 0;
}
