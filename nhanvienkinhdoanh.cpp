#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "nhanvien.cpp"

class NhanVienKinhDoanh : public NhanVien
{
private:
    double DoanhSo;

public:
    NhanVienKinhDoanh(string HoTen = "", int NamSinh = 0,
                      string MaNV = "", double LuongCoBan = 0,
                      double DoanhSo = 0);

    double TinhLuong();

    void xuat();
};
NhanVienVanPhong::NhanVienVanPhong(string HoTen, int NamSinh,
                                   string MaNV, double LuongCoBan,
                                   int SoNgayLamViec)
    : Nguoi(HoTen, NamSinh),
      NhanVien(HoTen, NamSinh, MaNV, LuongCoBan)
{
    this->SoNgayLamViec = SoNgayLamViec;
}

double NhanVienVanPhong::TinhLuong()
{
    return LuongCoBan + SoNgayLamViec * 200000;
}

void NhanVienVanPhong::xuat()
{
    NhanVien::xuat();
    cout << "So ngay lam viec: " << SoNgayLamViec << endl;
    cout << fixed << setprecision(0);
    cout << "Luong: " << TinhLuong() << endl;
}
