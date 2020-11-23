#ifndef ALGORITHM_GLOBAL_H
#define ALGORITHM_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef ALGORITHM_LIB
# define ALGORITHM_EXPORT Q_DECL_EXPORT
#else
# define ALGORITHM_EXPORT Q_DECL_IMPORT
#endif

#endif // ALGORITHM_GLOBAL_H
