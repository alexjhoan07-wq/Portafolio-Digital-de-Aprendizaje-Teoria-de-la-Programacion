[↩️ Volver al inicio](https://github.com/alexjhoan07-wq/Portafolio-Digital-de-Aprendizaje-Teoria-de-la-Programacion/blob/main/Portafolio.md)
<div align="center">

# Unidad 2 – Estructuras de Control

[![C](https://img.shields.io/badge/Lenguaje-C-00599C?style=flat-square&logo=c)](https://img.shields.io/badge/Lenguaje-C-00599C?style=flat-square&logo=c)
[![Condicionales](https://img.shields.io/badge/Estructuras-Condicionales-27ae60?style=flat-square)](https://img.shields.io/badge/Estructuras-Condicionales-27ae60?style=flat-square)
[![Repetitivas](https://img.shields.io/badge/Estructuras-Repetitivas-e67e22?style=flat-square)](https://img.shields.io/badge/Estructuras-Repetitivas-e67e22?style=flat-square)
</div>
---

## 📋 Tabla de Contenidos

- [1. Estructuras Condicionales](#1-estructuras-condicionales)
  - [1.1 Condicional Simple — `if`](#11-condicional-simple--if)
  - [1.2 Condicional Doble — `if-else`](#12-condicional-doble--if-else)
  - [1.3 Condicional Múltiple — `switch`](#13-condicional-múltiple--switch)
- [2. Estructuras Repetitivas](#2-estructuras-repetitivas)
  - [2.1 Ciclo `while`](#21-ciclo-while)
  - [2.2 Ciclo `do-while`](#22-ciclo-do-while)
  - [2.3 Ciclo `for`](#23-ciclo-for)
- [3. Ejercicio Integrador](#3-ejercicio-integrador)
  - [3.1 Planteamiento del Problema](#31-planteamiento-del-problema)
  - [3.2 Análisis del Problema](#32-análisis-del-problema)
  - [3.3 Diseño del Algoritmo](#33-diseño-del-algoritmo)
  - [3.4 Codificación](#34-codificación)
  - [3.5 Validación — Prueba de Escritorio](#35-validación--prueba-de-escritorio)
- [4. Principales Dificultades y Reflexión Crítica](#4-principales-dificultades-y-reflexión-crítica)

---

## 1. Estructuras Condicionales

Las estructuras condicionales permiten que un programa tome decisiones durante su ejecución. Evalúan una condición lógica y ejecutan distintos bloques de instrucciones según el resultado obtenido (verdadero o falso).

---

### 1.1 Condicional Simple — `if`

La estructura `if` evalúa una expresión booleana. Si la condición resulta **verdadera**, se ejecuta el bloque de instrucciones que contiene; si es **falsa**, el programa simplemente continúa con la siguiente instrucción sin ejecutar nada dentro del bloque.

#### Estructura en Pseudocódigo

```
Si <condición> Entonces
    <instrucciones>
Fin Si
```

#### Estructura en Diagrama de Flujo

> 📌 *Inserta aquí la imagen de tu diagrama de flujo para la estructura `if`.*

```
[INICIO] → [Condición?] --Verdadero--> [Instrucciones] → [FIN]
                        --Falso-------------------------------↗
```

#### Ejemplo

> 📝 *Describe aquí el ejemplo que trabajaste en clase para la estructura `if`.*

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 1.2 Condicional Doble — `if-else`

La estructura `if-else` garantiza que siempre se ejecute **una acción**: si la condición es verdadera se ejecuta el bloque del `if`, y si es falsa se ejecuta el bloque del `else`. De esta forma el programa nunca queda sin respuesta ante la condición evaluada.

#### Estructura en Pseudocódigo

```
Si <condición> Entonces
    <instrucciones_si_verdadero>
SiNo
    <instrucciones_si_falso>
Fin Si
```

#### Estructura en Diagrama de Flujo

> 📌 *Inserta aquí la imagen de tu diagrama de flujo para la estructura `if-else`.*

```
[INICIO] → [Condición?] --Verdadero--> [Bloque A] → [FIN]
                        --Falso-------> [Bloque B] ↗
```

#### Ejemplo

> 📝 *Describe aquí el ejemplo que trabajaste en clase para la estructura `if-else`.*

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 1.3 Condicional Múltiple — `switch`

La estructura `switch` no evalúa una expresión booleana directamente, sino que **compara un valor contra múltiples casos posibles**. Según el caso que coincida, se ejecuta la acción correspondiente. Si ningún caso coincide, se ejecuta el bloque `default` como salida alternativa.

#### Estructura en Pseudocódigo

```
Según <variable> Hacer
    Caso <valor1>:
        <instrucciones>
    Caso <valor2>:
        <instrucciones>
    De Otro Modo:
        <instrucciones_por_defecto>
Fin Según
```

#### Estructura en Diagrama de Flujo

> 📌 *Inserta aquí la imagen de tu diagrama de flujo para la estructura `switch`.*

#### Ejemplo

> 📝 *Describe aquí el ejemplo que trabajaste en clase para la estructura `switch`.*

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

## 2. Estructuras Repetitivas

Las estructuras repetitivas (también llamadas ciclos o bucles) permiten ejecutar un bloque de instrucciones **múltiples veces** sin necesidad de reescribirlas. Se utilizan cuando se necesita repetir una acción un número determinado o indeterminado de veces.

---

### 2.1 Ciclo `while`

El ciclo `while` repite un bloque de instrucciones **mientras una condición sea verdadera**. La condición se evalúa **antes** de cada iteración, lo que significa que si la condición es falsa desde el inicio, el bloque puede no ejecutarse ni una sola vez.

#### Estructura en Pseudocódigo

```
Mientras <condición> Hacer
    <instrucciones>
Fin Mientras
```

#### Estructura en Diagrama de Flujo

> 📌 *Inserta aquí la imagen de tu diagrama de flujo para el ciclo `while`.*

```
[INICIO] → [Condición?] --Verdadero--> [Instrucciones] --↑(repite)
                        --Falso-------> [FIN]
```

#### Ejemplo

> 📝 *Describe aquí el ejemplo que trabajaste en clase para el ciclo `while`.*

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 2.2 Ciclo `do-while`

El ciclo `do-while` garantiza que el bloque de instrucciones se ejecute **al menos una vez**, ya que la condición se evalúa **al final** de cada iteración. Mientras la condición continúe siendo verdadera, el ciclo seguirá repitiéndose.

#### Estructura en Pseudocódigo

```
Repetir
    <instrucciones>
Hasta Que <condición_falsa>
```

#### Estructura en Diagrama de Flujo

> 📌 *Inserta aquí la imagen de tu diagrama de flujo para el ciclo `do-while`.*

```
[INICIO] → [Instrucciones] → [Condición?] --Verdadero--↑(repite)
                                           --Falso----> [FIN]
```

#### Ejemplo

> 📝 *Describe aquí el ejemplo que trabajaste en clase para el ciclo `do-while`.*

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 2.3 Ciclo `for`

El ciclo `for` se utiliza cuando se conoce de antemano el **número exacto de repeticiones**. Incorpora en una sola línea la inicialización del contador, la condición de continuación y el incremento o decremento del contador.

#### Estructura en Pseudocódigo

```
Para <variable> <- <valor_inicial> Hasta <valor_final> Con Paso <incremento> Hacer
    <instrucciones>
Fin Para
```

#### Estructura en Diagrama de Flujo

> 📌 *Inserta aquí la imagen de tu diagrama de flujo para el ciclo `for`.*

```
[INICIO] → [inicializar contador] → [Condición?] --Verdadero--> [Instrucciones] → [incrementar] --↑
                                                  --Falso-------> [FIN]
```

#### Ejemplo

> 📝 *Describe aquí el ejemplo que trabajaste en clase para el ciclo `for`.*

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

## 3. Ejercicio Integrador

Este ejercicio combina una estructura condicional con una estructura repetitiva para resolver un problema completo, siguiendo las etapas del proceso de desarrollo de algoritmos.

---

### 3.1 Planteamiento del Problema

> 📝 *Describe aquí el enunciado completo del problema planteado en clase. Incluye el contexto, los datos que se conocen y lo que se desea obtener como resultado.*

**Ejemplo de formato:**

> Desarrollar un programa en lenguaje **[lenguaje dado en clase]** que permita [descripción de lo que debe hacer el programa]. El usuario ingresará [datos de entrada] y el programa deberá [proceso] para mostrar [resultado esperado].

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 3.2 Análisis del Problema

> 📝 *Identifica y documenta aquí los elementos del problema.*

- **Datos de entrada:**
  - `[variable 1]` — descripción
  - `[variable 2]` — descripción

- **Proceso:**
  - [Describe paso a paso qué operaciones o decisiones realiza el programa]

- **Datos de salida:**
  - `[resultado]` — descripción

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 3.3 Diseño del Algoritmo

#### Pseudocódigo

> 📝 *Escribe aquí el pseudocódigo completo del ejercicio en PseInt o en el estándar usado en clase.*

```
Algoritmo [NombreDelAlgoritmo]

    // Declaración de variables
    Definir [variables] Como [tipo]

    // Instrucciones


Fin Algoritmo
```

#### Diagrama de Flujo

> 📌 *Inserta aquí la imagen del diagrama de flujo completo del ejercicio.*

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 3.4 Codificación

> 📝 *Escribe aquí el código fuente completo en el lenguaje dado en clase.*

```c
// Código fuente en [lenguaje dado en clase]
// [Nombre del programa]

#include <stdio.h>

int main() {

    // Declaración de variables


    // Entrada de datos


    // Proceso


    // Salida de resultados


    return 0;
}
```

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

### 3.5 Validación — Prueba de Escritorio

> 📝 *Completa la tabla con los datos de prueba que utilizaste para verificar el correcto funcionamiento del programa.*

**Datos de prueba utilizados:**

| Variable | Valor ingresado |
| -------- | --------------- |
| [var 1]  | [valor]         |
| [var 2]  | [valor]         |

**Traza de ejecución:**

| Paso | Instrucción ejecutada | Estado de variables | Resultado parcial |
| ---- | --------------------- | ------------------- | ----------------- |
| 1    |                       |                     |                   |
| 2    |                       |                     |                   |
| 3    |                       |                     |                   |
| 4    |                       |                     |                   |
| 5    |                       |                     |                   |

**Salida esperada en consola:**

```
[Escribe aquí exactamente lo que debería mostrar el programa en pantalla]
```

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

## 4. Principales Dificultades y Reflexión Crítica

> 📝 *Redacta aquí en primera persona tus dificultades reales durante el estudio de esta unidad y tu reflexión crítica sobre los aprendizajes obtenidos.*

**Principales dificultades:**

- [Dificultad 1: por ejemplo, diferenciar cuándo usar `while` vs `do-while`]
- [Dificultad 2: por ejemplo, controlar correctamente el contador en el ciclo `for`]
- [Dificultad 3: por ejemplo, combinar una estructura condicional dentro de un ciclo]

**Reflexión crítica:**

[Escribe aquí tu reflexión personal sobre cómo los contenidos de esta unidad ampliaron tu comprensión de la programación, qué conexión encuentras con los temas de la Unidad 1, y cómo aplicarías estos conocimientos en problemas reales.]

---

[🔼 Volver a la tabla de contenidos](#-tabla-de-contenidos)

---

[↩️ Volver al inicio](https://github.com/alexjhoan07-wq/Portafolio-Digital-de-Aprendizaje-Teoria-de-la-Programacion/blob/main/Portafolio.md)
