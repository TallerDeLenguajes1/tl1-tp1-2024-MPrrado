# TRABAJO PRACTICO N°1 TALLER DE LENGUAJES I

## Archivo .gitignore

El archivo **.gitignore** es un archivo de texto que le dice a Git qué otros archivos y carpetas de un proyecto debe ignorar.

Un archivo **.gitignore** local se coloca normalmente en el directorio de origen de un proyecto. También puedes crear un archivo **.gitignore** global y cualquier entrada que contenga será ignorada en todos tus repositorios Git por igual.

Para crear un archivo **.gitignore** local, crea un archivo de texto y llámalo **.gitignore** (recuerda incluir el . al principio). Después edita el archivo como sea necesario. Cada línea nueva debería contener el archivo o carpeta que quieres que Git ignore.

Las entradas en este archivo también pueden seguir un modelo similar a:

- "*" se usa para encontrar coincidencias.
- "/" se usa para ignorar nombres de ruta relacionados con el archivo .gitignore
- "#" se usa para añadir comentarios al archivo .gitignore