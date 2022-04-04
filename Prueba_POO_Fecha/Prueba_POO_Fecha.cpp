#include <iostream>
#include <vector>

#include "Fecha.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int estado;

    vector <Fecha> vectorFecha(3);
    
    vectorFecha[0] = Fecha(12, 4, 2019);
    vectorFecha[1] = Fecha(7, 5, 2019);
    vectorFecha[2] = Fecha(23, 6, 2019);

    for(int indice = 0 ; indice < vectorFecha.size() ; indice++)
    {
        cout << "\nDatos de la Fecha" << endl;

        vectorFecha[indice].MostrarFecha();

        estado = vectorFecha[indice].ValidarFecha();

        if (estado == -1)
        {
            cout << "El dia es incorrecto " << vectorFecha[indice].ObtenerDD() << endl << flush;
        }

        if (estado == -2)
        {
            cout << "El mes es incorrecto " << vectorFecha[indice].ObtenerMM() << endl << flush;
        }

        if (estado == -3)
    	{
            cout << "El a#o es menor a cero " << vectorFecha[indice].ObtenerAAAA() << endl << flush;
        }

        if (estado != 0)
        {
            system("pause");

            return -1;
        }
    }

    cout << "\n" << "Compara los tres atributos de la primera fecha y los tres atributos de segunda fecha enviados como parametros" << endl;
    estado = vectorFecha[0].CompararFecha(vectorFecha[1].ObtenerDD(), vectorFecha[1].ObtenerMM(), vectorFecha[1].ObtenerAAAA());

    if (estado == 1)
    {
        cout << "La primera " << vectorFecha[0].ObtenerDD() << "/" << vectorFecha[0].ObtenerMM() << "/" << vectorFecha[0].ObtenerAAAA() << " es mayor a la segunda " << vectorFecha[1].ObtenerDD() << "/" << vectorFecha[1].ObtenerMM() << "/" << vectorFecha[1].ObtenerAAAA() << endl  << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La segunda " << vectorFecha[1].ObtenerDD() << "/" << vectorFecha[1].ObtenerMM() << "/" << vectorFecha[1].ObtenerAAAA() << " es mayor a la primera " << vectorFecha[0].ObtenerDD() << "/" << vectorFecha[0].ObtenerMM() << "/" << vectorFecha[0].ObtenerAAAA() << endl << flush;
        }
        else
        {
            cout << "La primera " << vectorFecha[0].ObtenerDD() << "/" << vectorFecha[0].ObtenerMM() << "/" << vectorFecha[0].ObtenerAAAA() << " es igual a la segunda " << vectorFecha[1].ObtenerDD() << "/" << vectorFecha[1].ObtenerMM() << "/" << vectorFecha[1].ObtenerAAAA() << endl << flush;
        }
    }

    cout << "\n" << "Compara los tres atributos de la primera fecha y envio la tercera fecha" << endl;
    estado = vectorFecha[0].CompararFecha(vectorFecha[2]);

    if (estado == 1)
    {
        cout << "La primera " << vectorFecha[0].ObtenerDD() << "/" << vectorFecha[0].ObtenerMM() << "/" << vectorFecha[0].ObtenerAAAA() << " es mayor a la tercera " << vectorFecha[2].ObtenerDD() << "/" << vectorFecha[2].ObtenerMM() << "/" << vectorFecha[2].ObtenerAAAA() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La tercera " << vectorFecha[2].ObtenerDD() << "/" << vectorFecha[2].ObtenerMM() << "/" << vectorFecha[2].ObtenerAAAA() << " es mayor a la primera " << vectorFecha[0].ObtenerDD() << "/" << vectorFecha[0].ObtenerMM() << "/" << vectorFecha[0].ObtenerAAAA() << endl << flush;
        }
        else
        {
            cout << "La primera " << vectorFecha[0].ObtenerDD() << "/" << vectorFecha[0].ObtenerMM() << "/" << vectorFecha[0].ObtenerAAAA() << " es igual a la tercera " << vectorFecha[2].ObtenerDD() << "/" << vectorFecha[2].ObtenerMM() << "/" << vectorFecha[2].ObtenerAAAA() << endl << flush;
        }
    }

    cout << "\n" << "Compara los tres atributos de la segunda fecha y envio la tercera fecha" << endl;
    estado = vectorFecha[1].CompararFecha(vectorFecha[2]);

    if (estado == 1)
    {
        cout << "La segunda " << vectorFecha[1].ObtenerDD() << "/" << vectorFecha[1].ObtenerMM() << "/" << vectorFecha[1].ObtenerAAAA() << " es mayor a la tercera " << vectorFecha[2].ObtenerDD() << "/" << vectorFecha[2].ObtenerMM() << "/" << vectorFecha[2].ObtenerAAAA() << endl << flush;
    }
    else
    {
        if (estado == -1)
        {
            cout << "La tercera " << vectorFecha[2].ObtenerDD() << "/" << vectorFecha[2].ObtenerMM() << "/" << vectorFecha[2].ObtenerAAAA() << " es mayor a la segunda " << vectorFecha[1].ObtenerDD() << "/" << vectorFecha[1].ObtenerMM() << "/" << vectorFecha[1].ObtenerAAAA() << endl << flush;
        }
        else
        {
            cout << "La segunda " << vectorFecha[1].ObtenerDD() << "/" << vectorFecha[1].ObtenerMM() << "/" << vectorFecha[1].ObtenerAAAA() << " es igual a la tercera " << vectorFecha[2].ObtenerDD() << "/" << vectorFecha[2].ObtenerMM() << "/" << vectorFecha[2].ObtenerAAAA() << endl << flush;
        }
    }

    system("pause");

	return 0;
}
