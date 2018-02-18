#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QCoreApplication::setOrganizationName("Gymn#41");
    QCoreApplication::setOrganizationDomain("ftigo.org");
    QCoreApplication::setApplicationName("FtiGo");
    settings = new QSettings("GameSettings.ini", QSettings::IniFormat);
    deleteWrongResolutions();
    useSettings();
}

void Settings::useSettings()
{
    ui->language->setCurrentIndex(settings->value("UserSettings/language", 0).toInt());
    setLanguage();
    ui->fpsShow->setCurrentIndex(settings->value("GraphicSettings/fpsShow", 0).toInt());
    ui->textureQuality->setCurrentIndex(settings->value("GraphicSettings/textureQuality", 0).toInt());
    ui->screenResolution->setCurrentIndex(settings->value("GraphicSettings/screenResolution", 0).toInt());
    ui->nickname->setText(settings->value("UserSettings/nickname", "Player").toString());
    ui->nicknameLabel->setText(settings->value("UserSettings/nickname", "Player").toString());
    setScreenResolution(settings->value("GraphicSettings/screenResolution", 0).toInt());
}

void Settings::setLanguage()
{
    if(ui->language->currentIndex() == 0)
    {
        lang = new QSettings("russian_language.ini", QSettings::IniFormat);
    }

    if(ui->language->currentIndex() == 1)
    {
        lang = new QSettings("english_language.ini", QSettings::IniFormat);
    }

    ui->tabWidget->setTabText(0, lang->value("SettingsWindow/tab").toString());
    ui->tabWidget->setTabText(1, lang->value("SettingsWindow/tab_2").toString());
    ui->tabWidget->setTabText(2, lang->value("SettingsWindow/tab_3").toString());
    ui->label_2->setText(lang->value("SettingsWindow/label_2").toString());
    ui->label_3->setText(lang->value("SettingsWindow/label_3").toString());
    ui->label_4->setText(lang->value("SettingsWindow/label_4").toString());
    ui->label_5->setText(lang->value("SettingsWindow/label_5").toString());
    ui->label_6->setText(lang->value("SettingsWindow/label_6").toString());
    ui->label_7->setText(lang->value("SettingsWindow/label_7").toString());
    ui->screenResolution->setItemText(0, lang->value("SettingsWindow/ScreenResolution0").toString());
    ui->fpsShow->setItemText(0, lang->value("SettingsWindow/fpsShow0").toString());
    ui->fpsShow->setItemText(1, lang->value("SettingsWindow/fpsShow1").toString());
}

void Settings::setScreenResolution(int i)
{
    int w, h;
    if(i == 0)
    {
        w = settings->value("Standardts/ScreenWidth").toInt();
        h = settings->value("Standardts/ScreenHeight").toInt();
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
    emit changedScreenResolution(w, h);
}

void Settings::deleteWrongResolutions()
{
    if((settings->value("Standardts/ScreenWidth").toInt() < 800) || (settings->value("Standardts/ScreenHeight").toInt() < 600))
    {
        ui->screenResolution->removeItem(1);
        ui->screenResolution->removeItem(1);
        ui->screenResolution->removeItem(1);
        ui->screenResolution->removeItem(1);
        ui->screenResolution->removeItem(1);
        ui->screenResolution->removeItem(1);
        ui->screenResolution->removeItem(1);
    }

    else if((settings->value("Standardts/ScreenWidth").toInt() < 1024) || (settings->value("Standardts/ScreenHeight").toInt() < 600))
    {
        ui->screenResolution->removeItem(2);
        ui->screenResolution->removeItem(2);
        ui->screenResolution->removeItem(2);
        ui->screenResolution->removeItem(2);
        ui->screenResolution->removeItem(2);
        ui->screenResolution->removeItem(2);
    }

    else if((settings->value("Standardts/ScreenWidth").toInt() < 1024) || (settings->value("Standardts/ScreenHeight").toInt() < 768))
    {
        ui->screenResolution->removeItem(3);
        ui->screenResolution->removeItem(3);
        ui->screenResolution->removeItem(3);
        ui->screenResolution->removeItem(3);
        ui->screenResolution->removeItem(3);
    }

    else if((settings->value("Standardts/ScreenWidth").toInt() < 1280) || (settings->value("Standardts/ScreenHeight").toInt() < 720))
    {
        ui->screenResolution->removeItem(4);
        ui->screenResolution->removeItem(4);
        ui->screenResolution->removeItem(4);
        ui->screenResolution->removeItem(4);
    }

    else if((settings->value("Standardts/ScreenWidth").toInt() < 1366) || (settings->value("Standardts/ScreenHeight").toInt() < 768))
    {
        ui->screenResolution->removeItem(5);
        ui->screenResolution->removeItem(5);
        ui->screenResolution->removeItem(5);
    }

    else if((settings->value("Standardts/ScreenWidth").toInt() < 1920) || (settings->value("Standardts/ScreenHeight").toInt() < 1080))
    {
        ui->screenResolution->removeItem(6);
        ui->screenResolution->removeItem(6);
    }

    else if((settings->value("Standardts/ScreenWidth").toInt() < 3840) || (settings->value("Standardts/ScreenHeight").toInt() < 2160))
    {
        ui->screenResolution->removeItem(7);
    }
}
