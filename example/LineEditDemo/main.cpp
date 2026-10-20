#include <QApplication>
#include <QWidget>

#include <Widgets/Button.h>
#include <Widgets/LineEdit.h>

class Demo : public QWidget
{
    Q_OBJECT
public:
    Demo(QWidget *parent = nullptr) : QWidget(parent)
    {
        auto lineEdit = new LineEdit(this);
        auto button   = new PushButton("按钮", this);
        auto textEdit = new TextEdit(this);

        resize(500, 500);
        textEdit->move(110, 200);
        lineEdit->move(110, 50);
        button->move(320, 50);

        lineEdit->resize(200, 33);
        lineEdit->setClearButtonEnabled(true);
    }
};

int main(int argc, char *argv[])
{
// enable dpi scale
#if (QT_VERSION > QT_VERSION_CHECK(5, 14, 0))
    QApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);
#endif
    #if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    #endif

    Q_INIT_RESOURCE(qfluentwidgets);

    QApplication a(argc, argv);
    Demo w;
    w.show();
    return a.exec();
}

#include "main.moc"
