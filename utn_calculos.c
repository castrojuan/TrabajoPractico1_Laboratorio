
/*
 *
 */


#include "utn_calculos.h"

#include <stdio.h>
#include <stdlib.h>



/* \brief suma dos numeros ingresados por el usuario
 *
 * \param num1 primer numero
 * \param num2 segundo numero
 * \param resultado de la operacion
 *
 * \return retorno 0 en caso de que se este todo bien y -1 en caso de error
*/
int sumarInt(int num1,int num2,int* resultado)
{
	int retorno=-1;
	int bufferInt;

	if(resultado != NULL)
	{
		bufferInt=num1+ num2;
		*resultado=bufferInt;
		retorno=0;
	}


	return retorno;

}


/* \brief resta dos numeros ingresados por el usuario
 *
 * \param num1 primer numero
 * \param num2 segundo numero
 * \param resultado de la operacion
 *
 * \return retorno 0 en caso de que se este todo bien y -1 en caso de error
*/
int restarInt(int num1,int num2,int* resultado)
{
	int retorno=-1;
	int bufferInt;

	if(resultado != NULL)
	{
		bufferInt=num1 - num2;
		*resultado=bufferInt;
		retorno=0;
	}


	return retorno;

}

/* \brief multiplica dos numeros ingresados por el usuario
 *
 * \param num1 primer numero
 * \param num2 segundo numero
 * \param resultado de la operacion
 *
 * \return retorno 0 en caso de que se este todo bien y -1 en caso de error
*/
int multiplicarInt(int num1,int num2,int* resultado)
{
	int retorno=-1;
	int bufferInt;

	if(resultado != NULL)
	{
		bufferInt=num1 * num2;
		*resultado=bufferInt;
		retorno=0;
	}


	return retorno;

}


/* \brief divide dos numeros ingresados por el usuario
 *
 * \param num1 primer numero
 * \param num2 segundo numero
 * \param resultado de la operacion
 *
 * \return retorno 0 en caso de que se este todo bien y -1 en caso de error
*/
float dividirFloat(int num1,int num2,float* resultado)
{
	int retorno=-1;
	float bufferInt;



	if(num2 != 0 && resultado !=NULL)
	{
		bufferInt=(float)num1 / num2;
		*resultado=bufferInt;
		retorno=0;
	}


	return retorno;

}


/* \brief calcula el factorial de un numero ingresadospor el usuario
 *
 * \param num1 primer numero
 * \param resultado de la operacion
 *
 * \return retorno 0 en caso de que se este todo bien y -1 en caso de error
*/
int factorialInt(int*num,int* resultado)
{
		int retorno= -1;
		int bufferInt;
		int numero;

			if(num !=NULL && resultado != NULL)
			{
			numero= *num;
			bufferInt=1;

				for(int i=1;i<=numero;i++)
				{
					   bufferInt=(bufferInt * i);
				}
			*resultado=bufferInt;

			retorno=0;
			}
			return retorno;
}


/* \brief solicita al usuario un numero, lo valida, verifica, y devuelve el resultado.
 *
 * \param pResultado puntero al resultado.Alli se dejará el numero ingresado por el usuario
 * \param mensaje es el mensaje a ser mostrado
 * \param mensaje es el mensaje a ser mostrado en caso de error.
 * \param minimo Valor Minimo Aceptado.
 * \param maximo Valor maximo aceptado
 * \reintentos cantidad de reintentos en caso de error
 * \param resultado de la operacion
 *
 * \return retorno 0 en caso de que se este todo bien y -1 en caso de error
*/
int utn_getNumero(int* pResultado,char* mensaje, char*mensajeError,int minimo,int maximo, int reintentos)
{
	int retorno=-1;
	int bufferInt;
	if(pResultado !=NULL && mensaje !=NULL && mensajeError !=NULL && minimo <= maximo && reintentos >=0)
	{
		do
		{
			 printf("%s",mensaje);
			 fflush(stdin);
			 scanf("%d",&bufferInt);
			 if(bufferInt >= minimo && bufferInt <= maximo)
			 {
				 *pResultado = bufferInt;
				 retorno = 0;
				 break;
			 }
			 else
			 {
				 printf("%s", mensajeError);
				 reintentos--;
			 }
	    }while(reintentos >= 0);

	}
	return retorno;
}


