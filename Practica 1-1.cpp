// Angel Emanuel Mendoza Reyes // Grupo 1 O // 22110083 // Programacion Estructurada// 18/03/2022


#include <iostream> // Se incluye una biblioteca.

using namespace std;// Se usa para evitar escribir std:: antes de el proceso de cout o cint.


int main(   ) { //Esta es la funcion principal,esta es la parte donde inicia el programa.


        int contar, residuo=0; // Esta es la declaracion de dos variables enteras, que son contar y residuo.
        
        
         for (contar=1; contar<11; contar += 1 ) /* Este es el ciclo For es donde se establece los valores iniciales de las variables 
                                                  Y tambien limita que tendra para dejar de ejecutarse en este ejemplo mientras la variable
                                                 sea menor que 11 y el valor que se le ira sumando asi cada vez que se ejecute el ciclo.*/
                                                                 
        {
                residuo = contar % 2;/* En este caso se divide entre dos el valor que cargar la variable contar y el valor del residuo se igual
                                       a la variable del mismo nombre.*/
                
                if ( residuo== 0)/* Se hace un if con la coondicion de ejecutar la siguiente linea si el valor de la variable residuo es igual
                                    a cero*/
                
                {
                        cout<< "El número "<< contar << " es par" << endl; /* Se muestra un texto el cual muestra el valor de la variable contar y dice 
                                                                             que el numero es par,el endl es un salto de linea */
                }
                else { /* En caso de no cumplirse la primera condicion ejecutara el siguiente codigo  que se muestra dentro de las llaves*/
				
                
                        cout << "El número "<< contar << " es impar" << endl;/* Se muestra un texto el cual muestra el valor de la variable contar y dice 
                                                                               que el numero es impar, el endl es un salto de linea*/
                }
                //contar ++;
               
        }
        return contar;// Aqui termina el programa y le regresa el valor de la variable contar a la funcion principal del el programa//

}
