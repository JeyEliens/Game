#ifndef STARTLOGO_H
#define STARTLOGO_H

#include <QMainWindow>
#include <QMovie>
#include <QString>
#include <QKeyEvent>
#include <QDebug>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QGraphicsView>
#include <QDesktopWidget>
#include <QtWidgets>
#include <QGraphicsVideoItem>
#include "../Menu/mainmenu.h"

namespace Ui {
class StartLogo;
}

class StartLogo : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartLogo(QWidget *parent = 0);
    ~StartLogo();
    void showLogo();
    void openMainMenu();
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::StartLogo *ui;
    MainMenu *mainMenu;
    QMovie *movie;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
};

#endif // STARTLOGO_H
