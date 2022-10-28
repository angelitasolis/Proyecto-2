#pragma once
#include <iostream>

using namespace std;

struct eslabon_Poblados {
public:
	struct eslabon_Poblados* pro_eslabon;
	string NombrePoblacion;
	string Habitantes;
	string x;
	string y;
public:
	eslabon_Poblados(string a, string b, string xs, string ys);
	~eslabon_Poblados();
	struct eslabon_Poblados* Pro();
};


class Lista_Poblados { //Lista de las poblaciones
private:
	struct eslabon_Poblados* p_Listas;
	struct eslabon_Poblados* u_Listas;
	int n;
public:
	Lista_Poblados();
	~Lista_Poblados();
	int getn_Poblados();
	struct eslabon_Poblados* Pri();
	bool operator==(Lista_Poblados&);
	Lista_Poblados& operator=(Lista_Poblados&);
	bool Vacio_Poblados();
	void Vaciar_Poblados();
	void operator<<(struct eslabon_Poblados*);
	void Borrar_Poblados(struct eslabon_Poblados*);
	struct eslabon_Poblados* Buscar_Poblados(int d);
	void Mostrar_Poblados();
	void Cargar_Poblados(Lista_Poblados&);
	void Indices_Poblados(string f);
};


struct eslabon_Escuelas {
public:
	struct eslabon_Escuelas* pro_eslabon;
	string NombreInstitucion;
	string CantEstudiantes;
	string Provincia;
	string Canton;
	string Distrito;
	string x;
	string y;
public:
	eslabon_Escuelas(string a, string b, string c, string d, string e, string xs, string ys);
	~eslabon_Escuelas();
	struct eslabon_Escuelas* Pro();
};


class Lista_Escuelas { //Lista de las escuelas
private:
	struct eslabon_Escuelas* p_Listas;
	struct eslabon_Escuelas* u_Listas;
	int n;
public:
	Lista_Escuelas();
	~Lista_Escuelas();
	int getn_Escuelas();
	struct eslabon_Escuelas* Pri();
	bool operator==(Lista_Escuelas&);
	Lista_Escuelas& operator=(Lista_Escuelas&);
	bool Vacio_Escuelas();
	void Vaciar_Escuelas();
	void operator<<(struct eslabon_Escuelas*);
	void Borrar_Escuelas(struct eslabon_Escuelas*);
	struct eslabon_Escuelas* Buscar_Escuelas(int d);
	void Mostrar_Escuelas();
	void Cargar_Escuelas(Lista_Escuelas&);
	void Indices_Escuelas(string f);
};

struct eslabon_Colegios {
public:
	struct eslabon_Colegios* pro_eslabon;
	string NombreInstitucion;
	string CantEstudiantes;
	string Provincia;
	string Canton;
	string Distrito;
	string x;
	string y;
public:
	eslabon_Colegios(string a, string b, string c, string d, string e, string xs, string ys);
	~eslabon_Colegios();
	struct eslabon_Colegios* Pro();
};

class Lista_Colegios { //Lista de las colegios
private:
	struct eslabon_Colegios* p_Listas;
	struct eslabon_Colegios* u_Listas;
	int n;
public:
	Lista_Colegios();
	~Lista_Colegios();
	int getn_Colegios();
	struct eslabon_Colegios* Pri();
	bool operator==(Lista_Colegios&);
	Lista_Colegios& operator=(Lista_Colegios&);
	bool Vacio_Colegios();
	void Vaciar_Colegios();
	void operator<<(struct eslabon_Colegios*);
	void Borrar_Colegios(struct eslabon_Colegios*);
	struct eslabon_Colegios* Buscar_Colegios(int d);
	void Mostrar_Colegios();
	void Cargar_Colegios(Lista_Colegios&);
	void Indices_Colegios(string f);
};
