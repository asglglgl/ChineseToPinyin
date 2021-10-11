#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString getChineseSpell(QString& src);
    bool In(wchar_t start, wchar_t end, wchar_t code);
    char Convert(int n);
    QString GetFirstLetter(const QString &src);
    QString GetFirstLetters(const QString &src);
    QString GetPinyins(const QString &text);
    QString GetPinyin(int code);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
