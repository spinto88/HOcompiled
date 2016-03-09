

- Los distintos pasos de compilacion realiza:
 El preprocessing reemplaza las sentencias "include <.h>"
por las declaraciones incluidas en los respectivos archivos 
headers.
make assembler convierte el archivo de texto escrito
en C en lenguaje assembler.
make object genera el objeto binario a partir del
codigo escrito en assembler.
make ejecutable genera el ejecutable linkeando con 
todos los objetos necesarios para que corra el programa,
que contienen las definiciones de todas las funciones 
utilizadas en el programa.

- El preprocesador reemplaza las sentencias headers
por todas declaraciones incluidas en los respectivos
archivos headers.

- Dentro del archivo .asm encuentro las funciones main,
descripta a continuacion de "main:" dentro de la cual
contiene las sentencias "call add_numbers" y  "call printf".
Luego se encuentra la definición de add_numbers a continuacion
de "add_numbers:". La funcion printf no aparece definida aqui,
ya que se linkea al crear el ejecutable.

- Los descriptores que surgen al realizar nm *.o indican
el estado de las funciones. En este caso de nm calculator.o 
genera:
"""
T add_numbers,
T main,
U printf.
"""
Las T se refieren a funciones definidas en el objeto,
que pueden ser llamadas externamente,
mientras que la U indica undefined, ya que al momento
de generar calculator.o no esta definida.

- Ademas de las funciones main y add_numbers, en la 
lista de objetos aparecen muchas variables definidas.
Las que contienen un descriptor en minusculas se refieren
a variables estaticas, no se accede externamente.
La funcion printf aun aparece como undefined ya que se linkea
dinamicamente, es decir, en tiempo de ejecucion.
