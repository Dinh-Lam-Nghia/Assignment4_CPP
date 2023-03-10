#include <iostream> 
#include "./nhanvien.cpp"
using namespace std; 

int main(int argc, char const *argv[])
{
    // string a, b, c, d;
    // cout << "nhap thong tin nhan vien: \n";
    // cout << "name: "; cin >> a;
    // cout << "ID: "; cin >> b;
    // cout << "department: "; cin >> c;
    // cout << "position: "; cin >> d;

    NhanVien NV1();

    NhanVien NV2("1", "2");

    NhanVien NV3("1", "2", "3");

    NhanVien NV4("1", "2", "3", "4");

    NV2.input();
    NV3.input();
    NV4.input();
    return 0;
}
