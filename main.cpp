#include <iostream>
#include "cTamGiac.h"

using namespace std;

int main() {
    cTamGiac tamgiac;

    tamgiac.Nhap();

    if (tamgiac.KiemTraTamGiac() == true) {
        cout << "\nBa diem vua nhap tao thanh mot tam giac." << endl;

        cout << "Toa do 3 dinh la: ";
        tamgiac.Xuat();

        cout << "Loai tam giac: " << tamgiac.PhanLoaiTamGiac() << endl;
        cout << "Chu vi: " << tamgiac.ChuVi() << endl;
        cout << "Dien tich: " << tamgiac.DienTich() << endl;

        cout << endl;

        tamgiac.TinhTien(2, 3);
        cout << "Sau khi tinh tien (cong them x=2, y=3): ";
        tamgiac.Xuat();

        tamgiac.ThuPhong(2);
        cout << "Sau khi thu phong (nhan 2 lan toa do): ";
        tamgiac.Xuat();

    } else {
        cout << "\nBa diem ban nhap khong tao thanh mot tam giac!" << endl;
    }

    return 0;
}
