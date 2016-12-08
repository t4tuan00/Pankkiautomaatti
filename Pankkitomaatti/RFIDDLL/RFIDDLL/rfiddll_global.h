#ifndef RFIDDLL_GLOBAL_H
#define RFIDDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RFIDDLL_LIBRARY)
#  define RFIDDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RFIDDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RFIDDLL_GLOBAL_H
