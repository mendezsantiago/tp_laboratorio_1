//Librerías a utilizar
#include <stdio.h>
#include <stdlib.h>

//Prototipos
int sumar(int x,int y);
int restar(int x, int y);
int multiplicar(int x,int y);
float dividir(int x, int y);
long factA(int x);
long factB(int x);

//Inicio
int main()
{
    //Declaración de variables
	int opcion;                     //Para seleccionar una opcion del menú
	int numA;                       //Primer número a ingresar
	int numB;                       //Segundo número a ingresar

	int flagA = 0;                  //Bandera del primer número, inicilizada en cero
	int flagB = 0;                  //Bandera del segundo número , inicializada en cero
	int flagOperar = 0;             //Bandera de las operaciones, inicializada en cero

	int suma;                       //Variables de calculo
	int resta;
	int multiplicacion;
	float division;
    long factorialA;
    long factorialB;

	char seguir = 's';              //Para salir del bucle

   	printf("\n---------Calculadora--------------\n");                       //Titulo inicial
    printf("Selecciones una de las siguientes opciones: ");
   	printf("\n------------------------------------\n");

    //Inicio del bucle
	do{

		if (flagA == 0){
			printf("1 - Ingrese 1er Operando (A = No definido)\n");         //Si flagA = 0, muestro el numero como no definido en pantalla
		}
		else{
			printf("1 - 1er Operando (A = %d)\n",numA);                     //Si flagA = 1, muestro en numero ingresado en pantalla, A = primer número
		}

		if (flagB == 0){
			printf("2 - Ingrese 2do Operando (B = No definido)\n");         //Si flagB = 0, muestro el numero como no definido en pantalla
		}
		else{
			printf("2 - 2do Operando (B = %d)\n",numB);                     //Si flagB = 1, muestro en numero ingresado en pantalla, B = segundo número
		}

    	if (flagOperar == 0){                                               //Si flagOperar = 0, muestro el menu original de operaciones
    		printf("3 - Calcular todas las operaciones\n");
    		printf("\tCalcular la suma (A+B)\n");
    		printf("\tCalcular la resta (A-B)\n");
    		printf("\tCalcular la multiplicacion (A*B)\n");
    		printf("\tCalcular la division (A/B)\n");
            printf("\tCalcular el factorial (A!)\n");
            printf("\tCalcular el factorial (B!)\n");
    	}
    	else{
    		printf("3 - Calcular todas las operaciones\n");                 //Si flagOperar = 1, muestro el menu con las operariones calculadas
    		printf("\tCalcular la suma (Calculada)\n");
    		printf("\tCalcular la resta (Calculada)\n");
    		printf("\tCalcular la multiplicacion (Calculada)\n");
    		if (numB != 0){                                                 //Muestro el menu modificado si el segundo numero es cero
                  printf("\tCalcular la division (Calculada)\n");
    		}
    		else{
                printf("\tCalcular la division (Error)\n");
    		}
            printf("\tCalcular el factorial (Calculado)\n");
    	}

        printf("4 - Informar todas las operaciones\n");
        printf("5 - Salir\n");
        printf("\n------------------------------------\n");
        printf("Opcion: ");
        scanf("%d", &opcion);                                               //Ingreso una opcion por teclado
        printf("\n------------------------------------\n");
        fflush(stdin);                                                      //Limpia el buffer de memoria
        //Inicio del switch
        switch (opcion){

        	case 1:
            	system("cls");                                              //Borrado de pantalla
            	printf("Ingrese el 1er numero: ");                          //Ingresa numA
            	scanf("%d",&numA);
         		flagA=1;                                                    //Cambia el estado de flagA, permite habilitar el ingreso de numB y mostrar el numero ingresado por pantalla
         		system("cls");                                              //Borrado de pantalla
            	break;


			case 2:

            	if (flagA == 0){                                            //Pregunto si flagA = 0, si es True no permite ingresar un segundo numero si no se ingresó el primero
            		printf("Error. No ingreso el 1er comando\n");
            		printf("\n");
            		break;
            	}
            	else{                                                       //Si flagA = 1, ingreso numB
					system("cls");                                          //Borrado de pantalla
            		printf("Ingrese el 2do numero: ");
            		scanf("%d",&numB);
         			flagB=1;                                                //Cambia el estado de flagB, permite mostrar el numero ingresado por pantalla
            	}
            	system("cls");                                              //Borrado de pantalla
            	break;

            case 3:

            	if (flagA == 1 && flagB == 1){                              //Si flagA=1 y flagB=1, permite realizar las operaciones.
            		suma = sumar(numA,numB);                                //Llamadas a funciones, paso como parámetros los números ingresados.
            		resta = restar(numA,numB);
            		multiplicacion = multiplicar(numA,numB);
                    division = dividir(numA,numB);
            		factorialA = factA(numA);
            		factorialB = factB(numB);
            		flagOperar = 1;                                         //Cambia el estado de flagOperar, permite habilitar el menú modificado y habilitar la impresión en pantalla de los resultados
            	}
            	else{
            		if (flagA == 0){                                        //Si flagA=0, o también si flagB=0, no premite realizar las operaciones
            			printf("Error. No ingreso el 1er comando\n");
            		}
            		if (flagB == 0){
            			printf("Error. No ingreso el 2do comando\n");
            		}
            	printf("\n");
            	}

            	break;

            case 4:

            	if (flagOperar == 1){                                       //Si flagOperar = 1,permite mostrar los resultados en pantalla
                    system("cls");
                    //Impresión
                    printf("Informe:\n");
            		printf("El resultado entre (%d + %d) es: %d\n", numA,numB,suma);
            		printf("El resultado entre (%d - %d) es: %d\n", numA,numB,resta);
            		printf("El resultado entre (%d * %d) es: %d\n", numA,numB,multiplicacion);
            		if (numB != 0){                                                                 //En caso de que el segundo numero sea cero, no se puede dividir por cero y muestro el mensaje
                        printf("El resultado entre (%d / %d) es: %.2f\n", numA,numB,division);
            		}
            		else{
                        printf("No se puede dividir por cero\n");
            		}
            		if(numA < 13 && numB < 13){                                                                                    //Debido por la falta de memoria, al sacar el factorial no da resultados correctos, entonces lo valido.
                       printf("El factorial de (%d!) es: %ld y el factorial de (%d!) es %ld\n", numA,factorialA,numB,factorialB);

            		}else{
            		    if(numA >=13){
                            printf("No se puede sacar el factorial de %d. Memoria insuficiente.\n",numA);
            		    }
            		    else{
                            printf("El factorial de (%d!) es: %ld\n",numA,factorialA);
            		    }
                        if(numB >= 13){
                            printf("No se puede sacar el factorial de %d. Memoria insuficiente.\n",numB);
                        }
                        else{
                            printf("El factorial de (%d!) es: %ld\n",numB,factorialB);
                        }
            		    }
                    printf("\n------------------------------------\n");
                    flagA = 0;                                                                      //Reset de banderas. Para que el usuario quiera volver a calcular otros números
                    flagB = 0;
                    flagOperar = 0;
            	}
            	else{
            		if (flagA == 1 && flagB == 1){                                                  //Si flagOperar = 0, no permite mostrar los resultados en pantalla, ya sea por que no realizó las operaciones o por que no ingresó un número
            			printf("Error. No realizo las operaciones\n");
            			printf("\n");
            		}
            		else{

            			if (flagA == 0){
            				printf("Error. No ingreso el 1er comando\n");
            			}
            			if (flagB == 0){
            				printf("Error. No ingreso el 2do comando\n");
            			}
            		}
            	printf("\n");
            	}
            	break;

            case 5:                                                          //Opción para salir del bucle
            	seguir = 'n';
            	break;

            default:
            	 printf("Ingrese una opcion valida\n");
        		 break;


        }//Fin del switch


    }while(seguir == 's'); //Fin del bucle

	system("pause");
    return 0;
}//Fin del main


