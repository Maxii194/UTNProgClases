#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

struct S_Empleado
{
  int id;
  char nombre[128];
  int horasTrabajadas;
  int sueldo;
};
typedef struct S_Empleado Empleado;

void em_calcularSueldo(void* p);

Empleado* empleados_new();
void empleados_delete();
Empleado* empleados_newParametros(char* idStr, char* nombreStr, char* horasTrabajadasStr);
int empleados_setId(Empleado* this,int id);
int empleados_getId(Empleado* this,int* id);

int empleados_setNombre(Empleado* this,char* nombre);
int empleados_getNombre(Empleado* this,char* nombre);

int empleados_setHorasTrabajadas(Empleado* this,int horasTrabajadas);
int empleados_getHorasTrabajadas(Empleado* this,int* horasTrabajadas);

int empleados_setSueldo(Empleado* this,int sueldo);
int empleados_getSueldo(Empleado* this,int* sueldo);

/*int arrayAlumno_dumpInFile(Alumno* arrayPunterosAlumnos[], int* qtyOcupada, int qtyTotal, char* path);
int arrayAlumno_loadFromFile(Alumno* arrayPunterosAlumnos[], int* qtyOcupada, int qtyTotal, char* path);
void arrayAlumno_add(Alumno* array[],int cantidadMaxima,int* cantidadActual,char* dni, char* nombre, char* apellido, char* cuit,float altura,int id);
Alumno* arrayAlumno_getById (Alumno* array[],int cantidad,int id);*/


#endif // EMPLEADO_H_INCLUDED


