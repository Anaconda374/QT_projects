
#ifndef MI_LIBRERIA_GLOBAL_H
#define MI_LIBRERIA_GLOBAL_H

#include <QtCore/qglobal.h>

/*
    El marco “Q_DECL_EXPORT” es una macro que se usa para declarar una función como exportada. Esto significa que la función puede ser usada por otras bibliotecas o ejecutables que importan la biblioteca compartida que contiene la función.
    Normalmente, esta macro se usa con las bibliotecas de Qt para definir las funciones que se exportan de la biblioteca y que forman parte de la API pública de Qt
 */

#if defined(MI_LIBRERIA_LIBRARY)
#  define MI_LIBRERIA_EXPORT Q_DECL_EXPORT
#else
#  define MI_LIBRERIA_EXPORT Q_DECL_IMPORT
#endif

#endif // MI_LIBRERIA_GLOBAL_H
