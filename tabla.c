// Estructuras de Datos y Algoritmos - Curso 2018
// Tecnologo en Informatica FIng - CETP
//
// Trabajo Obligatorio
// tabla.c
// Modulo de Implementación de Base de Datos.

#include <iostream>
#include <string.h>

#include "tabla.h"
#include "columna.h"

using namespace std;


struct nodo_tabla{
	char* nomTa;
	c x;
	t sig;
};

t createTa(){
	//
	return NULL;
}

TipoRet createTable (t & t, char *nombreTabla){
	//cout << " - createTable " << nombreTabla << endl;;
	bool existe = false;
	if (t== NULL){			//Si no hay ninguna tabla
		t = new(nodo_tabla);
    		strcpy(t->nomTa,nombreTabla);
    		t->sig = NULL;
		return OK;
	}else{
		while ((t!= NULL) && (!existe)){		//Mientras existan tablas y la tabla a crear no exista
			if (strcmp(t->nomTa,nombreTabla)==0){		//Si la tabla existe devuelvo error sino sigo buscando
				existe = true;
				return ERROR;
			}else{
				t = t->sig;
			}
		}
		if (!existe){					//Si no existe la tabla a crear, la creo. Sino error
			t = new(nodo_tabla);
    			strcpy(t->nomTa,nombreTabla);
    			t->sig = NULL;
			return OK;
		}else{
			return ERROR;
		}
	}
			
	

}



/*
 *	profe
 */
TipoRet addCol (t & t,char *nombreTabla,char *nombreCol){
	t aux = t
	while (aux != NULL) && strcmp(t->nomTa, nombreTabla) != 0){
		aux = aux->sig;
	}
	if ((aux != NULL) && (strcmp(aux->nomTa, nombreTabla) == 0)){
		addCol_final(aux->x, char *nombreCol)
		return OK;
	}
	else
		return ERROR;

}


TipoRet dropTable (t & t,char *nombreTabla){
	//cout << " - dropTable " << nombreTabla << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet dropCol (t & t, char *nombreTabla, char *NombreCol){
	//cout << " - dropCol " << nombreTabla << " " << NombreCol << endl;;
	return NO_IMPLEMENTADA;
}

TipoRet printdatatable (t t, char *NombreTabla){
	//cout << NombreTabla << endl;
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

t destroyTa(t & t){
	//
	return NULL;
}
