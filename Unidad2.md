[↩️ Volver al inicio](https://github.com/alexjhoan07-wq/Portafolio-Digital-de-Aprendizaje-Teoria-de-la-Programacion/blob/main/Portafolio.md)
<div align="center">

# Unidad 2 – Estructuras de Control

[![C](https://img.shields.io/badge/Lenguaje-C-00599C?style=flat-square&logo=c)](https://img.shields.io/badge/Lenguaje-C-00599C?style=flat-square&logo=c)
[![Condicionales](https://img.shields.io/badge/Estructuras-Condicionales-27ae60?style=flat-square)](https://img.shields.io/badge/Estructuras-Condicionales-27ae60?style=flat-square)
[![Repetitivas](https://img.shields.io/badge/Estructuras-Repetitivas-e67e22?style=flat-square)](https://img.shields.io/badge/Estructuras-Repetitivas-e67e22?style=flat-square)

---

</div>


## 1. Estructuras Condicionales

Las estructuras condicionales permiten que un programa tome decisiones durante su ejecución. Evalúan una condición lógica y ejecutan distintos bloques de instrucciones según el resultado obtenido (verdadero o falso).

---

### 1.1 Condicional Simple — `if`

La estructura `if` evalúa una expresión booleana. Si la condición resulta **verdadera**, se ejecuta el bloque de instrucciones que contiene; si es **falsa**, el programa simplemente continúa con la siguiente instrucción sin ejecutar nada dentro del bloque.

#### Estructura en Pseudocódigo

```
Si <condición> Entonces
    <instrucciones>;
Fin_Si
```

#### Estructura en Diagrama de Flujo

<img width="179" height="269" alt="if drawio" src="https://github.com/user-attachments/assets/33e3f687-f690-408e-98d5-fc50e58c12ba" />



### 1.2 Condicional Doble — `if-else`

La estructura `if-else` garantiza que siempre se ejecute **una acción**: si la condición es verdadera se ejecuta el bloque del `if`, y si es falsa se ejecuta el bloque del `else`. De esta forma el programa nunca queda sin respuesta ante la condición evaluada.

#### Estructura en Pseudocódigo

```
Si <condición> Entonces
    <instrucciones_si_verdadero>;
Si_No
    <instrucciones_si_falso>;
Fin_Si
```

#### Estructura en Diagrama de Flujo

<img width="351" height="299" alt="ifelse drawio" src="https://github.com/user-attachments/assets/bdb43a2e-b82e-4147-9e3a-f83c9c0fa8b5" />

---

### 1.3 Condicional Múltiple — `switch`

La estructura `switch` no evalúa una expresión booleana directamente, sino que **compara un valor contra múltiples casos posibles**. Según el caso que coincida, se ejecuta la acción correspondiente. Si ningún caso coincide, se ejecuta el bloque `default` como salida alternativa.

#### Estructura en Pseudocódigo

```
Según <variable> Hacer
    Caso <valor1>:
        <instrucciones>;
        ...
    Caso <valor2>:
        <instrucciones>;
        ...
    De Otro Modo:
        <instrucciones_por_defecto>;
Fin_Según
```

#### Estructura en Diagrama de Flujo

<img width="571" height="349" alt="switch drawio" src="https://github.com/user-attachments/assets/850bd893-5785-461e-b3dc-375028a06487" />


---

## 2. Estructuras Repetitivas

Las estructuras repetitivas (también llamadas ciclos o bucles) permiten ejecutar un bloque de instrucciones **múltiples veces** sin necesidad de reescribirlas. Se utilizan cuando se necesita repetir una acción un número determinado o indeterminado de veces.

---

### 2.1 Ciclo `while`

El ciclo `while` repite un bloque de instrucciones **mientras una condición sea verdadera**. La condición se evalúa **antes** de cada iteración, lo que significa que si la condición es falsa desde el inicio, el bloque puede no ejecutarse ni una sola vez.

#### Estructura en Pseudocódigo

```
Mientras <condición> Hacer
    <instrucciones>;
    ...
Fin_Mientras
```

#### Estructura en Diagrama de Flujo

<img width="186" height="268" alt="while drawio" src="https://github.com/user-attachments/assets/e9b7857e-9bda-421e-8c3b-2ed0ec321308" />

---

### 2.2 Ciclo `do-while`

El ciclo `do-while` garantiza que el bloque de instrucciones se ejecute **al menos una vez**, ya que la condición se evalúa **al final** de cada iteración. Mientras la condición continúe siendo verdadera, el ciclo seguirá repitiéndose.

#### Estructura en Pseudocódigo

```
hacer
    <instrucciones>;
    ...
mientras <condición>;
```

#### Estructura en Diagrama de Flujo

<img width="186" height="306" alt="dowhile drawio" src="https://github.com/user-attachments/assets/99251d6d-6b78-42bc-9946-795392c87331" />


---

### 2.3 Ciclo `for`

El ciclo `for` se utiliza cuando se conoce de antemano el **número exacto de repeticiones**. Incorpora en una sola línea la inicialización del contador, la condición de continuación y el incremento o decremento del contador.

#### Estructura en Pseudocódigo

```
Para (iniciador) Hasta (condición) <incremento> Hacer
    <instrucciones>;
Fin_Para
```

#### Estructura en Diagrama de Flujo

<img width="346" height="242" alt="para drawio" src="https://github.com/user-attachments/assets/dcace249-ca4f-4e36-9ac2-c200513849ca" />


---

## 3. Ejercicio Integrador

Este ejercicio combina una estructura condicional con una estructura repetitiva para resolver un problema completo, a conticuación se tiene un conteo de los pasos para la resolución de este:


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
