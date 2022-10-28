#pragma once
#include <iostream>
#include "Header.h"
#include <fstream>
#include <sstream>

using namespace std;

eslabon_Poblados::eslabon_Poblados(string a, string b, string xs, string ys) {
	pro_eslabon = NULL; NombrePoblacion = a; Habitantes = b; x = xs; y = ys;
}
eslabon_Poblados::~eslabon_Poblados() { pro_eslabon = NULL; }
struct eslabon_Poblados* eslabon_Poblados::Pro() { return pro_eslabon; };

Lista_Poblados::Lista_Poblados()
{
	p_Listas = NULL; u_Listas = NULL;
	n = 0;
};
Lista_Poblados::~Lista_Poblados()
{
	Vaciar_Poblados();
}
struct eslabon_Poblados* Lista_Poblados::Pri() { return p_Listas; }

int Lista_Poblados::getn_Poblados() {
	return n;
}

bool Lista_Poblados::Vacio_Poblados()
{
	return (p_Listas == NULL && u_Listas == NULL);
}

void Lista_Poblados::Vaciar_Poblados()
{
	struct eslabon_Poblados* aux1, * aux2;
	aux2 = NULL;
	aux1 = p_Listas;
	while (aux1 != NULL)
	{
		aux2 = aux1;
		if (aux1 != u_Listas) aux1 = aux1->pro_eslabon; else aux1 = NULL;
		delete aux2;
	};
	p_Listas = NULL; u_Listas = NULL;
}

void Lista_Poblados::Cargar_Poblados(Lista_Poblados& h) {
	string nombre_archivo = "poblados.txt";
	ifstream handle0;
	string line, aux[4];
	string a, b, x, y;
	int m, q;
	handle0.open(nombre_archivo, ios::binary);
	bool continuar = true;
	while (continuar) {
		getline(handle0, line);
		if (line.find("endsolid exported") == -1) {
			for (int i = 0; i < 4; i++) {
				m = line.find("");
				q = line.find(";");
				aux[i] = line.substr(m, q + 1);
				line = line.substr(q + 1, -1);
			}
		}
		else {
			continuar = false;
		}
		a = aux[0], b = aux[1], x = aux[2], y = aux[3];
		struct eslabon_Poblados* aux1 = new struct eslabon_Poblados(a, b, x, y);
		h << aux1;
	}
}

void Lista_Poblados::operator<<(struct eslabon_Poblados* q)
{
	if (p_Listas == NULL)
	{
		q->pro_eslabon = q; p_Listas = u_Listas = q;
	}
	else
	{
		q->pro_eslabon = p_Listas;
		u_Listas->pro_eslabon = q;
		u_Listas = q;
	}
}
void Lista_Poblados::Borrar_Poblados(struct eslabon_Poblados* aux1)
{
	if (aux1 == p_Listas && aux1 == u_Listas)
	{
		p_Listas = NULL; u_Listas = NULL;
	}
	else
	{
		if (aux1 == p_Listas)
			p_Listas = aux1->pro_eslabon;
	};
	delete aux1;
}

void Lista_Poblados::Mostrar_Poblados()
{
	struct eslabon_Poblados* aux1;
	aux1 = p_Listas;
	while (aux1 != NULL)
	{
		cout << "Nombre de Poblacion: " << aux1->NombrePoblacion << " / Numero de Habitantes: " << aux1->Habitantes << " / X: " << aux1->x << " / Y: " << aux1->y << '\n';
		if (aux1 != u_Listas)
			aux1 = aux1->pro_eslabon;
		else
			aux1 = NULL;
	}
}

void Lista_Poblados::Indices_Poblados(string f) {
	int cont = 0;
	ifstream handle0;
	string line;
	handle0.open(f, ios::binary);
	bool continuar = true;
	while (continuar)
	{
		getline(handle0, line);
		if (line.find("endsolid exported") == -1) {
			cont++;
		}
		else {
			continuar = false;
		}
	}
	string* Lista = new string[cont];
	for (int i = 0; i < cont; ++i) {

	}
	delete[] Lista;
}

///////



/////// METODOS DE ESCUELAS EMPIEZAN ACA


eslabon_Escuelas::eslabon_Escuelas(string a, string b, string c, string d, string e, string xs, string ys) {
	pro_eslabon = NULL; NombreInstitucion = a; CantEstudiantes = b; Provincia = c; Canton = d; Distrito = e; x = xs; y = ys;
}
eslabon_Escuelas::~eslabon_Escuelas() { pro_eslabon = NULL; }
struct eslabon_Escuelas* eslabon_Escuelas::Pro() { return pro_eslabon; };

Lista_Escuelas::Lista_Escuelas()
{
	p_Listas = NULL; u_Listas = NULL;
	n = 0;
};
Lista_Escuelas::~Lista_Escuelas()
{
	Vaciar_Escuelas();
}
struct eslabon_Escuelas* Lista_Escuelas::Pri() { return p_Listas; }

int Lista_Escuelas::getn_Escuelas() {
	return n;
}

bool Lista_Escuelas::Vacio_Escuelas()
{
	return (p_Listas == NULL && u_Listas == NULL);
}

void Lista_Escuelas::Vaciar_Escuelas()
{
	struct eslabon_Escuelas* aux1, * aux2;
	aux2 = NULL;
	aux1 = p_Listas;
	while (aux1 != NULL)
	{
		aux2 = aux1;
		if (aux1 != u_Listas) aux1 = aux1->pro_eslabon; else aux1 = NULL;
		delete aux2;
	};
	p_Listas = NULL; u_Listas = NULL;
}

void Lista_Escuelas::Cargar_Escuelas(Lista_Escuelas& h) {
	string nombre_archivo = "escuelas.txt";
	ifstream handle0;
	string line, aux[7];
	string a, b, c, d, e, x, y;
	int m, q;
	handle0.open(nombre_archivo, ios::binary);
	bool continuar = true;
	while (continuar) {
		getline(handle0, line);
		if (line.find("Final_del_documento") == -1) {
			for (int i = 0; i < 6; i++) {
				m = line.find("");
				q = line.find(";");
				aux[i] = line.substr(m, q + 1);
				line = line.substr(q + 1, -1);
			}
		}
		else {
			continuar = false;
		}
		a = aux[0], b = aux[1], c = aux[2], d = aux[3], e = aux[4], x = aux[5], y = aux[6];
		struct eslabon_Escuelas* aux1 = new struct eslabon_Escuelas(a, b, c, d, e, x, y);
		h << aux1;
	}
}

void Lista_Escuelas::operator<<(struct eslabon_Escuelas* q)
{
	if (p_Listas == NULL)
	{
		q->pro_eslabon = q; p_Listas = u_Listas = q;
	}
	else
	{
		q->pro_eslabon = p_Listas;
		u_Listas->pro_eslabon = q;
		u_Listas = q;
	}
}
void Lista_Escuelas::Borrar_Escuelas(struct eslabon_Escuelas* aux1)
{
	if (aux1 == p_Listas && aux1 == u_Listas)
	{
		p_Listas = NULL; u_Listas = NULL;
	}
	else
	{
		if (aux1 == p_Listas)
			p_Listas = aux1->pro_eslabon;
	};
	delete aux1;
}

void Lista_Escuelas::Mostrar_Escuelas()
{
	struct eslabon_Escuelas* aux1;
	aux1 = p_Listas;
	while (aux1 != NULL)
	{
		cout << "Nombre de Institucion: " << aux1->NombreInstitucion << " Cantidad de Estudiantes: " << aux1->CantEstudiantes;
		cout << "Provincia: " << aux1->Provincia << " Canton: " << aux1->Canton << "Distrito:" << aux1->Distrito << " / X: " << aux1->x << " / Y: " << aux1->y << '\n';
		if (aux1 != u_Listas)
			aux1 = aux1->pro_eslabon;
		else
			aux1 = NULL;
	}
}

void Lista_Escuelas::Indices_Escuelas(string f) {
	int cont = 0;
	ifstream handle0;
	string line;
	handle0.open(f, ios::binary);
	bool continuar = true;
	while (continuar)
	{
		getline(handle0, line);
		if (line.find("Final_del_documento") == -1) {
			cont++;
		}
		else {
			continuar = false;
		}
	}
	string* Lista = new string[cont];
	for (int i = 0; i < cont; ++i) {

	}
	delete[] Lista;
}





///////



/////// METODOS DE COLEGIOS EMPIEZAN 



eslabon_Colegios::eslabon_Colegios(string a, string b, string c, string d, string e, string xs, string ys) {
	pro_eslabon = NULL; NombreInstitucion = a; CantEstudiantes = b; Provincia = c; Canton = d; Distrito = e; x = xs; y = ys;
}
eslabon_Colegios::~eslabon_Colegios() { pro_eslabon = NULL; }

Lista_Colegios::Lista_Colegios()
{
	p_Listas = NULL; u_Listas = NULL;
	n = 0;
};
Lista_Colegios::~Lista_Colegios()
{
	Vaciar_Colegios();
}
struct eslabon_Colegios* Lista_Colegios::Pri() { return p_Listas; }

int Lista_Colegios::getn_Colegios() {
	return n;
}

bool Lista_Colegios::Vacio_Colegios()
{
	return (p_Listas == NULL && u_Listas == NULL);
}

void Lista_Colegios::Vaciar_Colegios()
{
	struct eslabon_Colegios* aux1, * aux2;
	aux2 = NULL;
	aux1 = p_Listas;
	while (aux1 != NULL)
	{
		aux2 = aux1;
		if (aux1 != u_Listas) aux1 = aux1->pro_eslabon; else aux1 = NULL;
		delete aux2;
	};
	p_Listas = NULL; u_Listas = NULL;
}

void Lista_Colegios::Cargar_Colegios(Lista_Colegios& h) {
	string nombre_archivo = "colegios.txt";
	ifstream handle0;
	string line, aux[7];
	string a, b, c, d, e, x, y;
	int m, q;
	handle0.open(nombre_archivo, ios::binary);
	bool continuar = true;
	while (continuar) {
		getline(handle0, line);
		if (line.find("Final_del_documento") == -1) {
			for (int i = 0; i < 7; i++) {
				m = line.find("");
				q = line.find(";");
				aux[i] = line.substr(m, q + 1);
				line = line.substr(q + 1, -1);
			}
		}
		else {
			continuar = false;
		}
		a = aux[0], b = aux[1], c = aux[2], d = aux[3], e = aux[4], x = aux[5], y = aux[6];
		struct eslabon_Colegios* aux1 = new struct eslabon_Colegios(a, b, c, d, e, x, y);
		h << aux1;
	}
}

void Lista_Colegios::operator<<(struct eslabon_Colegios* q)
{
	if (p_Listas == NULL)
	{
		q->pro_eslabon = q; p_Listas = u_Listas = q;
	}
	else
	{
		q->pro_eslabon = p_Listas;
		u_Listas->pro_eslabon = q;
		u_Listas = q;
	}
}
void Lista_Colegios::Borrar_Colegios(struct eslabon_Colegios* aux1)
{
	if (aux1 == p_Listas && aux1 == u_Listas)
	{
		p_Listas = NULL; u_Listas = NULL;
	}
	else
	{
		if (aux1 == p_Listas)
			p_Listas = aux1->pro_eslabon;
	};
	delete aux1;
}

void Lista_Colegios::Mostrar_Colegios()
{
	struct eslabon_Colegios* aux1;
	aux1 = p_Listas;
	while (aux1 != NULL)
	{
		cout << "Nombre de Institucion: " << aux1->NombreInstitucion << " Cantidad de Estudiantes: " << aux1->CantEstudiantes;
		cout << "Provincia: " << aux1->Provincia << " Canton: " << aux1->Canton << "Distrito:" << aux1->Distrito << " / X: " << aux1->x << " / Y: " << aux1->y << '\n';
		if (aux1 != u_Listas)
			aux1 = aux1->pro_eslabon;
		else
			aux1 = NULL;
	}
}

void Lista_Colegios::Indices_Colegios(string f) {
	int cont = 0;
	ifstream handle0;
	string line;
	handle0.open(f, ios::binary);
	bool continuar = true;
	while (continuar)
	{
		getline(handle0, line);
		if (line.find("Final_del_documento") == -1) {
			cont++;
		}
		else {
			continuar = false;
		}
	}
	string* Lista = new string[cont];
	for (int i = 0; i < cont; ++i) {

	}
	delete[] Lista;
}