<a href="../Portafolio.md">⬅️ Volver al inicio</a>
<div align="center">

#  Unidad 1 – Fundamentos de Programación

![PseInt](https://img.shields.io/badge/Pseudoc%C3%B3digo-PseInt-f39c12?style=flat-square)
![C](https://img.shields.io/badge/Lenguaje-C-00599C?style=flat-square&logo=c)
![Estructura](https://img.shields.io/badge/Estructura-Secuencial-27ae60?style=flat-square)

</div>

---

##  Contenidos Teóricos

###  Algorimo

Un algortmo es una serie de pasos lógicos en un circuito cerrado que se ejecuta para resolver un problema, paso a paso, sin ambigüedades, todo directo.
####   ● Ejemplo: Lavarse las manos
#### 1.- Inicio.
#### 2.- Abrir el grifo.
#### 3.- Mojarse las manos.
#### 4.- Aplicar jabón.
#### 5.- Frotar las manos.
#### 6.- Enjuagar.
#### 7.- Cerrar el grifo.
#### 8.- Secarse las manos.
#### 9.- Fin.

---

###  Pseudocódigo

El pseudocódigo es una herramienta que nos sirve como punto de partida a la hora de programar, nos permite generar algoritmos en español para enteneder como funcionan estos y ser capaces de ver errores o la forma de simplificar nuestros algoritmos. Es como aprender reglas o frases comúnes a lo hora de querer aprender un nuevo idioma, ya que, es una forma de adentrarnos en un nuevo campo.

<img width="682" height="491" alt="Captura de pantalla 2026-04-26 223907" src="https://github.com/user-attachments/assets/14e70572-b268-4fd4-9045-3eb439223e18" />

Este es un algoritmo utilizando Pseint que es un pseudocódigo que nos permite ambientarnos en la programación, como se ve resuelve un problema tal como se lo haría con un lenguaje de alto nivel, claro que de una forma más simple.


---

### Diagrama de Flujo

Los diagramas de flujo son mapas estructurados que pueden ser creados directamente para plantear una idea o realizarlos a partir de un algoritmo para entender el proceso de este. El fin de estos es tener una vista mas general de nuestro algoritmo.

<img width="430" height="687" alt="Captura de pantalla 2026-04-26 224115" src="https://github.com/user-attachments/assets/19f918cc-dfd9-45a2-af4c-0f7f2c53e350" />

En este diagrama de flujo se identifica el proceso completo de un algoritmo y respetando la definición de este, tiene un inicio y final.

---

###  Prueba de Escritorio

Es una prueba manual que se hace para obtener resultados y posteriormente compararlos con la ejecución del algoritmo, así para identifiar si existe algún error en este o funciona perfectamente.

---

###  Lenguajes de Programación

Los lenguajes de programación son herramientas que permiten la resolución de problemas a partir de la creación de software.
-->

| Lenguaje | Tipo | Lo que aprendí de él |
|----------|------|----------------------|
| **C** | Compilado | Permite un control directo sobre la memoria y el hardware. |
| **Java** | Compilado/Interpretado | Fuertemente tipado, orientado a objetos. |
| **Python** | Interpretado | Redacción simple y legible, con indentación significativa. |
---

###  Programación por Bloques

La programación por bloques permite aprender de manera visual y sencilla cómo se construye una secuencia de pasos. En lugar de redactar instrucciones con palabras, se utilizan bloques gráficos que representan acciones y que se pueden arrastrar y encajar unos con otros. Esta forma de trabajar facilita comprender la lógica de un programa, ya que muestra cómo las piezas se conectan para formar un procedimiento completo.

<img width="944" height="436" alt="Captura de pantalla 2026-05-04 031848" src="https://github.com/user-attachments/assets/a798ea6e-6ff6-4314-a731-799e88439c52" />


---

##  Ejercicio con Estructura Secuencial — Lenguaje C

###  Planteamiento del Problema

Desarrollar un programa en lenguaje C que permita calcular la distancia euclidiana entre dos puntos en el plano cartesiano. El usuario deberá ingresar las coordenadas de dos puntos P1(x1, y1) y P2(x2, y2), y el programa mostrará la distancia entre ellos.

---

###  Análisis del Problema

- **Entradas**: Coordenadas enteras  
  - Punto 1: (x1, y1)  
  - Punto 2: (x2, y2)  
- **Proceso**: Aplicar la fórmula de distancia euclidiana  
- **Salida**: Valor decimal `d` que representa la distancia entre los dos puntos  

---

## 📐 Fórmula
La distancia entre dos puntos se calcula con:



\[
d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
\]


---

###  Diseño del Algoritmo

#### Pseudocódigo en PseInt

Algoritmo DistanciaEntreDosPuntos

    // Declaración de variables
    Definir x1, x2, y1, y2 Como Entero
    Definir d Como Real

    // Entrada de datos
    Escribir "Ingrese la coordenada x1:"
    Leer x1
    Escribir "Ingrese la coordenada y1:"
    Leer y1
    Escribir "Ingrese la coordenada x2:"
    Leer x2
    Escribir "Ingrese la coordenada y2:"
    Leer y2

    // Proceso
    d <- raiz( ((x2 - x1) ^ 2) + ((y2 - y1) ^ 2) )

    // Salida
    Escribir "La distancia entre los dos puntos es: ", d

FinAlgoritmo

#### Diagrama de Flujo

<img width="412" height="657" alt="image" src="https://github.com/user-attachments/assets/be80f2a6-c61b-45c7-8279-f4d5825a28f1" />



---

### ⌨️ Codificación — Código Fuente en C



```
#include <stdio.h>
#include <math.h>
    int  main() {
        //Variables
        int x1, x2, y1, y2;
        float d;
        //Datos de entrada
        printf("Ingrese las cordenadas de x1\n");
        scanf("%i", &x1);
        printf("Ingrese las cordenadas de y1\n");
        scanf("%i", &y1);
        printf("Ingrese las cordenadas de x2\n");
        scanf("%i", &x2);
        printf("Ingrese las cordenadas de y2\n");
        scanf("%i", &y2);
        //Procedimiento
        d= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        //salida
        printf("La distancia entre los dos puntos es: %f", d);
        return 0;
    }
```

---

###  Validación — Prueba de Escritorio



> **Datos de prueba:** Datos de prueba: x1 = 1 · y1 = 2 · x2 = 4 · y2 = 6

| Paso | Instrucción ejecutada | Resultado |
|------|------------------------|-----------|
| 1    | Declarar variables     | x1, y1, x2, y2, d |
| 2    | scanf → x1             | x1 = 1 |
| 3    | scanf → y1             | y1 = 2 |
| 4    | scanf → x2             | x2 = 4 |
| 5    | scanf → y2             | y2 = 6 |
| 6    | (x2 - x1)              | 4 - 1 = 3 → 3² = 9 |
| 7    | (y2 - y1)              | 6 - 2 = 4 → 4² = 16 |
| 8    | Suma de cuadrados      | 9 + 16 = 25 |
| 9    | sqrt(25)               | d = 5.000000 |
| 10   | printf                 | Imprime resultado → 5.000000 |


**Salida esperada en consola:**

```
Ingrese las cordenadas de x1
1
Ingrese las cordenadas de y1
2
Ingrese las cordenadas de x2
4
Ingrese las cordenadas de y2
6
La distancia entre los dos puntos es: 5.000000
```

---

##  Principales Dificultades y Reflexión Crítica

Mi principal dificultad fue en el lenguaje C, ya que, no sabía la función de las bibliotecas, hasta que en el ejercicio realizado anteriormente se uso otra bibioteca aparte de <stdio.h> esta fue <math.h> donde entendí que las bibliotecas duncionan como pequeños diccionarios que permiten funciones específicas.

Como reflexión general de la asignatura entiendo que es importante la ambientación en los diferentes tipos de lenguajes de programación y como operan estos, ya que, entender como funcionan nos permite saber en que podemos equivocarnos. En si la asignatura se me ha echo demasiado interesante ya que es como aprender nuevos idiomas.


---

<div align="center">
<a href="../Portafolio.md">⬅️ Volver al inicio</a>
</div>
