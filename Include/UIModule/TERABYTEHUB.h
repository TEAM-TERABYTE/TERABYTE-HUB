#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_main.h"

class TERABYTEHUB : public QMainWindow
{
    Q_OBJECT

public:
    TERABYTEHUB(QWidget *parent = nullptr);
    ~TERABYTEHUB();

private:
    Ui::TERABYTEHUBClass ui;
};
