#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    settings = new QSettings("GameSettings.ini", QSettings::IniFormat);
    settings->setValue("BeforeStart/ScreenWidth", qApp->desktop()->width());
    settings->setValue("BeforeStart/ScreenHeight", qApp->desktop()->height());
    setScreenResolution(settings->value("GraphicSettings/screenResolution", 0).toInt());
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_quitButton_clicked() //When quitButton is clicked closes app and set standard screen resolution
{
    this->close();
    setScreenResolution(0);
}

void MainMenu::setScreenResolution(int i) //Sets screen resolution
{
    int w, h;
    if(i == 0)
    {
        w = settings->value("BeforeStart/ScreenWidth").toInt();
        h = settings->value("BeforeStart/ScreenHeight").toInt();
    }
    if(i == 1)
    {
        w = 800;
        h = 600;
    }
    if(i == 2)
    {
        w = 1024;
        h = 600;
    }
    if(i == 3)
    {
        w = 1024;
        h = 768;
    }
    if(i == 4)
    {
        w = 1280;
        h = 720;
    }
    if(i == 5)
    {
        w = 1366;
        h = 768;
    }
    if(i == 6)
    {
        w = 1920;
        h = 1080;
    }
    if(i == 7)
    {
        w = 3840;
        h = 2160;
    }

    DEVMODE devmode;
    devmode.dmPelsWidth = w;
    devmode.dmPelsHeight = h;
    devmode.dmFields = DM_PELSWIDTH | DM_PELSHEIGHT;
    devmode.dmSize = sizeof(DEVMODE);

    long result = ChangeDisplaySettings(&devmode, 0);
    qDebug() << "RESULT OF CHANGE DISPLAY :"<< result;
    changeBackground(w, h);
}

void MainMenu::changeBackground(int w, int h) //Moves and resizes buttons after changing of screen resolution, also changes font size
{
    ui->background->resize(w, h);
    ui->background->setPixmap(QPixmap(":/mainmenu/menu_background.jpeg").scaled(w, h));
    QFont resizedFont = ui->newGameButton->font();
    resizedFont.setPointSize(h / 32);

    ui->newGameButton->setGeometry(0, (h - (5 * (h / 16))), (w / 7.95), (h / 16));
    ui->newGameButton->setFont(resizedFont);

    ui->loadGameButton->setGeometry((w / 15.9), (h - (4 * (h / 16))), (w / 7.95), (h / 16));
    ui->loadGameButton->setFont(resizedFont);

    ui->settingsButton->setGeometry((w / 7.95), (h - (3 * (h / 16))), (w / 7.95), (h / 16));
    ui->settingsButton->setFont(resizedFont);

    ui->aboutButton->setGeometry((3 * (w / 15.9)), (h - (2 * (h / 16))), (w / 7.95), (h / 16));
    ui->aboutButton->setFont(resizedFont);

    ui->quitButton->setGeometry((2 * (w / 7.95)), (h - (h / 16)), (w / 7.95), (h / 16));
    ui->quitButton->setFont(resizedFont);

    ui->version->setGeometry(0, (h - (h / 22.857)), (w / 6), (h / 22.857));
    resizedFont.setPointSize(h / 45.714);
    ui->version->setFont(resizedFont);
}
