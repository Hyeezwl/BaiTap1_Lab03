#ifndef CDIEM_H
#define CDIEM_H


class cDiem
{
    public:
        cDiem();
        cDiem(double _x, double _y);
        ~cDiem();

        void Nhap();
        void Xuat();
        double KhoangCach(cDiem DiemKhac);

        // ham lay va sua gia tri x va y
        double getX();
        double getY();
        void setX(double _x);
        void setY(double _y);


        void TinhTien(double dx, double dy);
        void Quay(double goc);
    protected:

    private:
        double x,y;
};

#endif // CDIEM_H
