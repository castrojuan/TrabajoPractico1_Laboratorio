/*
 ============================================================================
 Name        : tp1.c
 Author      : JUAN MARTIN CASTRO
 Version     :
 Copyright   : Your copyright notice
 Description : CALCULADORA: el programa le pide al usuario dos numeros, realiza la operacion logica seleccionada,
 	 	 	 	 e imprime el resultado, la cantidad de veces que el usuario desee
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "utn_calculos.h"


int main(void) {
	setbuf(stdout,NULL);


//Declaracion de variables
int operando1;
int operando2;
int suma;
int resta;
int multiplicacion;
float division;
int factorial;
int operacion;
int respuesta;


   //llamado a funcion getNumero para obtener numeros ingresados por el usuario
	do
	{
		utn_getNumero(&operando1,"ingrese un operando\n", "error\n",0,100,3);
		utn_getNumero(&operando2,"ingrese un operando\n", "error\n",0,100,3);

		//Muestra al usuario los numeros ingresados
		printf("\nOperando A=%d \nOperando B=%d\n",operando1,operando2);

		//llamado a funcion getNumero para desplegar menu de opciones
		utn_getNumero(&operacion,"\nque operacion desea realizar? (Indique el numero)\n1-SUMA\n2-RESTA\n3-MULTIPLICACION\n4-DIVIDIR\n5-FACTORIALES\n ","La operacion no es valida",1,5, 3);


	//calcula e imprime la operacion seleccionada
	switch(operacion)
	{
		case 1:
		sumarInt(operando1,operando2,&suma);
		printf("\n\nSuma (A+B)= %d",suma);
		break;

		case 2:
		restarInt(operando1,operando2,&resta);
		printf("\nResta (A-B)= %d",resta);
		break;

		case 3:
		multiplicarInt(operando1,operando2,&multiplicacion);
		printf("\nMultiplicacion(A*B)= %d",multiplicacion);
		break;

		case 4:
		if(operando2!=0) //validacion distinto de 0 divisor
			{
				dividirFloat(operando1,operando2,&division);
				printf("\nDivision (A/B)= %f",division);
			}
			else
			{
			printf("\nError.No es posible dividir por cero.");
			}
			break;

		case 5:

		factorialInt(&operando1,&factorial);
		printf("\nFactorial de %d es %d ",operando1,factorial);
		factorialInt(&operando2,&factorial);
		printf("\nFactorial de %d es %d ",operando2,factorial);
		break;
	}

	printf("\n\nDesea realizar otra operacion? Marque: \n1-VOLVER AL MENU\n2-SALIR\n"); //Pregunta al usuario si desea seguir iterando.
	fflush(stdin);
	scanf("%d",&respuesta); // Respuesta usuario

	}while(respuesta==1);

	printf("Adios");


	/*  OTRA VERSION ( CALCULA E IMPRIME TODAS LAS OPERACIONES UNA VEZ OBTENIDOS LOS NUMEROS
	 *
	 *
	utn_getNumero(&operando1,"ingrese un operando\n", "error\n",0,40,3);
	utn_getNumero(&operando2,"ingrese un operando\n", "error\n",0,40,3);


	printf("\nOperando A=%d \nOperando B=%d\n",operando1,operando2);

	sumarInt(operando1,operando2,&suma);
	printf("\n\nSuma (A+B)= %d",suma);

	restarInt(operando1,operando2,&resta);
	printf("\nResta (A-B)= %d",resta);

	multiplicarInt(operando1,operando2,&multiplicacion);
	printf("\nMultiplicacion(A*B)= %d",multiplicacion);

	if(dividirFloat(operando1,operando2,&division)==0);
		{
		printf("\nDivision (A/B)= %f",division);
		}
		else
		{
			printf("\nError. No es posible dividir por 0.");
		}
	factorialInt(&operando1,&factorial);
	printf("\nFactorial de %d es %d ",operando1,factorial);

	factorialInt(&operando2,&factorial);
	printf("\nFactorial de %d es %d ",operando2,factorial);  */

return EXIT_SUCCESS;
}
