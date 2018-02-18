#ifndef MAINMENU_H
#define MAINMENU_H

#include "Windows.h"
#include "WinGDI.h"
#include <QMainWindow>
#include <QSettings>
#include <QDesktopWidget>
#include <QScreen>
#include <QString>
#include <QDebug>
#include <QFontDatabase>
#include <QFont>
#include <QPushButton>
#include <QWidget>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();
    void setScreenResolution(int i);
    void changeBackground(int w, int h);

private slots:
    void on_quitButton_clicked();

private:
    Ui::MainMenu *ui;
    QSettings *settings;
};

#endif // MAINMENU_H
