#include <iostream>
using namespace std;
char a;
int main() {
	do {
		cout << "Mi nombre es David Geraldino Suyo Bautista estudio la carrera de ingenieria en ciencias de la computacion,"<<endl;
		cout << "naci en 1999 un pueblo de Potosi, llamado Cotagaita mas conocida como la tierra de la chaskañawi, " << endl;
		cout << "me apasiona la tecnologia y el arte (musica, dibujo), entré en esta carrera porque me maravilla" << endl;
		cout << "como alguien común puede cambiar el mundo tan solo imaginando y programando."<<endl<<endl<<endl;
        cout << "¿Desea volver a imprimir la biografia?(s/n)"<<endl;
		cin >>  a;

	} while (a=='s');
}