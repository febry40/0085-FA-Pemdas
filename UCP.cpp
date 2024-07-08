#include <iostream>
using namespace std;
class MataKuliah //abstraksi
{
private: //encapsulation
    float presensi;
    float activity;
    float exercise;
    float tugasakhir;

public:
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasakhir = 0.0;
        
    }
    virtual void namaMataKuliah() { return; } //polymorphy //abstraksi
    virtual void inputNilai() { return; }
    virtual void hitungNilaiAkhir() { return;}
    virtual void cekKelulusan() { return; }

    void setPresensi(float nilai) // getter and setter //abstraksi
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
    void setActivity(float nilai)
    {
        this->activity = nilai;
    }
    float getActivity()
    {
        return activity;
    }
    void setExercise(float nilai)
    {
        this->exercise = nilai;
    }
    float getExercise()
    {
        return exercise;
    }
    void setTugasAkhir(float nilai)
    {
        this->tugasakhir = nilai;
    }
    float getTugasAkhir()
    {
        return tugasakhir;
    }
};

class Pemrograman : public MataKuliah //inheritance
{
public:
    void inputNilai() override {
        float presensi, activity, exercise, tugasakhir;
        cout << "Masukkan nilai presensi: ";
        cin >> presensi;
        setPresensi(presensi);
        cout << "Masukkan nilai activity: ";
        cin >> activity;
        setActivity(activity);
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
        setExercise(exercise);
        cout << "Masukkan nilai tugasakhir: ";
        cin >> tugasakhir;
        setTugasAkhir(tugasakhir);
    }

    void hitungNilaiAkhir() override {
        cout " Nilai Akhir: ";
    }

    void cekKelulusan() override {
        cout " Selamat anda dinyatakan Lulus"
    }
};

class Jaringan : public MataKuliah //inheritance
{
    void inputNilai() override {
        cout << "Masukkan nilai activity: ";
        cin >> activity;
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
    }

    void hitungNilaiAkhir() override {
        cout " Nilai Akhir: ";
    }
       
    void cekKelulusan() override {
        cout "Anda dinyatakan Tidak Lulus";
    }
};

int main()
{
    char pilih;
    MataKuliah *matakuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;

    MataKuliah* MataKuliah1 = new Pemrograman();
    MataKuliah* MataKuliah2 = new Jaringan;

    cout << "Input data untuk Memilih Pemrograman:\n";
    MataKuliah1->inputNilai();
    cout << "Input data untuk Memilih Jaringan:\n";
    MataKuliah2->inputNilai();

    cout << "Masukkan nilai presensi: " << MataKuliah1->getPresensi() << "\n";
    cout << "Masukkan nilai activity: " << MataKuliah1->getActivity() << "\n";
    cout << "Masukkan nilai exercise: " << MataKuliah1->getExercise() << "\n";
    cout << "Masukkan nilai tugas akhir: " << MataKuliah1->getTugasAkhir() << "\n";
    cout << "Nilai Akhir: " MataKuliah1->hitungNilaiAkhir() << "\n";
    cout << "Selamat anda dinyatakan Lulus " MataKuliah1->cekKelulusan() << "\n";

    cout << "Masukkan nilai activity: " << MataKuliah2->getActivity() << "\n";
    cout << "Masukkan nilai exercise: " << MataKuliah2->getExercise() << "\n";
    cout << "Nilai Akhir: "  MataKuliah2->hitungNilaiAkhir();
    cout << "Anda dinyatakan Tidak Lulus" MataKuliah2->cekKelulusan();

    delete MataKuliah1;
    delete MataKuliah2;


}   