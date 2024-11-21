#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definición de la estructura Vehiculo
struct Vehiculo {
    int factura;
    string placa;
    string marca;
    string modelo;
    int tipoVehiculo; // 1=Sencillo, 2=4x4, 3=Microbús o Camión
    int tipoLavado;   // 1=Solo Lavado, 2=Lavado, Aspirado y Encerado
    int precio;
};

// Vector global de vehículos
vector<Vehiculo> vehiculos;
int factura_id = 1;

// Función para calcular el precio del lavado según tipo de vehículo y lavado
int calcularPrecio(int tipoVehiculo, int tipoLavado) {
    if (tipoVehiculo == 1 && tipoLavado == 1) return 3000; // Sencillo, Solo Lavado
    if (tipoVehiculo == 1 && tipoLavado == 2) return 5000; // Sencillo, Lavado Completo
    if (tipoVehiculo == 2 && tipoLavado == 1) return 5000; // 4x4, Solo Lavado
    if (tipoVehiculo == 2 && tipoLavado == 2) return 7000; // 4x4, Lavado Completo
    if (tipoVehiculo == 3 && tipoLavado == 1) return 7000; // Microbús o Camión, Solo Lavado
    if (tipoVehiculo == 3 && tipoLavado == 2) return 12000; // Microbús o Camión, Lavado Completo
    return 0;
}

// Procedimiento para ingresar datos de vehículos
void ingresarDatos() {
    char continuar;
    do {
        Vehiculo vehiculo;
        vehiculo.factura = factura_id++;

        cout << "Ingrese el numero de placa: ";
        cin >> vehiculo.placa;
        cout << "Ingrese la marca: ";
        cin >> vehiculo.marca;
        cout << "Ingrese el modelo: ";
        cin >> vehiculo.modelo;

        do {
            cout << "Tipo de Vehiculo (1=Sencillo, 2=4x4, 3=Microbus o Camion): ";
            cin >> vehiculo.tipoVehiculo;
        } while (vehiculo.tipoVehiculo < 1 || vehiculo.tipoVehiculo > 3);

        do {
            cout << "Tipo de Lavado (1=Solo Lavado, 2=Lavado, Aspirado y Encerado): ";
            cin >> vehiculo.tipoLavado;
        } while (vehiculo.tipoLavado < 1 || vehiculo.tipoLavado > 2);

        vehiculo.precio = calcularPrecio(vehiculo.tipoVehiculo, vehiculo.tipoLavado);
        vehiculos.push_back(vehiculo);

        cout << "\nFactura #" << vehiculo.factura << ": Placa " << vehiculo.placa
             << ", Marca " << vehiculo.marca << ", Modelo " << vehiculo.modelo
             << ", Precio " << vehiculo.precio << " colones.\n";

        cout << "\n¿Desea registrar otro vehiculo? (S/N): ";
        cin >> continuar;
    } while (toupper(continuar) == 'S');
}

// Procedimiento para mostrar estadísticas por tipo de vehículo
void estadisticasPorTipoVehiculo() {
    int sencillo = 0, veh4x4 = 0, pesados = 0;
    int dineroSencillo = 0, dinero4x4 = 0, dineroPesados = 0;

    for (size_t i = 0; i < vehiculos.size(); i++) {
        if (vehiculos[i].tipoVehiculo == 1) { // Sencillo
            sencillo++;
            dineroSencillo += vehiculos[i].precio;
        } else if (vehiculos[i].tipoVehiculo == 2) { // 4x4
            veh4x4++;
            dinero4x4 += vehiculos[i].precio;
        } else if (vehiculos[i].tipoVehiculo == 3) { // Microbús o Camión
            pesados++;
            dineroPesados += vehiculos[i].precio;
        }
    }

    cout << "\nCantidad de Vehículos Sencillos: " << sencillo 
         << ", Dinero Recaudado: " << dineroSencillo << " colones.\n";
    cout << "Cantidad de Vehiculos 4x4: " << veh4x4 
         << ", Dinero Recaudado: " << dinero4x4 << " colones.\n";
    cout << "Cantidad de Vehículos Microbús o Camión: " << pesados 
         << ", Dinero Recaudado: " << dineroPesados << " colones.\n";
}

// Procedimiento para mostrar estadísticas por tipo de lavado
void estadisticasPorTipoLavado() {
    int soloLavado = 0, completo = 0;
    int dineroSoloLavado = 0, dineroCompleto = 0;

    for (size_t i = 0; i < vehiculos.size(); i++) {
        if (vehiculos[i].tipoLavado == 1) { // Solo Lavado
            soloLavado++;
            dineroSoloLavado += vehiculos[i].precio;
        } else if (vehiculos[i].tipoLavado == 2) { // Lavado Completo
            completo++;
            dineroCompleto += vehiculos[i].precio;
        }
    }

    cout << "\nCantidad de Vehículos con Solo Lavado: " << soloLavado 
         << ", Dinero Recaudado: " << dineroSoloLavado << " colones.\n";
    cout << "Cantidad de Vehículos con Lavado Completo: " << completo 
         << ", Dinero Recaudado: " << dineroCompleto << " colones.\n";
}

// Menú principal del programa
void menuPrincipal() {
    int opcion;
    do {
        cout << "\nMenu Principal\n";
        cout << "1- Ingresar Datos Vehiculos\n";
        cout << "2- Ver Estadisticas Vehiculos Lavados segun tipo de Vehiculo\n";
        cout << "3- Ver Estadisticas Vehiculos Lavados segun tipo de Lavado\n";
        cout << "4- Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarDatos();
                break;
            case 2:
                estadisticasPorTipoVehiculo();
                break;
            case 3:
                estadisticasPorTipoLavado();
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida, intente de nuevo.\n";
        }
    } while (opcion != 4);
}

// Función principal
int main() {
    menuPrincipal();
    return 0;
}

