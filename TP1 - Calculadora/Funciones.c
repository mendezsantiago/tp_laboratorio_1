//Funciones fuera del main

/** Suma de dos numeros enteros
 *
 * 1er par�metro: primer n�mero ingresado
 * 2do par�metro: segundo n�mero ingresado
 * retorna la suma
 *
 */

int sumar(int x,int y){
	int sumaCalculada;
	sumaCalculada = x + y;
	return sumaCalculada;
}

/** Resta de dos numeros enteros
 *
 * 1er par�metro: primer n�mero ingresado
 * 2do par�metro: segundo n�mero ingresado
 * retorna la resta
 *
 */

int restar(int x, int y){
    int restaCalculada;
    restaCalculada = x - y;
    return restaCalculada;
}

/** Producto de dos numeros enteros
 *
 * 1er par�metro: primer n�mero ingresado
 * 2do par�metro: segundo n�mero ingresado
 * retorna el producto
 *
 */

int multiplicar(int x, int y){
    int multiCalculado;
    multiCalculado = x * y;
    return multiCalculado;
}

/** Divisi�n de dos numeros enteros
 *
 * 1er par�metro: primer n�mero ingresado
 * 2do par�metro: segundo n�mero ingresado
 * retorna la divisi�n (como flotante)
 *
 */
float dividir(int x, int y){
    float divCalculado;
    divCalculado = (float) x / y;                   //Casteo
    return divCalculado;
}

/** Factorial de un n�mero entero
 *
 * par�metro: primer n�mero ingresado
 * Funci�n recursiva
 * retorna el factorial
 *
 */
long factA(int x){                                  //Funci�n recursiva
    long factACalculado;
    if (x <= 1){
        factACalculado = 1;
    }
    else{
        factACalculado = x * factA(x-1);
    }
    return factACalculado;
}

/** Factorial de un n�mero entero
 *
 * par�metro: segundo n�mero ingresado
 * Funci�n recursiva
 * retorna el factorial
 *
 */

long factB(int x){                                  //Funci�n recursiva
    long factBCalculado;
    if (x <= 1){
        factBCalculado = 1;
    }
    else{
        factBCalculado = x * factB(x-1);
    }
    return factBCalculado;
}

