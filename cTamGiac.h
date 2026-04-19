#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "cDiem.h"
#include <string>
#include <iostream>

using namespace std;

class cTamGiac
{
    public:
        cTamGiac();
        virtual ~cTamGiac();
        cTamGiac(cDiem _A, cDiem _B, cDiem _C);

        void Nhap();
        void Xuat();
        bool KiemTraTamGiac();
        string PhanLoaiTamGiac();
        double ChuVi();
        double DienTich();

        void Quay(double goc);
        void TinhTien(double X, double Y);
        void ThuPhong(double k);
    protected:

    private:
        cDiem A;
        cDiem B;
        cDiem C;
};

#endif // CTAMGIAC_H
