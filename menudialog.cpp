#include "menudialog.h"
#include "ui_menudialog.h"
#include "quanlythongtin.h"
#include"quanlyketquahoctap.h"
#include"quanlylophoc.h"
#include "hoso.h"
#include"themlophoc.h"
#include "themthongtin.h"
#include "trangchu.h"

#include <QDesktopServices>
#include <QUrl>
menuDialog::menuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuDialog)
{
    ui->setupUi(this);
}

menuDialog::~menuDialog()
{
    delete ui;
}

void menuDialog::on_trangchu_clicked()
{
    QString link="https://www.haui.edu.vn/vn";
    QDesktopServices::openUrl(QUrl(link));
}

void menuDialog::on_quanlythongtin_clicked()
{
    themthongtin themtt;
    themtt.setModal(true);
    themtt.exec();
}
void menuDialog::on_quanlyketquahoctap_clicked()
{
    quanlyketquahoctap qlketquahoctap;
    qlketquahoctap.setModal(true);
    qlketquahoctap.exec();
}

void menuDialog::on_quanlythongtinlophoc_clicked()
{
    themlophoc themlh;
    themlh.setModal(true);
    themlh.exec();
}

void menuDialog::on_hoso_clicked()
{
    hoso qlhoso;
    qlhoso.setModal(true);
    qlhoso.exec();
}

void menuDialog::on_thoat_clicked()
{
    close();
}
