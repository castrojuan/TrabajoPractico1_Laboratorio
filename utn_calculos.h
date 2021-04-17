/*
 HEADERS FUNCIONES BIBLIOTECAS
 */

#ifndef UTN_CALCULOS_H_
#define UTN_CALCULOS_H_

int utn_getNumero(int* pResultado,char* mensaje, char*mensajeError,int minimo,int maximo, int reintentos);
int sumarInt(int num1,int num2,int* resultado);
int restarInt(int num1,int num2,int* resultado);
int multiplicarInt(int num1,int num2,int* resultado);
float dividirFloat(int num1,int num2,float* resultado);
int factorialInt(int*num,int* resultado);
#endif /* UTN_CALCULOS_H_ */
