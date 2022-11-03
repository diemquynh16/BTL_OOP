#pragma once
#include <iostream>
#include "MotorbikeBrand.h"
#include "Date.h"
#include "Motobike.h"
#include <string>
#include "GotoXY.h"
#include"Tokenizer.h"
#include<fstream>
using namespace std;


class QuanLyDanhMuc {
private:
	vector<MotorbikeBrand> _brands;
public:
	void writeDataToFile();
	vector<MotorbikeBrand> getBrand();

	void themTenHangXe(MotorbikeBrand brand);

	void SuaTenHangXe(string tenHangcu, string tenHangmoi);

	void XoaTenHangXe(string tenHang);

	bool isBrand(string tenHang);

	void DanhSachCacHangXe();

	void XemCacSanPham(string tenhang);

	void themXeMay(XeMay* xemay);

	void xoaXeMay(string tenhang, string tenxe);
	void suamotXemay();

	XeMay* TimKiemMotXeMay(string tenhang, string tenXe);

	void SanPhamSapHet(); // số lượng < 10

};
