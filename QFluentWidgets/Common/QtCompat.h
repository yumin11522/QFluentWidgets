#ifndef QFW_QTCOMPAT_H
#define QFW_QTCOMPAT_H

#include <QtGlobal>

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
#  include <QEnterEvent>
using QfwEnterEvent = QEnterEvent;
#else
class QEvent;
using QfwEnterEvent = QEvent;
#endif

#endif  // QFW_QTCOMPAT_H
