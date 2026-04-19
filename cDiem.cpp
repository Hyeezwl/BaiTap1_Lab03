#include "cDiem.h"
#include <cmath>
#include <iostream>
using namespace std;

cDiem::cDiem()
{
    //ctor
}

cDiem::~cDiem()
{
    //dtor
}
cDiem::cDiem(double _x, double _y){
    x = _x;
    y = _y;
}
void cDiem::Nhap(){
    cin >> x >> y;
}
void cDiem::Xuat(){
    cout << "(" << x << ", " << y << ")";
}
double cDiem::KhoangCach(cDiem DiemKhac){
    double hieuX = x - DiemKhac.x;
    double hieuY = y - DiemKhac.y;
    return sqrt(hieuX*hieuX + hieuY*hieuY);
}
double cDiem::getX(){
    return x;
}
double cDiem::getY(){
    return y;
}
void cDiem::setX(double _x){
    x = _x;
}
void cDiem::setY(double _y){
    y = _y;
}
void cDiem::TinhTien(double dx, double dy){
    x = x + dx;
    y = y + dy;
}
void cDiem::Quay(double goc){
    double x_moi = x * cos(goc) - y * sin(goc);
    double y_moi = y * sin(goc) + y * cos(goc);
    x = x_moi;
    y = y_moi;
}
