# Cacho-CPP (Edición Semestre 2026-2)

Implementación en C++ del motor del juego **Cacho** (reglas Alalay con **Bono de Chicas +40 pts**), incluyendo una API Web y un Cliente Web interactivo.

📖 **Documentación Oficial y Especificaciones (Semestre 2026-2):**
- Sitio Web (GitHub Pages): [https://robertoasin.github.io/cacho-cpp/documentacion.html](https://robertoasin.github.io/cacho-cpp/documentacion.html)
- Archivo local: [`documentacion.html`](./documentacion.html)

## Estructura del Repositorio

- `src/`: Motor principal en C++, interfaz de jugadores (`Jugador.h`, `Actuacion.h`, `Marcador.h`, `Anotador.h`) y ejecutable de simulación.
- `api/`: Servidor Web API construido con el framework Crow.
- `web/`: Interfaz web para jugar contra agentes o probar partidas.
- `documentacion.html`: Sitio web interactivo con las reglas completas del semestre 2026-2 y la documentación de clases.

## 🚀 Acceso al Repositorio (Semestre 2026-2)

Para clonar directamente la rama correspondiente al semestre **2026-2**:

```bash
git clone -b semestre-2026-2 --single-branch https://github.com/robertoasin/cacho-cpp.git
cd cacho-cpp
```

### Requisitos

- `g++` (con soporte para C++17)
- `make`
- `boost-system`, `boost-thread` (únicamente requeridos si se desea compilar la API Web)

### Compilación

Puedes compilar únicamente el simulador de consola (recomendado para desarrollar y probar tu jugador):

```bash
cd src
make
./cacho
```

O compilar tanto el motor como la API Web desde la raíz:

```bash
make
```

## 🌐 Ejecución de la Interfaz Web (Opcional)

El ejecutable `api/cacho_api` inicia un servidor local en `http://localhost:8080`:

```bash
cd api
./cacho_api
```

Luego abre [http://localhost:8080](http://localhost:8080) en tu navegador.

## 🛠 Novedades de la Versión 2026-2

- **Bono de Chicas (+40 pts)**: Si un jugador logra anotar **al menos 3 dados en cada una de las 6 categorías chicas** (`balas >= 3`, `tontos >= 6`, `trenes >= 9`, `cuadras >= 12`, `quinas >= 15` y `senas >= 18`), recibe automáticamente un bono adicional de **+40 puntos** en su puntaje total (`marcador.bonoChicas`).
- **Interfaz Actualizada (`Jugador`, `Actuacion`, `Anotacion`)**:
  - `Jugador::jugar(dados, actuacionesPosibles, marcadores, resultadoPrevio)`
  - `Anotacion { int puntos; std::string juego; }`
  - `Actuacion(indiceDados, anotacion, seRespeta, accion)`
