# Proyecto interoperabilidad

#### Presentación
[Link de presentacion](https://docs.google.com/presentation/d/18c-YCRJbmUKD6FLNPgVuMk3i6qgCCi160yWDgAq5tRk/edit?usp=sharing)

#### Dashboard
[Dashboard](http://fiware-iot.ddns.net:3003/d/uNgI8Z2Gz/huerta?orgId=8)

#### Base de datos
[Valores sensados en la DB](http://fiware-iot.ddns.net:4200/#/console?query=SELECT%20%22entity_id%22,%22entity_type%22,%22fiware_servicepath%22,%22measure%22,%22time_index%22%20FROM%20%22mtopeniot%22.%22etsensor%22%20LIMIT%20100;)

## Descripción

Proyecto final de la cátedra de Interoperabilidad. El proyecto contiene código
en C++ el cual utiliza los valores capturados por los sensores y luego los publica en la 
API de fiware.

### Conexión
![circuito](https://raw.githubusercontent.com/niconunez96/proyecto-interoperabilidad/main/Images/circuito.png)

### Diagrama de clase
![diagrama-clase](https://raw.githubusercontent.com/niconunez96/proyecto-interoperabilidad/main/Images/diagramaclase.png)

## Como correr proyecto

Para poder correr correctamente el proyecto se debe crear un enlace simbólico desde la carpeta
libraries de Arduino hacia el directorio Sensors del proyecto

**Ejemplo**
`ln -s $(pwd)/application/Sensors /etc/Arduino/libraries`

En window se puede copiar la carpeta Sensors directamente al directorio libraries de Arduino