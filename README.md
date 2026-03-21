# sistema-lavanderia
Ejercicio: Sistema "CleanCode Laundry"
Objetivo: Crear un programa en C++ que gestione los servicios de una lavandería.

1. La Estructura de Datos
Definan un struct llamado Pedido que contenga:

id: Un número entero (debe ser único).

nombreCliente: Texto (string).

tipoServicio: Un entero (1 para "Lavado básico", 2 para "Lavado + Secado").

pesoKilos: Un número decimal (float o double).

total: El costo calculado del servicio.

2. Requerimientos del Sistema
El programa debe mostrar un menú con las siguientes opciones:

Registrar Pedido: * El id debe generarse automáticamente (empezando en 100 y aumentando de 1 en 1).

Si el usuario elige Servicio 1, el precio es $2.00 por kilo.

Si elige Servicio 2, el precio es $3.50 por kilo.

El programa debe calcular el total inmediatamente y guardar el pedido en un vector<Pedido>.

Listar Pedidos:

Mostrar en pantalla todos los pedidos registrados con su ID, nombre, peso y el total a pagar.

Resumen de Ventas (Estadísticas):

Mostrar cuántos pedidos totales se han hecho.

Mostrar el monto total de dinero recaudado por la lavandería hasta el momento.

Buscar por ID:

El usuario ingresa un ID y el programa debe buscar en el vector y mostrar los datos de ese cliente. Si no existe, avisar al usuario.

Salir.