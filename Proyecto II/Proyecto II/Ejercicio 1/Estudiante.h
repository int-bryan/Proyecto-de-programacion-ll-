#include <iostream> // Incluye la librería iostream para poder utilizar cout y cin
#include <string> // Incluye la librería string para poder utilizar el tipo de dato string
#include <vector> // Incluye la librería vector para poder utilizar el tipo de dato vector

using namespace std;

class Estudiante
{

	private:
		int id;
		string name;
		int bornYear;
		float averageMath;
		float averageSpanish;
		float averageScience;
		float averageSocialStudies;
		float admisionGrade;

	public:
		// Constructor de la clase Estudiante
		Estudiante(int _id, string _name, int _bornYear, float _AverageMath, float _averageSpanish, float _averageScience, float _averageSocialStudies, float _admisionGrade)
		{
			this->id = _id;
			this->name = _name;
			this->bornYear = _bornYear;
			this->averageMath = _AverageMath;
			this->averageSpanish = _averageSpanish;
			this->averageScience = _averageScience;
			this->averageSocialStudies = _averageSocialStudies;
			this->admisionGrade = _admisionGrade;

		}

        // Métodos "getters" para acceder a los datos del estudiante
        int getId() { return this->id; } // Devuelve el ID del estudiante
        string getName() { return this->name; } // Devuelve el nombre del estudiante
        int getBornYear() { return this->bornYear; } // Devuelve el año de nacimiento del estudiante
        float getAverageMath() { return this->averageMath; } // Devuelve el promedio en matemáticas
        float getAverageSpanish() { return this->averageSpanish; } // Devuelve el promedio en español
        float getAverageScience() { return this->averageScience; } // Devuelve el promedio en ciencias
        float getAverageSocialStudies() { return this->averageSocialStudies; } // Devuelve el promedio en estudios sociales
        float getAdmisionGrade() { return this->admisionGrade; } // Devuelve la nota del examen de admisión

        // Método para calcular y devolver la edad del estudiante
        int setAge() {
            int age = 2024 - this->bornYear; // Calcula la edad basándose en el año actual (2024)
            return age;
        }

        // Método para calcular y devolver el promedio general del colegio
        float setAverageHS() {
            float average = (this->averageMath + this->averageSpanish + this->averageScience + this->averageSocialStudies) / 4;
            return average; // Promedio de las cuatro materias
        }

        // Método para calcular el porcentaje correspondiente al promedio del colegio (40%)
        double setPercentageHS() {
            float percentage = this->setAverageHS() * 0.4; // Calcula el 40% del promedio del colegio
            return percentage;
        }

        // Método para calcular el porcentaje correspondiente al examen de admisión (60%)
        double setPercentageAdmision() {
            float percentage = (this->admisionGrade * 0.6); // Calcula el 60% de la nota de admisión
            return percentage;
        }

        // Método para calcular y devolver la nota final de admisión
        float setAverageAdmision() {
            float finalGrade = this->setPercentageHS() + this->setPercentageAdmision(); // Suma de los porcentajes
            return finalGrade;
        }

        // Método para determinar y devolver el estado de admisión del estudiante
        string setQualification() {
            string qualification = "";

            // Determina la calificación en base a la nota final de admisión
            if (this->setAverageAdmision() >= 85) {
                qualification = "Admitido";
            }
            else if (this->setAverageAdmision() >= 75) {
                qualification = "En espera";
            }
            else {
                qualification = "No admitido";
            }
            return qualification;
        }
};
