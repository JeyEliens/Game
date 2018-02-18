#ifndef SETTINGS_H
#define SETTINGS_H

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
class Settings;
}

class Settings : public QMainWindow
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();
    void useSettings();
    void setLanguage();
    void setScreenResolution(int i);
    void deleteWrongResolutions();

signals:
    void changedScreenResolution(int w, int h);

private:
    Ui::Settings *ui;
    QSettings *settings;
    QSettings *lang;
};

#endif // SETTINGS_H
