[↩️ Volver al inicio](Portafolio.md)

# Unidad 3 – Modularidad y Arreglos

[![Modularidad](https://img.shields.io/badge/Concepto-Modularidad-2980b9?style=flat-square)](https://img.shields.io/badge/Concepto-Modularidad-2980b9?style=flat-square) [![Arreglos](https://img.shields.io/badge/Estructura-Arreglos-8e44ad?style=flat-square)](https://img.shields.io/badge/Estructura-Arreglos-8e44ad?style=flat-square)

---

## 1. Modularidad

[#1-modularidad](#1-modularidad)

La modularidad es el principio de diseño que consiste en dividir un programa grande en partes más pequeñas e independientes llamadas **módulos, funciones o subprogramas**, cada uno encargado de resolver una tarea específica. Esto permite reutilizar código, facilitar las pruebas y depuración, y mejorar la organización y legibilidad del programa.

Una función se compone de un **encabezado** (tipo de retorno, nombre y parámetros) y un **cuerpo** (las instrucciones que ejecuta). La comunicación entre el programa principal y la función se realiza a través de los **parámetros**, los cuales pueden pasarse de dos formas: **por valor** o **por referencia**.

---

### 1.1 Paso de Parámetros por Valor

[#11-paso-de-parámetros-por-valor](#11-paso-de-parámetros-por-valor)

En el paso **por valor**, la función recibe una **copia** del dato original. Cualquier modificación que se realice dentro de la función afecta únicamente a esa copia local, por lo que la variable original en el programa principal **no se altera**.

#### Estructura en Pseudocódigo

[#estructura-en-pseudocódigo](#estructura-en-pseudocódigo)

```
Funcion <tipo> nombreFuncion(<tipo> parametro)
    <instrucciones>;
    Retornar <valor>;
Fin_Funcion
```

#### Ejemplo en Lenguaje C

[#ejemplo-en-lenguaje-c](#ejemplo-en-lenguaje-c)

```c
#include <stdio.h>

// Funcion que recibe el parametro POR VALOR
void incrementar(int numero) {
    numero = numero + 10;
    printf("Dentro de la funcion: %d\n", numero);
}

int main() {
    int valor = 5;

    printf("Antes de llamar a la funcion: %d\n", valor);
    incrementar(valor);
    printf("Despues de llamar a la funcion: %d\n", valor);

    return 0;
}
```

**Salida esperada:**

```
Antes de llamar a la funcion: 5
Dentro de la funcion: 15
Despues de llamar a la funcion: 5
```

La variable `valor` conserva su valor original porque la función `incrementar` solo trabajó sobre una copia.

---

### 1.2 Paso de Parámetros por Referencia

[#12-paso-de-parámetros-por-referencia](#12-paso-de-parámetros-por-referencia)

En el paso **por referencia**, en lugar de enviar una copia del dato, se envía la **dirección de memoria** de la variable (mediante punteros, `&` y `*` en C). Esto permite que la función acceda y **modifique directamente** el valor original almacenado en el programa principal.

#### Estructura en Pseudocódigo

[#estructura-en-pseudocódigo-1](#estructura-en-pseudocódigo-1)

```
Funcion <tipo> nombreFuncion(<tipo> &parametro)
    <instrucciones sobre el valor referenciado>;
Fin_Funcion
```

#### Ejemplo en Lenguaje C

[#ejemplo-en-lenguaje-c-1](#ejemplo-en-lenguaje-c-1)

```c
#include <stdio.h>

// Funcion que recibe el parametro POR REFERENCIA (puntero)
void incrementar(int *numero) {
    *numero = *numero + 10;
    printf("Dentro de la funcion: %d\n", *numero);
}

int main() {
    int valor = 5;

    printf("Antes de llamar a la funcion: %d\n", valor);
    incrementar(&valor);
    printf("Despues de llamar a la funcion: %d\n", valor);

    return 0;
}
```

**Salida esperada:**

```
Antes de llamar a la funcion: 5
Dentro de la funcion: 15
Despues de llamar a la funcion: 15
```

A diferencia del ejemplo anterior, aquí la variable `valor` sí cambia, porque la función recibió la dirección de memoria (`&valor`) y modificó el contenido apuntado por `numero` mediante el operador de desreferencia `*`.

---

## 2. Arreglos

[#2-arreglos](#2-arreglos)

Un arreglo (array) es una estructura de datos que permite almacenar **múltiples valores del mismo tipo** bajo un mismo nombre, ubicados en posiciones consecutivas de memoria y accesibles mediante un **índice**. Los arreglos evitan tener que declarar una variable independiente por cada dato y facilitan el procesamiento repetitivo mediante bucles.

---

### 2.1 Arreglo Unidimensional (Vector)

[#21-arreglo-unidimensional-vector](#21-arreglo-unidimensional-vector)

El arreglo unidimensional, o **vector**, almacena los datos en una sola fila o dimensión. Cada elemento se identifica con un único índice, que en C comienza en `0`.

#### Estructura en Pseudocódigo

[#estructura-en-pseudocódigo-2](#estructura-en-pseudocódigo-2)

```
Arreglo <tipo> nombre[tamaño];

Para i = 0 Hasta tamaño-1 Hacer
    Leer nombre[i];
Fin_Para
```

#### Ejemplo en Lenguaje C

[#ejemplo-en-lenguaje-c-2](#ejemplo-en-lenguaje-c-2)

```c
#include <stdio.h>

int main() {
    int notas[5];
    int i;
    float suma = 0, promedio;

    for (i = 0; i < 5; i++) {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        suma = suma + notas[i];
    }

    promedio = suma / 5;
    printf("El promedio del curso es: %.2f\n", promedio);

    return 0;
}
```

Este ejemplo recorre el vector `notas` con un ciclo `for`, almacena cinco calificaciones y calcula el promedio general.

---

### 2.2 Arreglo Bidimensional (Matriz)

[#22-arreglo-bidimensional-matriz](#22-arreglo-bidimensional-matriz)

El arreglo bidimensional, o **matriz**, organiza los datos en **filas y columnas**, por lo que cada elemento se identifica mediante dos índices: uno para la fila y otro para la columna. Es útil para representar tablas, cuadrículas o información con doble entrada.

#### Estructura en Pseudocódigo

[#estructura-en-pseudocódigo-3](#estructura-en-pseudocódigo-3)

```
Arreglo <tipo> nombre[filas][columnas];

Para i = 0 Hasta filas-1 Hacer
    Para j = 0 Hasta columnas-1 Hacer
        Leer nombre[i][j];
    Fin_Para
Fin_Para
```

#### Ejemplo en Lenguaje C

[#ejemplo-en-lenguaje-c-3](#ejemplo-en-lenguaje-c-3)

```c
#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese el valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz ingresada:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

En este ejemplo se declara una matriz de 2 filas por 3 columnas, se llena mediante dos ciclos `for` anidados (uno para filas y otro para columnas) y luego se imprime en el mismo formato tabular.

---

## 3. Principales Dificultades y Reflexión Crítica

[#3-principales-dificultades-y-reflexión-crítica](#3-principales-dificultades-y-reflexión-crítica)

**Principales dificultades:**

- *(Pendiente: describe aquí la dificultad concreta que tuviste, por ejemplo al diferenciar el paso por valor del paso por referencia, o al manejar los índices de una matriz.)*
- *(Pendiente: agrega una segunda dificultad si la tuviste, siguiendo el mismo formato usado en la Unidad 2.)*

**Reflexión crítica:**

*(Pendiente: redacta tu propia reflexión sobre la importancia de la modularidad y los arreglos en la construcción de programas más organizados y reutilizables, tal como lo hiciste al cierre de la Unidad 2.)*

---

[Volver al inicio](Portafolio.md)
