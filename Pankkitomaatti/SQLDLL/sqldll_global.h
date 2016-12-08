#ifndef SQLDLL_GLOBAL_H
#define SQLDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SQLDLL_LIBRARY)
#  define SQLDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SQLDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SQLDLL_GLOBAL_H
