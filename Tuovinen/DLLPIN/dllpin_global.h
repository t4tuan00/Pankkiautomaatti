#ifndef DLLPIN_GLOBAL_H
#define DLLPIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLPIN_LIBRARY)
#  define DLLPINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DLLPINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DLLPIN_GLOBAL_H
