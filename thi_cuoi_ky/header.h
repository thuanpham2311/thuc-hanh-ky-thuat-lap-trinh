#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// BÀI TẬP CUỐI KỲ
// 1. Viết hàm tìm số nguyên tố lớn nhất trong mảng một chiều các số nguyên. Nếu
// mảng không có số nguyên tố thì trả về giá trị -1.

const int MAX = 100;
struct DaySo {
  int list[MAX];
  int n;
};

int nhapSoNguyenDuong(int &n);
void nhapDaySo(DaySo &a);
bool kiemTraSoNguyenTo(int number);
int xuatSoNguyenToLonNhat(DaySo daySo);
// 2. Tìm giá trị xuất hiện nhiều nhất trong ma trận.
struct Matrix {
  int data[MAX][MAX];
  int row;
  int col;
};

void nhapMaTran(Matrix &matrix);
bool kiemTraCoSoLapLaiTrongMaTran(Matrix matrix);
int timGiaTriXuatHienNhieuNhat(Matrix matrix);
// 3. Viết hàm cho phép chuẩn hóa chuỗi.(xóa khoảng trắng đầu và cuối chuỗi,
// xóa những khoảng trắng dư thừa giữa các từ).
string chuanHoaChuoi(string &str);
// 4. Viết chương trình thực hiện các yêu cầu sau:
// a. Nhập mảng 1 chiều các vé xem phim (VE). Biết rằng một vé xem phim gồm
// những thành phần sau: ·  Tên phim: chuỗi tối đa 20 ký tự ·  Giá vé: kiểu
// số thực ·  Xuất chiếu: kiểu thời gian (giờ, phút: kiểu nguyên) ·  Ngày
// xem: kiểu ngày (ngày, tháng, năm: kiểu nguyên) b. Xuất mảng c. Tính tổng
// giá tiền của tất cả các vé trong mảng d. Tìm các phim có giá vé cao nhất
// e. Sắp xếp các phần tử trong mảng tăng dần theo ngày xem.
