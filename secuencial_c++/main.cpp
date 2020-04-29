#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main(){
    ifstream lectura;
    ofstream escritura;
    string texto,rut,p1,p2,p3,p4,p5;
    lectura.open("ruts.csv",ios::in);//abre el archivo en modo lectura
    escritura.open("ruts_promedios.csv",ios::out);//el archivo se crea en la ubicación del programa
    if(lectura.fail() || escritura.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    while(!lectura.eof()){//mientras no sea el final del archivo
        getline(lectura,texto);//lee linea x linea y guarda lo de lectura en texto, no tiene mas parámetros
        //escritura<<texto<<'\n';
        rut=texto.substr(0,8);
        p1=texto.substr(9,3);
        p2=texto.substr(13,3);
        p3=texto.substr(17,3);
        p4=texto.substr(21,3);
        p5=texto.substr(25,3);
        float promedio = (strtof((p1).c_str(),0) + strtof((p2).c_str(),0) + strtof((p3).c_str(),0) + strtof((p4).c_str(),0) + strtof((p5).c_str(),0))/5;
        //cout<<rut<<";"<<promedio<<"\n";
        escritura<<rut<<";"<<promedio<<"\n";
    }
    lectura.close();//cerrar archivo
    escritura.close();
    return 0;
}
