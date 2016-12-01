#ifndef PINDLL_GLOBAL_H
#define PINDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PINDLL_LIBRARY)
#  define PINDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PINDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PINDLL_GLOBAL_H
