﻿#ifndef CURVEANALYSE_GLOBAL_H
#define CURVEANALYSE_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef CURVEANALYSE_LIB
# define CURVEANALYSE_EXPORT Q_DECL_EXPORT
#else
# define CURVEANALYSE_EXPORT Q_DECL_IMPORT
#endif

#endif // CURVEANALYSE_GLOBAL_H