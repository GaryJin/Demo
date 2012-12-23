#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Speech/SREngine.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    int m_tDelay;
    int m_tPreTime;
    bool m_bSoundEnd;
    bool m_bSoundStart;
    SREngine m_SREngine;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    LRESULT OnRecoEvent();
    
protected:
    virtual bool winEvent(MSG *,long *);

signals:        //�Զ����źţ�����Ҫ��cpp��ʵ��
    int SigRecEvent();

private slots:  //�Զ���ۣ������źţ���Ҫ��cpp��ʵ��
    void on_pushButtonStart_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
