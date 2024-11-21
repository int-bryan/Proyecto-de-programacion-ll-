#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Vehiculo {

	private:
		int placa;
		string marca;
		string modelo;
		int tipoVehiculo;
		int tipoLavdo;

	public:
		Vehiculo(int _placa, string _marca, string _modelo, int _tipoVehiculo, int _tipoLavado)
		{
			placa = _placa;
			marca = _marca;
			modelo = _modelo;
			tipoVehiculo = _tipoVehiculo; 
			tipoLavdo = _tipoLavado;
		}
		int getPlaca()
		{
			return this->placa;
		}
		string getMarca()
		{
			return this->marca;
		}
		string getModelo()
		{
			return this->modelo;
		}
		int getTipoVehiculo()
		{
			return this->tipoVehiculo;
		}
		int getTipoLavado()
		{
			return this->tipoLavdo;
		}
		int PrecioAPagar(int _tipoVehiculo, int _tipoLavado)
		{
			int precioPagar = 0;
			if (_tipoVehiculo == 1 && _tipoLavado == 1)
			{
				precioPagar = 3000;
			}
			else if ((_tipoVehiculo == 1 && _tipoLavado == 2) || (_tipoVehiculo == 2 && _tipoLavado == 1))
			{
				precioPagar = 5000;
			}
			else if (_tipoVehiculo == 2 && _tipoLavado == 2)
			{
				precioPagar = 7000;
			}
			else if ((_tipoVehiculo == 3 && _tipoLavado == 1) || (_tipoVehiculo == 3 && _tipoLavado == 2))
			{
				precioPagar = 12000;
			}
			return precioPagar;
		}
};
