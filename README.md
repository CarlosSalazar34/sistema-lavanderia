# 🧺 Sistema de Gestión de Lavandería

Un programa en C++ que gestiona los servicios de una lavandería, permitiendo registrar pedidos, listar servicios y calcular ganancias.

## 📋 Características

- **Registrar Pedido**: Captura nombre del cliente, tipo de servicio y peso
- **Listar Pedidos**: Visualiza todos los pedidos registrados
- **Buscar por ID**: Localiza un pedido específico por su identificador
- **Estadísticas**: Muestra total de pedidos e ingresos generados
- **ID Automático**: Los pedidos se numeran secuencialmente (100, 101, 102...)

## 💰 Tarifas

| Servicio | Precio por kilo |
|----------|-----------------|
| Lavado básico | $2.00 |
| Lavado + Secado | $3.50 |

## 🚀 Compilación & Ejecución

### Con GCC (Windows/Linux/Mac)
```bash
g++ -o sistema main.cpp
./sistema          # Linux/Mac
sistema.exe        # Windows
```

### Con Visual Studio (Windows)
```bash
cl /EHsc main.cpp
main.exe
```

### Con Code::Blocks o Dev-C++
1. Crear un nuevo proyecto C++
2. Agregar el archivo `main.cpp`
3. Compilar y ejecutar

## 📖 Instrucciones de Uso

Al ejecutar el programa verás este menú:

```
BIENVENIDO AL SISTEMA DE LAVANDERIA
1. Registrar pedido.
2. Listar pedidos.
3. Buscar por id.
4. Salir.
Ingrese una opcion: 
```

### Abrir un Pedido (Opción 1)
1. Ingresa tu nombre
2. Selecciona tipo de servicio (1 o 2)
3. Ingresa el peso en kilos
4. Se genera automáticamente el ID y se calcula el total

### Ver Todos los Pedidos (Opción 2)
Muestra un listado completo con:
- ID del pedido
- Nombre del cliente
- Tipo de servicio
- Peso (kilos)
- Total a pagar ($)

### Buscar Pedido (Opción 3)
Ingresa el ID de un pedido para ver sus detalles específicos

### Salir (Opción 4)
Cierra el programa

## 🛠️ Estructura del Código

```cpp
struct Pedido {
    int id;                  // Identificador único (100+)
    string nombreCliente;    // Nombre del cliente
    int tipoServicio;        // 1 = Básico, 2 = Secado
    float pesoKilos;         // Peso del pedido
    float total;             // Total calculado
};
```

## 📦 Requisitos

- C++ 11 o superior
- Compilador: GCC, Clang o MSVC
- Ninguna librería externa requerida

## 👨‍💻 Autores

**Carlos Salazar** - Proyecto educativo
**Maria Marcacci** - Proyecto educativo
**Estefano Evangelista** - Proyecto educativo
**Ronald Landaeta** - Proyecto educativo