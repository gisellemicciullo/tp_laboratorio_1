/*
 ============================================================================
 Name        : TP_[1].c
 Author      : micciullo carolina giselle
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float kilometrosIngresados = 0;
	double precioAerolineas = 0;
	double precioLatam = 0;
	int flagKilometros = 0;
	int flagAerolineas = 0;
	int flagLatam = 0;
	int opcion;
	char mensajeKilometros;
	char mensajeVuelos;
	int case2;
    float precioLatamDebito;
    float precioLatamCredito;
    float precioLatamBitcoin;
    float precioLatamKilometros;
    float precioAerolineasDebito;
    float precioAerolineasCredito;
    float precioAerolineasBitcoin;
    float precioAerolineasKilometros;


    do
    {
        if(flagKilometros == 0 && flagAerolineas == 0 && flagLatam == 0)
        {
            menu(0,0,0);
        }
        if(flagKilometros == 1 && flagAerolineas == 0 && flagLatam == 0)
        {
            menu(kilometrosIngresados,0,0);
        }
         if(flagKilometros == 1 && flagAerolineas == 1 && flagLatam == 0)
        {
            menu(kilometrosIngresados,precioAerolineas,0);
        }
        if(flagKilometros == 1 && flagAerolineas == 0 && flagLatam == 1)
        {
            menu(kilometrosIngresados,0,precioLatam);
        }
        if(flagKilometros == 0 && flagAerolineas == 1 && flagLatam == 0)
        {
            menu(0,precioAerolineas,0);
        }
        if(flagKilometros == 0 && flagAerolineas == 1 && flagLatam == 1)
        {
            menu(0,0,precioLatam);
        }
         if(flagKilometros == 0 && flagAerolineas == 1 && flagLatam == 1)
        {
            menu(0,precioAerolineas,precioLatam);
        }
         if(flagKilometros == 1 && flagAerolineas == 1 && flagLatam == 1)
        {
            menu(kilometrosIngresados,precioAerolineas,precioLatam);
        }
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            kilometrosIngresados = pedirIngreso(mensajeKilometros);
            flagKilometros = 1;
            break;
        case 2:
            printf("Ingrese el precio deseado");
            scanf ("%d", &case2);
            switch(case2)
            {
            case 1:
            precioAerolineas = pedirIngreso(mensajeVuelos);
            flagAerolineas = 1;
            break;
            case 2:
                precioLatam = pedirIngreso (mensajeVuelos);
                flagLatam = 1;
                break;
            default:
                printf("Error, ingrese nuevamamente: ");
                break;
            }
            break;

            case 3:
                if (flagKilometros == 1 && flagAerolineas == 1 && flagLatam)
                {
                    precioLatamDebito
                    precioLatamCredito
                    precioLatamBitcoin
                }


        }


    } while(opcion);


}


