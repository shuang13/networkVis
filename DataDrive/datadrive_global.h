#ifndef DATADRIVE_GLOBAL_H
#define DATADRIVE_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef DATADRIVE_LIB
# define DATADRIVE_EXPORT Q_DECL_EXPORT
#else
# define DATADRIVE_EXPORT Q_DECL_IMPORT
#endif

#endif // DATADRIVE_GLOBAL_H
