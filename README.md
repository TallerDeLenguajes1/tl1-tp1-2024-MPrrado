# TRABAJO PRACTICO N°1 TALLER DE LENGUAJES I

##  Apartado 2, parte 2

## Archivo .gitignore🚫

El archivo **.gitignore** es un archivo de texto que le dice a Git qué otros archivos y carpetas de un proyecto debe ignorar.

Un archivo **.gitignore** local se coloca normalmente en el directorio de origen de un proyecto. También puedes crear un archivo **.gitignore** global y cualquier entrada que contenga será ignorada en todos tus repositorios Git por igual.

### Cómo configurar el archivo .gitignore ⚙️

Para crear un archivo **.gitignore** local, crea un archivo de texto y llámalo **.gitignore** (recuerda incluir el . al principio). Después edita el archivo como sea necesario. Cada línea nueva debería contener el archivo o carpeta que quieres que Git ignore.

Las entradas en este archivo también pueden seguir un modelo similar a:

- "*" se usa para encontrar coincidencias.
- "/" se usa para ignorar nombres de ruta relacionados con el archivo .gitignore
- "#" se usa para añadir comentarios al archivo .gitignore

Este es un ejemplo de cómo se vería un archivo .gitignore:

    # Ignorar archivos del sistema de Mac
    .DS_store

    # Ignorar carpeta node_modules
    node_modules

    # Ignorar todos los archivos de texto
    *.txt

    # Ignorar archivos relacionados con claves de una API
    .env

    # Ignorar archivos de configuración SASS
    .sass-cache
### Por qué es conveniente agregarlo al repositorio📝

El archivo _.gitignore_ es esencial en Git porque:
-   Evita que archivos no deseados se incluyan en el repositorio, como archivos temporales o de compilación (caso del tp1_1.cpp de este repositorio).
-   Mantiene el repositorio ordenado y enfocado en los archivos relevantes para el proyecto.
-   Mejora la seguridad al evitar la inclusión de información confidencial, como claves de API.


## Apartado 3 g), parte 2:

En el apartado 3 e) podemos notar que cuando se ejecuta el programa en el **punto 2)** obtenemos el _contenido de un puntero_ y en el **punto 3)** obtenemos la _direccion de memoria de la variable_ las cuales coinciden pues, cuando se crea una variable del tipo puntero esta almacena como valor la direccion de memoria de una variable del mismo tipo como en el caso de nuestro programa en el cual declaramos una variable tipo _int_ del tipo _puntero_ la cual apunte a la varible del mismo tipo _int_.
En el **punto 4)** de este mismo apartado lo que obtenemos es la direccion de memoria de la variable del tipo _int puntero_, la cual claramente no coincide con los demas resultados pues lo que obtenemos en este punto es la direccion donde esta almacenada la variable puntero, mientras que en los otros casos obtenemos la direccion de donde esta almacenada la variable del tipo _int_ solamente.

