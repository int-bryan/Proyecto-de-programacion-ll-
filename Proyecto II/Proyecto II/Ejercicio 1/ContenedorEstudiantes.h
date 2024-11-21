#include "Estudiante.h" // Incluye la definición de la clase Estudiante
#include <locale>  //para que lea tildes y ñ
class ContenedorEstudiantes 
{
	private:
		// Vector para almacenar objetos de tipo Estudiante
		vector<Estudiante> estudiantes;

	public:

		// Método para agregar estudiantes al contenedor
		void AddEstudiantes() {
			// Variables para almacenar los datos del estudiante
			int id;
			string name;
			int bornYear;
			float averageMath, averageSpanish, averageScience, averageSocialStudies, admisionGrade;

			// Ciclo para capturar y validar la cédula del estudiante
			while (true) {
				cout << "Ingrese la cedula del estudiante: ";
				cin >> id;
				if (id <= 0 || cin.fail()) { // Verifica que la cédula sea válida
					cin.clear(); // Limpia el estado de error
					cout << "Cedula invalida\n";
				}
				else {
				
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc;
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break; // Sale del bucle si la respuesta es afirmativa
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return; // Termina el método si la respuesta es negativa
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}
			}

			// Ciclo para capturar y validar el nombre del estudiante
			while (true)
			{

				cout << "Ingrese el nombre del estudiante: ";
				cin.ignore(); getline(cin, name);
				if (name.empty()) { // Verifica que el nombre no esté vacío
					cin.clear();
					cout << "Nombre invalido\n";
				}
				else
				{
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc;
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break;  // Sale del bucle si la respuesta es afirmativa  
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return;  // Termina la función completamente si la respuesta es no
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}

			}
			while (true)
			{
				cout << "Ingrese el año de nacimiento del estudiante: ";
				cin >> bornYear;
				if (bornYear <= 0 || cin.fail()) // Verifica que el año de nacimiento sea válido
				{
					cin.clear(); 
					cout << "Año de nacimiento invalido\n";
				}
				else
				{
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc;
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break;  // Sale del bucle para continuar con la función  
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return;  // Termina la función completamente  
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}

			}
			while (true)
			{
				cout << "Ingrese el promedio de matematicas del estudiante: ";
				cin >> averageMath;
				if (averageMath < 0 || averageMath > 100 || cin.fail()) // Verifica que el promedio de matemáticas sea válido
				{
					cin.clear();
					cout << "Promedio de matematicas invalido\n";
				}
				else
				{
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc;
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break;  // Sale del bucle para continuar con la función  
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return;  // Termina la función completamente  
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}

			}
			while (true)
			{
				cout << "Ingrese el promedio de español del estudiante: ";
				cin >> averageSpanish;
				if (averageSpanish < 0 || averageSpanish > 100 || cin.fail())  // Verifica que el promedio de español sea válido
				{
					cin.clear();
					cout << "Promedio de español invalido\n";
				}
				else
				{
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc;
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break;  // Sale del bucle para continuar con la función  
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return;  // Termina la función completamente  
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}

			}
			while (true)
			{
				cout << "Ingrese el promedio de ciencias del estudiante: ";
				cin >> averageScience;
				if (averageScience < 0 || averageScience > 100 || cin.fail())  
				{
					cin.clear(); 
					cout << "Promedio de ciencias invalido\n";
				}
				else
				{
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc; 
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break;  // Sale del bucle para continuar con la función  
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return;  // Termina la función completamente  
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}

			}
			while (true)
			{
				cout << "Ingrese el promedio de estudios sociales del estudiante: ";
				cin >> averageSocialStudies;
				if (averageSocialStudies < 0 || averageSocialStudies > 100 || cin.fail())
				{
					cin.clear();
					cout << "Promedio de estudios sociales invalido\n";
				}
				else
				{
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc;
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break;  // Sale del bucle para continuar con la función  
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return;  // Termina la función completamente  
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}
			}
			while (true)
			{
				cout << "Ingrese la nota de admision del estudiante: ";
				cin >> admisionGrade;
				if (admisionGrade < 0 || cin.fail())
				{
					cin.clear();
					cout << "Nota de admision invalida\n";
				}
				else
				{
					cout << "Desea continuar? (s/n): ";
					char opc;
					cin >> opc;
					if (opc == 's' || opc == 'S') {
						cout << "Continuando..." << endl;
						break;  // Sale del bucle para continuar con la función  
					}
					else if (opc == 'n' || opc == 'N') {
						cout << "Saliendo de la funcion." << endl;
						return;  // Termina la función completamente  
					}
					else {
						cout << "Respuesta no válida. Por favor ingrese 's' o 'n'." << endl;
					}
				}
			}
			// Crea un objeto de tipo Estudiante con los datos capturados
			Estudiante estudiante(id, name, bornYear, averageMath, averageSpanish, averageScience, averageSocialStudies, admisionGrade); 
			estudiantes.push_back(estudiante);   // Agrega el objeto al vector de estudiantes
			cout << "Estudiante registrado correctamente!\n";
			system("pause");
			system("cls");

			// Muestra los datos del estudiante registrado
			cout << "Datos del estudiante: " << endl; 
			cout << "============================================\n";
			cout << "Cedula del estudiante: " << estudiante.getId() << endl; 
			cout << "Nombre del estudiante: " << estudiante.getName() << endl; 
			cout << "Año de nacimiento: " << estudiante.getBornYear() << endl; 
			cout << "Edad del estudiante: " << estudiante.setAge() << endl; 
			cout << "Promedio de matematicas: " << estudiante.getAverageMath() << endl; 
			cout << "Promedio de español: " << estudiante.getAverageSpanish() << endl; 
			cout << "Promedio de ciencias: " << estudiante.getAverageScience() << endl; 
			cout << "Promedio de estudios sociales: " << estudiante.getAverageSocialStudies() << endl; 
			cout << "Promedio del Colegio: " << estudiante.setAverageHS() << endl; 
			cout << "Porcentaje del Criterio del Colegio: " << estudiante.setPercentageHS() << "%" << endl; 
			cout << "Porcentaje del examen de admision: " << estudiante.setPercentageAdmision() << "%" << endl; 
			cout << "Promedio de Admision: " << estudiante.setAverageAdmision() << endl;
			cout << "Calificacion: " << estudiante.setQualification() << endl;
			cout << "============================================\n";
		}
		// Método para mostrar las estadísticas de calificación de los estudiantes
		void EstadisticasCalificacion()
		{
			if (estudiantes.empty()) //verifica que el vector de estudiantes no esté vacío
			{
				cout << "No hay estudiantes registrados!!\n";
			}
			else
			{

				float cantidadAdmitidos = 0.0, cantidadEnEspera = 0.0, cantidadNoAdmitidos = 0.0;


				for (int i = 0; i < estudiantes.size(); i++)   // Recorre el vector de estudiantes y cuenta según la calificación
				{
					if (estudiantes[i].setQualification() == "Admitido") // Verifica si el estudiante está admitido y lo cuenta
					{
						cantidadAdmitidos++;

					}
					else if (estudiantes[i].setQualification() == "En espera") // Verifica si el estudiante está en espera y lo cuenta
					{
						cantidadEnEspera++;

					}
					else  // Si no está admitido ni en espera, se cuenta como no admitido
					{
						cantidadNoAdmitidos++;
					}
				}
				//se hace los calculos
				int tam = estudiantes.size(); 
				float promedioAdmitidos = (cantidadAdmitidos / tam) * 100; 
				float promedioEnEspera = (cantidadEnEspera / tam) * 100; 
				float promedioNoAdmitidos = (cantidadNoAdmitidos / tam) * 100; 

				// Muestra las estadísticas de calificación
				cout << "Estadisticas de calificacion: " << endl;
				cout << "============================================\n";
				cout << "Cantidad de estudiantes admitidos: " << cantidadAdmitidos << endl;
				cout << "Promedio de estudiantes admitidos: " << promedioAdmitidos << "%" << endl;
				cout << "Cantidad de estudiantes en espera: " << cantidadEnEspera << endl;
				cout << "Promedio de estudiantes en espera: " << promedioEnEspera << "%" << endl;
				cout << "Cantidad de estudiantes no admitidos: " << cantidadNoAdmitidos << endl;
				cout << "Promedio de estudiantes no admitidos: " << promedioNoAdmitidos << "%" << endl;
				cout << "============================================\n";
			}


		}
		// Método para mostrar un gráfico de estudiantes según su estado
		void grafico()
		{
			if (estudiantes.empty()) //verifica que el vector de estudiantes no esté vacío
			{
				cout << "No hay estudiantes registrados!!\n";
			}
			else
			{
				// Muestra un gráfico de estudiantes según su estado
				cout << "Grafico de estudiantes segun estado\n";
				cout << "============================================\n";
				cout << "Admitidos    ";
				for (int i = 0; i < estudiantes.size(); i++) 
				{
					if (estudiantes[i].setQualification() == "Admitido") //verifica que se nuestre solo para admitidos
					{
						cout << "||";
					}

				}
				cout << endl;
				cout << "En espera    ";
				for (int i = 0; i < estudiantes.size(); i++)
				{
					if (estudiantes[i].setQualification() == "En espera") //verifica que se nuestre solo para en espera
					{
						cout << "||";
					}

				}
				cout << endl;
				cout << "No admitidos ";
				for (int i = 0; i < estudiantes.size(); i++)
				{
					if (estudiantes[i].setQualification() == "No admitido")  //verifica que se nuestre solo para no admitidos
					{
						cout << "||";
					}

				}
				cout << endl;

			}
		}
		// Método para mostrar el menú de opciones
		void menu()
		{
			setlocale(LC_ALL, "spanish");
			int opc;
			do
			{
				system("cls"); // Limpia la pantalla
				cout << "Menu de opciones\n";
				cout << "================================\n";
				cout << "1. Registrar estudiante\n";
				cout << "2. Estadisticas de calificacion\n";
				cout << "3. Grafico de estudiantes\n";
				cout << "4. Salir\n";
				cout << "================================\n";
				cout << "Ingrese una opcion: ";
				cin >> opc;
				cin.ignore(); // Limpia el buffer del teclado
				switch (opc)
				{
					case 1:
					{
						AddEstudiantes(); // Llama al método para agregar estudiantes
						system("pause"); // Pausa la ejecución del programa
						break;
					}
					case 2:
					{
						EstadisticasCalificacion(); // Llama al método para mostrar estadísticas de calificación
						system("pause"); // Pausa la ejecución del programa
						break;
					}
					case 3:
					{
						grafico(); // Llama al método para mostrar un gráfico de estudiantes
						system("pause"); // Pausa la ejecución del programa
						break;
					}
					case 4:
					{ // Mensaje de salida
						cout << "Saliendo del programa...\n";
						system("pause");
						break;
					}
					default:
					{ // Mensaje de error si el usuario ingresa una opción inválida
						cout << "Ingrese una opcion valida!!\n";
						system("pause");
						break;
					}
				}
			} while (opc != 4); // Repite el menú hasta que el usuario seleccione la opción de salir
		}

};
