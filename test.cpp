#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CauThu
{
private:
    string TenCauThu, ViTriDa;
    int SoAo;
public:
    CauThu(string ten = "", string vitri = "", int so = 0): TenCauThu(ten), ViTriDa(vitri), SoAo(so) {}
    void Nhap()
    {
        cin.ignore();
        cout << "Ten cau thu: ";
        getline(cin, TenCauThu);
        cout << "Vi tri da: ";
        getline(cin, ViTriDa);
        cout << "So ao: ";
        cin >> SoAo;
    }
    void Xuat()
    {
        cout << "Ten: " << TenCauThu << endl;
        cout << "Vi tri: " << ViTriDa << endl;
        cout << "So ao: " << SoAo << endl;
    }
};

class DoiBong
{
private:
    vector<CauThu> dsCT;
    string ten_doi, ten_hlv;
    int tong_diem, so_tran_da, tran_thang, tran_thua, tran_hoa, ban_thang, ban_thua, hieu_so;
public:
    DoiBong(string ten_d = "", string ten_h = "", int tong = 0, int so_tran = 0, int thang = 0, int thua = 0, int hoa = 0, int ban_win = 0, int ban_lose = 0, int hieu = 0):
    ten_doi(ten_d), ten_hlv(ten_h), tong_diem(tong), so_tran_da(so_tran), tran_thang(thang), tran_thua(thua), tran_hoa(hoa), ban_thang(ban_win), ban_thua(ban_lose), hieu_so(hieu) {}
    void Nhap()
    {
        cin.ignore();
        cout << "Nhap ten doi: ";
        getline(cin, ten_doi);
        cout << "Nhap ten HLV: ";
        getline(cin, ten_hlv);
        int n;
        cout << "Nhap so cau thu: ";
        cin >> n;
        dsCT.resize(n);
        for(int i = 0; i < dsCT.size(); i++)
        {
            dsCT[i].Nhap();
        }
    }
    void Xuat()
    {
        cout << "Ten doi: " << ten_doi << endl;
        cout << "Ten HVL: " << ten_hlv << endl;
        for(int i = 0; i < dsCT.size(); i++)
        {
            dsCT[i].Xuat();
        }
    }
    void CongTranThang(int tran)
    {
        tran_thang += tran;
    }
    void CongTranThua(int tran)
    {
        tran_thua += tran;
    }
    void CongTranHoa(int tran)
    {
        tran_hoa += tran;
    }
    void CongDiem(int diem)
    {
        tong_diem += diem;
    }
    void Congbanthang(int ban)
    {
        ban_thang += ban;
    }
    void Congbanthua(int ban)
    {
        ban_thua += ban;
    }
    int HieuSo()
    {
        return ban_thang - ban_thua;
    }
};

class TranDau
{
private:
    DoiBong a, b;
public:
    void NhapKetQua(int ban_thang_a, int ban_thang_b)
    {
        if(ban_thang_a > ban_thang_b)
        {
            a.CongDiem(3);
            a.CongTranThang(1);
            a.Congbanthang(ban_thang_a);
            a.Congbanthua(ban_thang_b);
            b.CongDiem(0);
            b.CongTranThua(1);
            b.Congbanthang(ban_thang_b);
            b.Congbanthua(ban_thang_a);
        }
        else if(ban_thang_a < ban_thang_b)
        {
            b.CongDiem(3);
            b.CongTranThang(1);
            b.Congbanthang(ban_thang_a);
            b.Congbanthua(ban_thang_b);
            a.CongDiem(0);
            a.CongTranThua(1);
            a.Congbanthang(ban_thang_b);
            a.Congbanthua(ban_thang_a);
        }
        else
        {
            a.CongDiem(1);
            b.CongDiem(1);
            a.Congbanthang(ban_thang_a);
            a.Congbanthua(ban_thang_b);
            b.Congbanthang(ban_thang_b);
            b.Congbanthua(ban_thang_a);
            a.CongTranHoa(1);
            b.CongTranHoa(1);
        }
    }
};

class GiaiDau
{
private:
    vector <DoiBong> ds;
public:
    GiaiDau() {}
    void nhapDsDoi()
    {
        int n;
        cout << "So doi: ";
        cin >> n;
        ds.resize(n);
        for(int i = 0; i < ds.size(); i++)
        {
            ds[i].Nhap();
        }
    }
    
};

int main()
{
    int n;
    cin >> n;
    cout << "nhap doi bong: ";
    return 0;
}