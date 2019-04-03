//Funciones fuera del main

/** Suma de dos numeros enteros
 *
 * 1er parámetro: primer número ingresado
 * 2do parámetro: segundo número ingresado
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
 * 1er parámetro: primer número ingresado
 * 2do parámetro: segundo número ingresado
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
 * 1er parámetro: primer número ingresado
 * 2do parámetro: segundo número ingresado
 * retorna el producto
 *
 */

int multiplicar(int x, int y){
    int multiCalculado;
    multiCalculado = x * y;
    return multiCalculado;
}

/** División de dos numeros enteros
 *
 * 1er parámetro: primer número ingresado
 * 2do parámetro: segundo número ingresado
 * retorna la división (como flotante)
 *
 */
float dividir(int x, int y){
    float divCalculado;
    divCalculado = (float) x / y;                   //Casteo
    return divCalculado;
}

/** Factorial de un número entero
 *
 * parámetro: primer número ingresado
 * Función recursiva
 * retorna el factorial
 *
 */
long factA(int x){                                  //Función recursiva
    long factACalculado;
    if (x <= 1){
        factACalculado = 1;
    }
    else{
        factACalculado = x * factA(x-1);
    }
    return factACalculado;
}

/** Factorial de un número entero
 *
 * parámetro: segundo número ingresado
 * Función recursiva
 * retorna el factorial
 *
 */

long factB(int x){                                  //Función recursiva
    long factBCalculado;
    if (x <= 1){
        factBCalculado = 1;
    }
    else{
        factBCalculado = x * factB(x-1);
    }
    return factBCalculado;
}

