# Totito Chino (Timbiriche) 🎮

##  Descripción
Este proyecto implementa el juego **Totito Chino (Timbiriche)** en **C++** como práctica de la clase de **Estructura de Datos**.  
El juego corre en consola e incluye tablero configurable, manejo de turnos, puntuación, cierre de casillas y **PowerUps** que alteran la dinámica del juego.

Se aplican estructuras de datos como **listas enlazadas, pilas y colas** para la representación del tablero, los turnos y los PowerUps de los jugadores.

---

  Características
- Juego en consola 100% interactivo.
- Tablero dinámico (mínimo 3x3).
- Múltiples jugadores.
- Implementación de TADs: **Pilas, Colas, Listas enlazadas**.
- PowerUps especiales:
  - Doble Línea (DL)
  - Trampa Secreta (TS)
  - Bloqueo (BL)
  - Pase (PS)
  - Llave Secreta (LS)
  - Escurridizo (ES)
  - Unión al Futuro (UF)
  - A Costo (AC)
  - Nuevas Tierras (NT)
  - Explosivos (EX)

---

##  Requisitos
- **Lenguaje**: C++ (C++17 o superior).
- **Compilador**: g++ / MinGW / Dev-C++ / Code::Blocks.
- **Sistema Operativo**: Windows, Linux o macOS.

---

## Instalación

### 🔹 Opción 1: Usando Dev-C++
1. Descargar Dev-C++ desde [SourceForge](https://sourceforge.net/projects/orwelldevcpp/).
2. Crear un nuevo **Proyecto de Consola C++**.
3. Copiar los archivos `.cpp` y `.h` dentro del proyecto.
4. Compilar con **F9** y ejecutar.

### 🔹 Opción 2: Usando terminal (Linux/macOS/WSL)
```bash
g++ -std=c++17 -Wall -Wextra -o totito main.cpp game.cpp board.cpp player.cpp powerups.cpp tads.cpp
./totito
