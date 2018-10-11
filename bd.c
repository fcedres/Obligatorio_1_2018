// Estructuras de Datos y Algoritmos - Curso 2018
// Tecnologo en Informatica FIng - CETP
//
// Trabajo Obligatorio
// bd.c
// Modulo de Implementación de Base de Datos.

#include <iostream>

#include "bd.h"

using namespace std;


struct nodo_tabla{
	char* nomTa;
	columna x;
	tabla* sig;
};

struct nodo_columna{
	int cant;
	char* nomCo;
	tupla x;
	columna* sig;
};

struct nodo_tupla {
	char* datoTu;
	tupla* sig;
};

bd createTa(){
	//
	return NULL;
}


TipoRet createTable (t & t, char *nombreTabla){
	//cout << " - createTable " << nombreTabla << endl;;
	bool existe = false;
	if (t== NULL){			//Si no hay ninguna tabla
		t = new(nodo_tabla);
    	t->nomTa == nombreTabla;
    	t->sig = NULL;
		return OK;
	}else{
		while ((t!= NULL) && (!existe)){		//Mientras existan tablas y la tabla a crear no exista
			if (t->nomTa = nombreTabla){		//Si la tabla existe devuelvo error sino sigo buscando
				existe = true;
				return ERROR;
			}else{
				t = t->sig;
			}
		}
		if (!existe){					//Si no existe la tabla a crear, la creo. Sino error
			t = new(nodo_tabla);
    			t->nomTa = nombreTabla;
    			t->sig = NULL;
			return OK;
		}else{
			return ERROR;
		}
	}
			
	

}

TipoRet dropTable (t & t,char *nombreTabla){
	//cout << " - dropTable " << nombreTabla << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet addCol (t & t,char *nombreTabla,char *NombreCol){
	//cout << " - addCol " << nombreTabla << " " << NombreCol << endl;;
	bool existe, existeCol = false;
	if (t==NULL){		//Si no hay tablas devuelvo error
		return ERROR;
	}else{
		while ((t!= NULL) && (!existe)){		//Mientras existan tablas y la tabla no exista
			if (t->nomTa = nombreTabla){		//Si la tabla existe busco dentro para crear la columna
				existe = true;
				if (c==NULL){		//Si no hay columnas creo
					c = new(nodo_columna);
    				c->nomCo == nombreCol;
    				c->sig = NULL;
					return OK;
				}else{
					while ((c!= NULL) && (!existeCol)){		//Mientras existan columnas y la columna a crear no exista
						if (c->nomCo = nombreCol){		//Si la columna existe devuelvo error sino sigo buscando
							existeCol = true;
							return ERROR;
						}else{
							c = c->sig;
						}
					}
			
				}
			}else{
				t = t->sig;
			}
			if (!existeCol){					//Si no existe la columna a crear, la creo. Sino error
				c = new(nodo_columna);
    			c->nomCo = nombreCol;
    			c->sig = NULL;
				return OK;
			}else{
				return ERROR;
			}
		}
	}
}

TipoRet dropCol (t & t, char *nombreTabla, char *NombreCol){
	//cout << " - dropCol " << nombreTabla << " " << NombreCol << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet insertInto (t & t, char *nombreTabla, char *valoresTupla){
	//cout << " - insertInto " << nombreTabla << " " << valoresTupla<< endl;;
	return NO_IMPLEMENTADA;
}

TipoRet deleteFrom (t & t, char *nombreTabla, char *condicionEliminar){
	//cout << " - deletefrom " << nombreTabla << " " << condicionEliminar << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet update(t & t, char * nombreTabla, char * condicionModificar, char * columnaModificar, char * valorModificar){
	//cout << " - update " << nombreTabla << " " << condicionModificar << " " << columnaModificar << " " << valorModificar << endl;
	return NO_IMPLEMENTADA;
}

TipoRet printdatatable (t t, char *NombreTabla){
	//cout << NombreTabla << endl;
	return NO_IMPLEMENTADA;
}

bd destroyTa(t & t){
	//
	return NULL;
}

