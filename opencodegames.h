#ifndef OPENCODEGAMES_H
#define OPENCODEGAMES_H

#include <QWidget>
#include <QtNetwork>
#include <QTcpSocket>

namespace Ui {
class OpenCodeGames;
}

class OpenCodeGames : public QWidget
{
    Q_OBJECT

public:
    explicit OpenCodeGames(QWidget *parent = 0);
    ~OpenCodeGames();
    void Connection(std::string text_string);
    void PlayerStatsConnect();
    void CenterDisp(int disposition);

private slots:
    void startRead();
    void on_HomeButton_clicked();
    void on_SettingsButton_clicked();
    void on_PlayButton_clicked();
    void on_QuitButton_clicked();
    void on_SSaveButton_clicked();
    void on_SCancelButton_clicked();

private:
    Ui::OpenCodeGames *ui;
    QHostAddress addr;
    QTcpSocket connection_info;
    QString username;
    QString token = "63253fa398dfa1e0c67d04e512f9d79f953bf074cd592dbcf9692a5e71e9ac0c";
    int LevelValue, ProgressValue, ProgressEnd, ProgressPercentual, Progress;
};

#endif // OPENCODEGAMES_H
