#pragma once
#include "Vehiculo.h"
#include <locale>

class Lavacar {

private:
	vector<Vehiculo> vehiculos; // Almacena la lista de vehiculos registrados.
	int totalVehiculos;         // Contador total de vehiculos registrados.

public:

	// M�todo para agregar un veh�culo al sistema.
	void AgregarVehiculo()
	{
		int placa;          
		string marca;          
		string modelo;         
		int tipoVehiculo;      // Tipo del veh�culo (1: sencillo, 2: 4x4, 3: microb�s/cami�n).
		int tipoLavdo;         // Tipo de lavado (1: solo lavado, 2: lavado completo).

		// Captura y validacion del numero de placa.
		while (true) {
			cout << "Ingrese el numero de placa del vehiculo: ";
			cin >> placa;

			// Validar que el numero de placa sea positivo y v�lido.
			if (placa <= 0 || cin.fail()) {
				cin.clear(); // Limpia errores de entrada.
				cin.ignore(INT_MAX, '\n'); // Descarta la entrada inv�lida.
				cout << "Placa invalida\n";
			}
			else {
				cout << "Desea continuar? (s/n): ";
				char opc;
				cin >> opc;

				// Opci�n para continuar o cancelar el proceso.
				if (opc == 's' || opc == 'S') {
					cout << "Continuando..." << endl;
					break; // Salir del bucle.
				}
				else if (opc == 'n' || opc == 'N') {
					cout << "Saliendo de la funcion." << endl;
					return; // Finalizar el metodo.
				}
				else {
					cout << "Respuesta no valida. Por favor ingrese 's' o 'n'." << endl;
				}
			}
		}

		// Captura y validaci�n de la marca del vehiculo.
		while (true) {
			cout << "Ingrese la marca del vehiculo: ";
			cin.ignore(); // Limpia el buffer de entrada.
			getline(cin, marca);

			// Validar que la marca no sea vacia.
			if (marca.empty() || cin.fail()) {
				cin.clear(); // Limpia errores de entrada.
				cout << "Marca invalida\n";
			}
			else {
				cout << "Desea continuar? (s/n): ";
				char opc;
				cin >> opc;

				if (opc == 's' || opc == 'S') {
					cout << "Continuando..." << endl;
					break; // Salir del bucle.
				}
				else if (opc == 'n' || opc == 'N') {
					cout << "Saliendo de la funcion." << endl;
					return; // Finalizar el metodo.
				}
				else {
					cout << "Respuesta no valida. Por favor ingrese 's' o 'n'." << endl;
				}
			}
		}

		// Captura y validacion del modelo del vehiculo.
		while (true) {
			cout << "Ingrese el modelo del vehiculo: ";
			cin.ignore();
			getline(cin, modelo);

			// Validar que el modelo no sea vacao.
			if (modelo.empty() || cin.fail()) {
				cin.clear();
				cout << "Modelo invalido\n";
			}
			else {
				cout << "Desea continuar? (s/n): ";
				char opc;
				cin >> opc;

				if (opc == 's' || opc == 'S') {
					cout << "Continuando..." << endl;
					break;
				}
				else if (opc == 'n' || opc == 'N') {
					cout << "Saliendo de la funcion." << endl;
					return;
				}
				else {
					cout << "Respuesta no valida. Por favor ingrese 's' o 'n'." << endl;
				}
			}
		}

		// Captura y validaci�n del tipo de vehiculo.
		while (true) {
			cout << "Ingrese el tipo de vehiculo " << endl;
			cout << "1. Sencillo" << endl;
			cout << "2. 4x4" << endl;
			cout << "3. Microbus o Camion" << endl;
			cout << "Seleccione: ";
			cin >> tipoVehiculo;

			// Validar que el tipo esta entre las opciones validas.
			if (tipoVehiculo < 1 || tipoVehiculo > 3 || cin.fail()) {
				cin.clear();
				cout << "Tipo de vehiculo invalido\n";
			}
			else {
				cout << "Desea continuar? (s/n): ";
				char opc;
				cin >> opc;

				if (opc == 's' || opc == 'S') {
					cout << "Continuando..." << endl;
					break;
				}
				else if (opc == 'n' || opc == 'N') {
					cout << "Saliendo de la funcion." << endl;
					return;
				}
				else {
					cout << "Respuesta no valida. Por favor ingrese 's' o 'n'." << endl;
				}
			}
		}

		// Captura y validacion del tipo de lavado.
		while (true) {
			cout << "Ingrese el tipo de lavado " << endl;
			cout << "1. Solo Lavado" << endl;
			cout << "2. Lavado, Aspirado y Encerado" << endl;
			cout << "Seleccione: ";
			cin >> tipoLavdo;

			// Validar que el tipo esta entre las opciones validas.
			if (tipoLavdo < 1 || tipoLavdo > 2 || cin.fail()) {
				cin.clear();
				cout << "Tipo de lavado invalido\n";
			}
			else {
				cout << "Desea continuar? (s/n): ";
				char opc;
				cin >> opc;

				if (opc == 's' || opc == 'S') {
					cout << "Continuando..." << endl;
					break;
				}
				else if (opc == 'n' || opc == 'N') {
					cout << "Saliendo de la funcion." << endl;
					return;
				}
				else {
					cout << "Respuesta no valida. Por favor ingrese 's' o 'n'." << endl;
				}
			}
		}

		// Crear el objeto Vehiculo y agregarlo a la lista.
		Vehiculo vehiculo(placa, marca, modelo, tipoVehiculo, tipoLavdo);
		vehiculos.push_back(vehiculo);
		totalVehiculos++; // Incrementar el contador de vehiculos.

	
		cout << "Vehiculo agregado correctamente" << endl;
		system("pause");
		// Mostrar los datos del vehiculo registrado y su factura.
		system("cls");
		cout << "Datos de la Factura: " << endl;
		cout << "--------------------------------" << endl;
		cout << "Numero de factura: " << totalVehiculos << endl;
		cout << "Placa: " << vehiculo.getPlaca() << endl;
		cout << "Marca: " << vehiculo.getMarca() << endl;
		cout << "Modelo: " << vehiculo.getModelo() << endl;
		cout << "Tipo de vehiculo: " << vehiculo.getTipoVehiculo() << endl;
		cout << "Tipo de lavado: " << vehiculo.getTipoLavado() << endl;
		cout << "Precio a pagar: " << vehiculo.PrecioAPagar(vehiculo.getTipoVehiculo(), vehiculo.getTipoLavado()) << endl;
		cout << "--------------------------------" << endl;
	}


	// M�todo para mostrar las estadisticas por tipo de vehiculo.
	void EstadisticasTipodVehiculo()
	{
		if (vehiculos.empty())
		{
			cout << "No hay vehiculos registrados" << endl;
		}
		else
		{
			int cantidadSencillos = 0;
			int cantidad4x4 = 0;
			int cantidadMicrobus_Camion = 0;
			int dineroSencillos = 0;
			int dinero4x4 = 0;
			int dineroMicrobus_Camion = 0;

			// Recorrer la lista de vehiculos y contar la cantidad y dinero recaudado por tipo.
			for (int i = 0; i < vehiculos.size(); i++)
			{
				if (vehiculos[i].getTipoVehiculo() == 1)  // 1: sencillo, 2: 4x4, 3: microbus/camion
				{
					cantidadSencillos++;
					dineroSencillos += vehiculos[i].PrecioAPagar(vehiculos[i].getTipoVehiculo(), vehiculos[i].getTipoLavado());
				}
				else if (vehiculos[i].getTipoVehiculo() == 2)
				{
					cantidad4x4++;
					dinero4x4 += vehiculos[i].PrecioAPagar(vehiculos[i].getTipoVehiculo(), vehiculos[i].getTipoLavado());
				}
				else if (vehiculos[i].getTipoVehiculo() == 3)
				{
					cantidadMicrobus_Camion++;
					dineroMicrobus_Camion += vehiculos[i].PrecioAPagar(vehiculos[i].getTipoVehiculo(), vehiculos[i].getTipoLavado());
				}
			}

			cout << "Cantidad de Vehiculos Tipo Sencillos: " << cantidadSencillos << endl;
			cout << "Dinero Recaudado por Vehiculos Tipo Sencillos: " << dineroSencillos << endl;
			cout << "Cantidad de Vehiculos Tipo 4x4: " << cantidad4x4 << endl;
			cout << "Dinero Recaudado por Vehiculos Tipo 4x4: " << dinero4x4 << endl;
			cout << "Cantidad de Vehiculos Tipo Microbus o Camion: " << cantidadMicrobus_Camion << endl;
			cout << "Dinero Recaudado por Vehiculos Tipo Microbus o Camion: " << dineroMicrobus_Camion << endl;


		}

	}

	// M�todo para mostrar las estad�sticas por tipo de lavado.
	void EstadisticasTipodLavado()
	{
		if (vehiculos.empty())
		{
			cout << "No hay vehiculos registrados" << endl;
		}
		else
		{
			int VehiculosSoloLavado = 0; 
			int VehiculosLavadoA_E = 0;
			int dineroSoloLavado = 0; 
			int dineroLavadoA_E = 0;
			int promedioSoloLavado = 0;
			int promedioLavadoA_E = 0;

			// Recorrer la lista de vehiculos y contar la cantidad y dinero recaudado por tipo de lavado.
			for (int i = 0; i < vehiculos.size(); i++)
			{
				if (vehiculos[i].getTipoLavado() == 1)  // 1: solo lavado, 2: lavado completo
				{
					VehiculosSoloLavado++;
					dineroSoloLavado += vehiculos[i].PrecioAPagar(vehiculos[i].getTipoVehiculo(), vehiculos[i].getTipoLavado());
				}
				else if (vehiculos[i].getTipoLavado() == 2)
				{
					 VehiculosLavadoA_E++;
					dineroLavadoA_E += vehiculos[i].PrecioAPagar(vehiculos[i].getTipoVehiculo(), vehiculos[i].getTipoLavado());
				}

			}
			promedioSoloLavado = dineroSoloLavado / VehiculosSoloLavado; 
			promedioLavadoA_E = dineroLavadoA_E / VehiculosLavadoA_E;

			cout << "Cantidad de Vehiculos con solo Lavado: " << VehiculosSoloLavado << endl; 
			cout << "Dinero Recaudado por Vehiculos con solo Lavado: " << dineroSoloLavado << endl; 
			cout << "Promedio Dinero Recaudado por Vehiculos con solo Lavado: " << promedioSoloLavado << endl;
			cout << "Cantidad de Vehiculos con Lavado, Aspirado y Encerado: " << VehiculosLavadoA_E << endl;
			cout << "Dinero Recaudado por Vehiculos con Lavado, Aspirado y Encerado: " << dineroLavadoA_E << endl;
			cout << "Promedio Dinero Recaudado por Vehiculos con Lavado, Aspirado y Encerado: " << promedioLavadoA_E << endl;
		

		}
	}

	// Metodo para mostrar un grafico de barras por tipo de veh�culo.
	void graficoTipodVehiculo()
	{
		if (vehiculos.empty())
		{
			cout << "No hay vehiculos registrados" << endl;
		}
		else
		{
			int cantidadSencillos = 0;
			int cantidad4x4 = 0;
			int cantidadMicrobus_Camion = 0;

			// Recorrer la lista de vehiculos y contar la cantidad por tipo de vehiculo.
			for (int i = 0; i < vehiculos.size(); i++)
			{
				if (vehiculos[i].getTipoVehiculo() == 1)  // 1: sencillo, 2: 4x4, 3: microb�s/cami�n
				{
					cantidadSencillos++;
				}
				else if (vehiculos[i].getTipoVehiculo() == 2)
				{
					cantidad4x4++;
				}
				else if (vehiculos[i].getTipoVehiculo() == 3)
				{
					cantidadMicrobus_Camion++;
				}
			}

			// Mostrar el gr�fico de barras por tipo de vehiculo.
			cout << "*******Grafico Ventas Entradas por Sala*******" << endl;
			cout << "Veh. Sencillos  ";
			for (int i = 0; i < cantidadSencillos; i++)
			{
				cout << "||";
			}
			cout << endl;

			cout << "Veh. 4x4  ";
			for (int i = 0; i < cantidad4x4; i++)
			{
				cout << "||";
			}
			cout << endl;

			cout << "Veh. Pesados  ";
			for (int i = 0; i < cantidadMicrobus_Camion; i++)
			{
				cout << "||";
			}
			cout << endl;
		}

	}

	// M�todo para mostrar un grafico de barras por tipo de lavado.
	void graficoTipodLavado()
	{
		if (vehiculos.empty())
		{
			cout << "No hay vehiculos registrados" << endl;
		}
		else
		{
			int VehiculosSoloLavado = 0;
			int VehiculosLavadoA_E = 0;

			// Recorrer la lista de veh�culos y contar la cantidad por tipo de lavado.
			for (int i = 0; i < vehiculos.size(); i++)
			{
				if (vehiculos[i].getTipoLavado() == 1)
				{
					VehiculosSoloLavado++;
				}
				else if (vehiculos[i].getTipoLavado() == 2)
				{
					VehiculosLavadoA_E++;
				}

			}

			// Mostrar el gr�fico de barras por tipo de lavado.
			cout << "*******Grafico Ventas Entradas por Sala*******" << endl;
			cout << "Veh. Solo Lavado  ";
			for (int i = 0; i < VehiculosSoloLavado; i++)
			{
				cout << "||";
			}
			cout << endl;

			cout << "Veh. Lavado, Aspirado y Encerado  ";
			for (int i = 0; i < VehiculosLavadoA_E; i++)
			{
				cout << "||";
			}
			cout << endl;
		}

	}
	void menu()
	{
		setlocale(LC_ALL, "spanish");  // Configurar el idioma de la consola a español.

		int opc;
		do
		{
			system("cls");
			cout << "________MENU PRINCIPAL_________\n";
			cout << "-------------------------------\n";
			cout << "1. Agregar Vehiculo\n";
			cout << "2. Estadisticas por Tipo de Vehiculo\n";
			cout << "3. Estadisticas por Tipo de Lavado\n";
			cout << "4. Grafico por Tipo de Vehiculo\n";
			cout << "5. Grafico por Tipo de Lavado\n";
			cout << "6. Salir\n";
			cout << "--------------------------------\n";
			cout << "Ingrese una opcion: ";
			cin >> opc;

			switch (opc)
			{
				case 1:
				{
					AgregarVehiculo();
					system("pause");
					break;
				}
				case 2:
				{
					EstadisticasTipodVehiculo();
					system("pause");
					break;
				}
				case 3:
				{
					EstadisticasTipodLavado();
					system("pause"); 
					break;
				}
				case 4:
				{
					graficoTipodVehiculo();
					system("pause"); 
					break;
				}
				case 5:
				{
					graficoTipodLavado();
					system("pause"); 
					break;
				}
				case 6:
				{
					cout << "Saliendo del sistema..." << endl;
					system("pause");
					break;
				}
				default:
				{
					cout << "Opcion no valida" << endl;
					system("pause");
					break;
				}
			}

		} while (opc!=6);
	}
};
