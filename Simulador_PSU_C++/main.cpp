#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <ctime> //para funcion srand((unsigned int) time(0));

using namespace std;


/* Simulador de PSU
genere un archivo separado por ';' con los siguientes elementos:
- Rut( secuencia entre 14916641 - 19932391)
- NEM -> 475 - 700 (Al azar entre esos valores)
- Ranking -> 500 - 850 (Al azar entre esos valores)
- Matemática -> 475 - 750 (Al azar entre esos valores)
- Lenguaje -> 475 -750 (Al azar entre esos valores)
- Ciencias -> 475 -750 (Al azar entre esos valores)
- Historia -> 475 -750 (Al azar entre esos valores)

Funcion que para cada rut genere puntajes al azar en un archivo

ej: 14916641;600;590;712;625;479;599
    14916641;581;623;618;500;639;475
*/

int main()
{
  srand((unsigned int) time(0));//toma la hora actual del reloj y pasa como semilla
  ofstream file_csv;
  file_csv.open("ruts.csv",ios::out);
  for(int i=14916641; i<=19932391;i++){
      int NEM= 475 + rand() %276;
      int RKN= 475 + rand() %276;
      int MAT= 475 + rand() %276;
      int LEN= 475 + rand() %276;
      int CIE= 475 + rand() %276;
      int HIST= 475 + rand() %276;
      file_csv<<i<<";"<<NEM<<";"<<RKN<<";"<<MAT<<";"<<LEN<<";"<<CIE<<";"<<HIST<<";"<<"\n";
  }
  file_csv.close();
  return 0;
}
