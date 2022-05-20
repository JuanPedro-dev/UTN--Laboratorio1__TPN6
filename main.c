#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nombre[30];
    char genero; //m, f, o
} stAlumno;

void cargarListaAlumnos(stAlumno listaAlumnos[], int * validos, const int dim);
void mostrarAlumno(const stAlumno listaAlumno[], const int index);
void mostarListaCompleta(const stAlumno listaAlumno[], const int validos);
void buscarAlumno_matricula(const stAlumno listaAlumnos[], const int validos, const int matricula);
void mostrarAlumno_Genero(const stAlumno listaAlumnos[], const int validos, const char genero);
void agregarAlumno_listaOrdenadaPorMatricula(stAlumno listaAlumnos[], int *validos, const int dim, const stAlumno alumnoNuevo);
int cantidad_Genero(const stAlumno listaAlumnos[], const validos, const char genero);
void menu();

/** 4. Hacer una función que ordene el arreglo de alumnos por medio del método de selección.
    El criterio de ordenación es el número de matrícula. */
void ordenarPorMatricula_seleccion(stAlumno listaAlumnos[], const int validos)
{

}

int main()
{
    setlocale(LC_ALL,"");
    stAlumno listaAlumnos[30];
    int dim_listaAlumnos = 30;
    int validos_listaAlumnos = 0;


    char option;
    int selectEjercicio;
//
//    printf("POnete una letra: ");
//    scanf("%c", &option);
//
//    printf("option: %i", option);

    do
    {

        // Valido que el usuario seleccione valores entre a y h  o entre A y H
        do
        {
            system("color 3f");
            system("cls");
            menu();
            fflush(stdin);

            scanf("%c", &option);
        }while((option<'a' || option>'h') && (option<'A' || option>'H'));

        // Selecciono el ejercicio.
        switch(option)
        {
        case 'a':
                system("cls");
                printf("                                    Ejercicio 1 (A)\n\n");
                printf("Cargar un arreglo de alumnos, hasta que el usuario lo decida. \n\n");
                cargarListaAlumnos(listaAlumnos, &validos_listaAlumnos,dim_listaAlumnos);

                printf(">> Felicidades el arreglo ha sido cargado. \n\n");
                printf("¿Desea verlo? presione volver al menú (v o V) y seleccione la option B. \n");
                printf("¿Desea terminar el programa? s o S.  Tu respuesta: ");
                fflush(stdin);
                scanf("%c", &option);

            break;
        }




    } while(option!='s' && option!='S');

    //////////////////////////////////////// Ejercicio 1 ///////////////////////////////////

//    cargarListaAlumnos(listaAlumnos, &validos_listaAlumnos,dim_listaAlumnos);

    //////////////////////////////////////// Ejercicio 2 ///////////////////////////////////
//    strcpy(listaAlumnos[0].nombre, "Juan");
//    listaAlumnos[0].genero = 'm';
//    listaAlumnos[0].matricula = 12701;
//
//    strcpy(listaAlumnos[1].nombre, "Pedro");
//    listaAlumnos[1].genero = 'm';
//    listaAlumnos[1].matricula = 12702;
//
//    strcpy(listaAlumnos[2].nombre, "Maria");
//    listaAlumnos[2].genero = 'f';
//    listaAlumnos[2].matricula = 11702;
//    validos_listaAlumnos = 3;

//    mostarListaCompleta(listaAlumnos, validos_listaAlumnos);

    //////////////////////////////////////// Ejercicio 3 ///////////////////////////////////
//    strcpy(listaAlumnos[0].nombre, "Juan");
//    listaAlumnos[0].genero = 'm';
//    listaAlumnos[0].matricula = 12701;
//
//    strcpy(listaAlumnos[1].nombre, "Pedro");
//    listaAlumnos[1].genero = 'm';
//    listaAlumnos[1].matricula = 12702;
//
//    strcpy(listaAlumnos[2].nombre, "Maria");
//    listaAlumnos[2].genero = 'f';
//    listaAlumnos[2].matricula = 11702;
//    validos_listaAlumnos = 3;

//    int matricula;
//    printf("Ingrese la matricula del alumno a buscar: ");
//    scanf("%d", &matricula);
//    buscarAlumno_matricula(listaAlumnos, validos_listaAlumnos, matricula);

    //////////////////////////////////////// Ejercicio 4 ///////////////////////////////////

    //falta hacer



    //////////////////////////////////////// Ejercicio 5 ///////////////////////////////////
//    strcpy(listaAlumnos[0].nombre, "Juan");
//    listaAlumnos[0].genero = 'm';
//    listaAlumnos[0].matricula = 12701;
//
//    strcpy(listaAlumnos[1].nombre, "Pedro");
//    listaAlumnos[1].genero = 'm';
//    listaAlumnos[1].matricula = 12702;
//
//    strcpy(listaAlumnos[2].nombre, "Maria");
//    listaAlumnos[2].genero = 'f';
//    listaAlumnos[2].matricula = 11702;
//    validos_listaAlumnos = 3;
//    mostrarAlumno_Genero(listaAlumnos, validos_listaAlumnos, 'm');


    //////////////////////////////////////// Ejercicio 6 ///////////////////////////////////
//
//    strcpy(listaAlumnos[0].nombre, "Juan");
//    listaAlumnos[0].genero = 'm';
//    listaAlumnos[0].matricula = 2;
//
//    strcpy(listaAlumnos[1].nombre, "Pedro");
//    listaAlumnos[1].genero = 'm';
//    listaAlumnos[1].matricula = 4;
//
//    strcpy(listaAlumnos[2].nombre, "Maria");
//    listaAlumnos[2].genero = 'f';
//    listaAlumnos[2].matricula = 5;
//    validos_listaAlumnos = 3;
//
//    // Creo el alumno nuevo para agregarlo a la lista...
//    stAlumno alumnoNuevo;
//    strcpy(alumnoNuevo.nombre, "Luz");
//    alumnoNuevo.genero = 'f';
//    alumnoNuevo.matricula = 5;
//
//    agregarAlumno_listaOrdenadaPorMatricula(listaAlumnos, &validos_listaAlumnos, dim_listaAlumnos, alumnoNuevo);
//
//    mostarListaCompleta(listaAlumnos, validos_listaAlumnos);


    //////////////////////////////////////// Ejercicio 7 ///////////////////////////////////

    // Hacer



    //////////////////////////////////////// Ejercicio 8 ///////////////////////////////////
//    strcpy(listaAlumnos[0].nombre, "Juan");
//    listaAlumnos[0].genero = 'm';
//    listaAlumnos[0].matricula = 2;
//
//    strcpy(listaAlumnos[1].nombre, "Pedro");
//    listaAlumnos[1].genero = 'm';
//    listaAlumnos[1].matricula = 4;
//
//    strcpy(listaAlumnos[2].nombre, "Maria");
//    listaAlumnos[2].genero = 'f';
//    listaAlumnos[2].matricula = 5;
//    validos_listaAlumnos = 3;
//    char genero = 'm';
//    printf("La cantidad de alumnos %c: %i",genero, cantidad_Genero(listaAlumnos, validos_listaAlumnos, genero));
//



    printf("\n\n>>                      Fin programa. \n");
    system("pause");
    return 0;
}

/** 1. Hacer una función que cargue un arreglo de alumnos, hasta que el usuario lo decida. */
void cargarListaAlumnos(stAlumno listaAlumnos[], int * validos, const int dim)
{
    char option = 's';
    while((option== 's' || option== 'S') && dim > *validos)
    {
        printf("                Cargando un alumno. \n\n");
        printf(">> Nombre del alumno: ");
        fflush(stdin);
        gets(listaAlumnos[*validos].nombre);

        printf(">> Matricula del alumno: ");
        fflush(stdin);
        scanf("%i", &(listaAlumnos[*validos]).matricula);

        char genero;
        do
        {
            printf(">> Genero  del alumno (m: male, f: femile, o: other) : ");
            fflush(stdin);
            scanf("%c", &(listaAlumnos[*validos]).genero);
            genero = listaAlumnos[*validos].genero;
        }
        while(genero != 'm' && genero !='f' && genero!='o');

        *validos +=1; // esta mierda no toma el *validos++;
        if(*validos == dim)
        {
            printf("Lista completa no puede agregas mas alumnos.\n");
        }
        else
        {
            printf("\n          ¿Desea cargar otro alumno ? s/n: ");
            fflush(stdin);
            scanf("%c", &option);
        }
    }
}

/** 2. Hacer una función que muestre un arreglo de alumnos por pantalla. Modularizar.*/
void mostrarAlumno(const stAlumno listaAlumno[], const int index)
{
    printf(" Nombre del Alumno[%i]: %s   \n", index, listaAlumno[index].nombre);
    printf("    >> Matricula : %i   \n", listaAlumno[index].matricula);
    printf("    >> Genero: %c       \n\n", listaAlumno[index].genero);
}

void mostarListaCompleta(const stAlumno listaAlumno[], const int validos)
{
    for(int i = 0; i < validos; i++ )
    {
        mostrarAlumno(listaAlumno, i);
    }
}

/** 3. Hacer una función que muestre por pantalla los datos de un alumno, conociendo su matrícula. Modularizar. */
void buscarAlumno_matricula(const stAlumno listaAlumnos[], const int validos, const int matricula)
{
    int flag = 0;
    for(int i = 0; i < validos; i++ )
    {
        if(listaAlumnos[i].matricula == matricula)
        {
            mostrarAlumno(listaAlumnos, i);
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("No se encuentra registrada la matricula: %d", matricula);
    }
}






/** 5. Hacer una función que muestre por pantalla los datos de los estudiantes de un género
    determinado (se envía por parámetro). Modularizar.*/

void mostrarAlumno_Genero(const stAlumno listaAlumnos[], const int validos, const char genero)
{
    for(int i = 0; i < validos; i++)
    {
        if(listaAlumnos[i].genero == genero)
        {
            mostrarAlumno(listaAlumnos, i);
        }
    }
}

/** 6.Hacer una función que inserte en un arreglo ordenado por matrícula un nuevo dato, conservando el orden. */
void agregarAlumno_listaOrdenadaPorMatricula(stAlumno listaAlumnos[], int *validos, const int dim, const stAlumno alumnoNuevo)
{
    int flag = 0;
    for(int i = (*validos - 1); i>=0 && flag == 0; i--)
    {
        // valido que tengo lugar para meter otro registro en el array
        if(*validos <= dim)
        {
            if(alumnoNuevo.matricula > listaAlumnos[i].matricula)
            {
                listaAlumnos[i+1]= alumnoNuevo;
                flag = 1; // aviso que ya lo inserte.
            }else
            {
                listaAlumnos[i+1] = listaAlumnos[i];
            }
            if (flag == 0)
            {
                listaAlumnos[i] = alumnoNuevo;
            }
        }
    }
    (*validos)++;
}







/** 8. Hacer una función que cuente y retorne la cantidad de estudiantes de un género determinado
        (se envía por parámetro) que tiene un arreglo de alumnos. */

int cantidad_Genero(const stAlumno listaAlumnos[], const validos, const char genero)
{
    int contador=0;
    for(int i= 0; i<validos; i++)
    {
        if(listaAlumnos[i].genero == genero)
        {
            contador++;
        }
    }
    return contador;
}


/** 9. Hacer una función principal que pruebe el funcionamiento de todos los incisos anteriores,
    con un menú de opciones para poder ejecutar todas las funciones requeridas.
    Tengan presente la correcta declaración y el ámbito de variables.*/
void menu()
{

    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(50);
    printf("//                                                                                                              //\n");
    Sleep(50);
    printf("//                                     TPN 6 - Estructuras de Datos                                             //\n");
    Sleep(50);
    printf("//                                                                                                              //\n");
    Sleep(50);
    printf("//  typedef struct                                                                                              //\n");
    Sleep(50);
    printf("//  {                                                                                                           //\n");
    Sleep(50);
    printf("//                                                                                                              //\n");
    Sleep(50);
    printf("//                                                                                                              //\n");
    Sleep(50);
    printf("//      char opción[A] = 'Hacer una función que cargue un arreglo de alumnos, hasta que el usuario lo decida.'; //\n");
    Sleep(50);
    printf("//      char opción[B] = 'Hacer una función que muestre un arreglo de alumnos por pantalla. Modularizar';       //\n");
    Sleep(50);
    printf("//      char opción[C] = 'Hacer una función que muestre por pantalla los datos de un alumno,                    //\n");
    Sleep(50);
    printf("//                        conociendo su matrícula. Modularizar. ';                                              //\n");
    Sleep(50);
    printf("//      char opción[D] = 'Ordenar por método de selección según matrícula.';                                    //\n");
    Sleep(50);
    printf("//      char opción[E] = 'Mostrar todos los alumnos con dependiendo de un genero.';                             //\n");
    Sleep(50);
    printf("//      char opción[F] = 'Agregar alumno al registro (ordenado por matrícula) y siga ordenado';                 //\n");
    Sleep(50);
    printf("//      char opción[G] = 'Ordenar por método de inserción según matrícula.';                                    //\n");
    Sleep(50);
    printf("//      char opción[H] = 'Cantidad de estudiantes de un género determinado';                                    //\n");
    Sleep(50);
    printf("//      char opción[I] = 'Diseñar este hermoso menú :) ';                                                       //\n");
    Sleep(50);
    printf("//                                                                                                              //\n");
    Sleep(50);
    printf("//  }                                                                                                           //\n");
    Sleep(50);
    printf("//  int main()                                                                                                  //\n");
    Sleep(50);
    printf("//  {                                                                                                           //\n");
    Sleep(50);
    printf("//      Created By Juan Pedro()                                                                                 //\n");
    Sleep(50);
    printf("//  }                                                                                                           //\n");
    Sleep(50);
    printf("//                                                                                                              //\n");
    Sleep(50);
    printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    Sleep(50);
    printf("\n                                Tu entrada (Terminar Programa: s o S): ");
}

