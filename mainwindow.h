#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QUrl>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void updateUrlInBar(QUrl);
    void goToUrl();

private:
    Ui::MainWindow *ui;
    QLineEdit *urlBar;
};

#endif // MAINWINDOW_H
