#include "startlogo.h"
#include "ui_startlogo.h"

StartLogo::StartLogo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartLogo)
{
    ui->setupUi(this);
    showLogo(); //Запуск функции, которая покажет лого
}

StartLogo::~StartLogo()
{
    delete ui;
}

void StartLogo::showLogo() //Реализовано пьяными индусами, т.к. нормальная реализация дает фигу
{
    movie = new QMovie("D:/Qt Projects/build-FtiGo-Desktop_Qt_5_6_2_MinGW_32bit-Debug/debug/StartLogo.gif");
    movie->setScaledSize(QSize(qApp->desktop()->width(), qApp->desktop()->height()));
    ui->label->setMovie(movie);
    ui->label->setGeometry(0, 0, qApp->desktop()->width(), qApp->desktop()->height());
    movie->start();

    /*player = new QMediaPlayer(this);

    QGraphicsVideoItem *item = new QGraphicsVideoItem;
    player->setVideoOutput(item);
    ui->graphicsView->scene()->addItem(item);
    ui->graphicsView->show();

    player->setMedia(QUrl::fromLocalFile("FtiGo_StartLogo.mp4"));
    player->play();*/

    /*player = new QMediaPlayer;

    playlist = new QMediaPlaylist(player);
    playlist->addMedia(QUrl("http://example.com/myclip1.mp4"));
    playlist->addMedia(QUrl("http://example.com/myclip2.mp4"));

    videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);

    videoWidget->show();
    playlist->setCurrentIndex(1);
    player->play();*/
}

void StartLogo::keyPressEvent(QKeyEvent *event) //При нажатии на пробел откроется главное меню
{
  switch (event->key()) {
    case Qt::Key_Space:
        openMainMenu();
    default:
      QWidget::keyPressEvent(event);
  }
}

void StartLogo::openMainMenu() //Функция открытия главного меню
{
    mainMenu = new MainMenu(this);
    this->close();
    mainMenu->showFullScreen();
}
