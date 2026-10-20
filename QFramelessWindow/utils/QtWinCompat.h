#ifndef QTWINCOMPAT_H
#define QTWINCOMPAT_H

#include <QtGlobal>

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
#  include <QWindow>
#  include <Windows.h>
#  include <dwmapi.h>

namespace QtWinCompat {

inline bool isCompositionEnabled()
{
    BOOL enabled = FALSE;
    return SUCCEEDED(DwmIsCompositionEnabled(&enabled)) && enabled;
}

inline void extendFrameIntoClientArea(QWindow *window, int left, int top, int right, int bottom)
{
    if (!window) {
        return;
    }
    MARGINS margins = { left, right, top, bottom };
    DwmExtendFrameIntoClientArea(reinterpret_cast<HWND>(window->winId()), &margins);
}

}  // namespace QtWinCompat

#else
#  include <QtWin>
namespace QtWinCompat {
using QtWin::isCompositionEnabled;
using QtWin::extendFrameIntoClientArea;
}  // namespace QtWinCompat
#endif

#endif  // QTWINCOMPAT_H
