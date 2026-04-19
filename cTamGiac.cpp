#include "cTamGiac.h"
#include <iostream>
#include <cmath>
using namespace std;

cTamGiac::cTamGiac()
{
    //ctor
}
cTamGiac::cTamGiac(cDiem _A, cDiem _B, cDiem _C)
{
    A = _A;
    B = _B;
    C = _C;
}
cTamGiac::~cTamGiac()
{
    //dtor
}
void cTamGiac::Nhap(){
    cout << "Nhap toa do dinh A cua tam giac: ";
    A.Nhap();
    cout << "Nhap toa do dinh B cua tam giac: ";
    B.Nhap();
    cout << "Nhap toa do dinh C cua tam giac: ";
    C.Nhap();
}
void cTamGiac::Xuat(){
    A.Xuat();
    cout << " - ";
    B.Xuat();
    cout << " - ";
    C.Xuat();
    cout << endl;
}
bool cTamGiac::KiemTraTamGiac(){
    double a = B.KhoangCach(C);
    double b = C.KhoangCach(A);
    double c = A.KhoangCach(B);

    if ((a + b > c) && (a + c > b) && (b + c > a)){
        return true;
    } else{
        return false;
    }
}
string cTamGiac::PhanLoaiTamGiac(){
    if (KiemTraTamGiac() == false){
        return "Khong phai tam giac";
    }

    double a = B.KhoangCach(C);
    double b = C.KhoangCach(A);
    double c = A.KhoangCach(B);

    if (abs(a - b) < 0.0001 && abs(b - c) < 0.0001) {
        return "Tam Giac Deu";
    }
    if (abs(a*a + b*b - c*c) < 0.0001 || abs(a*a + c*c - b*b) < 0.0001 || abs(b*b + c*c - a*a) < 0.0001) {
        if (abs(a - b) < 0.0001 || abs(a - c) < 0.0001 || abs(b - c) < 0.0001) {
            return "Tam Giac Vuong Can";
        } else {
            return "Tam Giac Vuong";
        }
    }
    if (abs(a - b) < 0.0001 || abs(a - c) < 0.0001 || abs(b - c) < 0.0001) {
        return "Tam Giac Can";
    }

    return "Tam Giac Thuong";
}
double cTamGiac::ChuVi(){
    if (KiemTraTamGiac() == false){
        cout << "Tam giac khong hop le";
        return 0;
    }
    double a = B.KhoangCach(C);
    double b = C.KhoangCach(A);
    double c = A.KhoangCach(B);
    return a + b + c;
}
double cTamGiac::DienTich(){
    if (KiemTraTamGiac() == false){
        cout << "Tam giac khong hop le";
        return 0;
    }

    double a = B.KhoangCach(C);
    double b = C.KhoangCach(A);
    double c = A.KhoangCach(B);
    double p = (a + b + c) / 2.0;

    return sqrt(p * (p - a) * (p - b) * (p - c)); //cong thuc heron
}
void cTamGiac::Quay(double goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}
void cTamGiac::TinhTien(double dx, double dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}
void cTamGiac::ThuPhong(double k) {
    A.setX(A.getX() * k);
    A.setY(A.getY() * k);

    B.setX(B.getX() * k);
    B.setY(B.getY() * k);

    C.setX(C.getX() * k);
    C.setY(C.getY() * k);
}
