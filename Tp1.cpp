//Programa para resolver trabajo práctico N°1

#include <iostream>

using namespace std;

    struct cancion{ //Creacion de la estructura

        string artista; //declaración de variables dentro de la estructura
        string titulo;
        int duracion;
        int tamanoDelFichero;

        }cancion1;

    int main()
    {
        cout << "Digite nombre del artista creador de la canción"<<endl;
        cin >> cancion1.artista;
        cout << "digite el titulo de la cancion" << endl;
        cin >> cancion1.titulo;
        cout << "Digite la duración en segundos de la canción" << endl;
        cin >> cancion1.duracion;
        cout << "digite el tamaño del fichero en kb"<<endl;
        cin >> cancion1.tamanoDelFichero;

        cout << cancion1.artista <<endl; //Salida en pantalla de los datos pedidos
        cout << cancion1.titulo <<endl;
        cout << cancion1.duracion <<endl;
        cout << cancion1.tamanoDelFichero <<endl;

        return 0;
    }
