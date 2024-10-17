#include "MyForm.h"
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Phys25::MyForm form;
    Application::Run(% form);
}

double Phys25::MyForm::f(double x, double v, double t)
{
    if (v > 0) ftr = -n * g;
    else ftr = n * g;

    return -w0 * w0 * x - 2 * b * v + ftr + (f0/m) * sin(w * t);
}

void Phys25::MyForm::DefaultParams()
{
    k = 1, r = 0.1, n = 0, m =0.5, g = 9.81, f0 = 0.5, w = 1, d = 1, l = 5, v0 = 1, x0 = 0, dt = 0.05, tmax = 100;
    ym = 0.2, wpr = 0.9; //Параметры отвечающие за загагулины пружины 
}

void Phys25::MyForm::RK()
{
    stop = false;
    h = int(tmax / dt)+2;
    x = new double[h+1];
    v = new double[h+1];
    ti = new double[h+1];
    wrpr = new double[h+1];
    v1 = 0;
    AA = false;
    Lpr = 0, Ltr = 0,  T = 0, t1 = 0, t2 = 0;
    A1 = A2 = 1;
    
    v[0] = v0;
    x[0] = x0;
    ti[0] = 0;

    double koef[4];
    int i = 0;

    b = r / m;
    w0 = sqrt(2 * k / m);

    //График резонансной кривой практический
    wrpr[count] = w;
    A = f0 / (m * sqrt(pow(w0 * w0 - wrpr[count] * wrpr[count], 2) + 4 * b * b * wrpr[count] * wrpr[count]));
    this->chart5->Series[0]->Points->AddXY(wrpr[count], A);

    //График резонансной кривой теоретический 
    for (double wi = 0; wi < w0; wi += 0.2)
    {
        A = f0 / (m * sqrt(pow(w0 * w0 - wi * wi, 2) + 4 * b * b * wi * wi));
        this->chart1->Series[0]->Points->AddXY(wi, A);
    }
    for (double wi = w0+0.2; wi < 10; wi += 0.2)
    {
        A = f0 / (m * sqrt(pow(w0 * w0 - wi * wi, 2) + 4 * b * b * wi * wi));
        this->chart1->Series[0]->Points->AddXY(wi, A);
    }

    // Рассчет координаты и скорости методом Рунге-Кутта
    do
    {
        ti[i + 1] = ti[i] + dt;

        koef[0] = f(x[i], v[i], ti[i]) * dt;
        koef[1] = f(x[i] + v[i] * dt / 2, v[i] + koef[0] / 2, ti[i] + dt / 2) * dt;
        koef[2] = f(x[i] + (v[i] * dt / 2) + koef[0] * dt / 4, v[i] + koef[1] / 2, ti[i] + dt / 2) * dt;
        koef[3] = f(x[i] + v[i] * dt + koef[1] * dt / 2, v[i] + koef[2], ti[i ] + dt) * dt;

        // Новое значение координаты
        x[i + 1] = x[i] + v[i] * dt + (1.0 / 6.0) * (koef[0] + koef[1] + koef[2]) * dt;
        v1 = v[i] + (1.0 / 6.0) * (koef[0] + 2 * koef[1] + 2 * koef[2] + koef[3]);

        // Проверка на столкновение со стенами
        if (x[i + 1] >= l - d)
        {
            x[i + 1] = l - d; // Ограничиваем x, чтобы он не выходил за стену
            v[i + 1] = -v1; // Отражаем скорость
        }
        else if (x[i + 1] <= -(l - d))
        {
            x[i + 1] = -(l - d); // Ограничиваем x, чтобы он не выходил за стену
            v[i + 1] = -v1; // Отражаем скорость
        }
        else
        {
            v[i + 1] = v1;
        }

        // Отрисовка пружины
        double spring_length = x[i]; // Длина пружины зависит от положения шара
        int num_coils = 70; // Количество витков пружины
        double dx1 = (l - spring_length - d) / num_coils; // Интервал между витками по y
        double dx2 = (-l - spring_length + d) / num_coils; // Интервал между витками по y

        for (int j = 0; j <= num_coils; j++)
        {
            double x_pos1 = l - j * dx1;
            double x_pos2 = -l - j * dx2;
            double y_spring = ym * asin(sin(wpr * j)) + d / 2; // Эмитация загагулин пружины
            this->chart->Series[4]->Points->AddXY(x_pos1, y_spring);
            this->chart->Series[5]->Points->AddXY(x_pos2, y_spring);
        }

        // Отрисовка бруска
        for (double j = 0; j <= d; j += 0.01)
        {
            this->chart->Series[3]->Points->AddXY(-d + x[i+1], j);
            this->chart->Series[3]->Points->AddXY(d + x[i+1], j);
        }

        //Рассчет резонансной частоты 
        wr = sqrt(w0 * w0 - 2 * b * b);
        if (f0!= 0) textBox_wr->Text = Convert::ToString(wr);
   
        this->chartx->Series[0]->Points->AddXY(ti[i], x[i + 1]); //график координаты 
        this->chartv->Series[0]->Points->AddXY(ti[i], v[i + 1]); //график скорости

        Ep = k * x[i+1] * x[i+1];
        Ek = m * v[i+1] * v[i+1] / 2;
        E = Ek + Ep;
        this->chart2->Series[0]->Points->AddXY(ti[i], Ep);
        this->chart3->Series[0]->Points->AddXY(ti[i], Ek);
        this->chart4->Series[0]->Points->AddXY(ti[i], E);


       
        if (x[i + 1] < x[i] && !AA) //Поиск максимума
        {
            A1 = A2;
            A2 = x[i];
            t1 = t2;
            t2 = ti[i];
            AA = true;
            if (A1 != 1)
            {
                Lpr = log(A1 / A2);
                T = t2 - t1;
                textBox_T->Text = Convert::ToString(round(T * 10000) / 10000);
                if (b != 0 && n == 0 && f0 == 0)
                {
                    Ltr = b * T;
                    textBox_L1->Text = Convert::ToString(round(Lpr * 1000) / 1000);
                    textBox_L2->Text = Convert::ToString(round(Ltr * 100000) / 100000);
                }
            }
        }
        if (x[i + 1] > x[i] && AA) AA = false;
        Application::DoEvents();
        if (stop) break;
        this->chart->Series[3]->Points->Clear();
        this->chart->Series[4]->Points->Clear();
        this->chart->Series[5]->Points->Clear();
        // System::Threading::Thread::Sleep(10);
        i++;
    } while (ti[i] <= tmax && !stop);

}

System::Void Phys25::MyForm::стартToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chart->Series[0]->Points->Clear();
    this->chart->Series[1]->Points->Clear();
    this->chart->Series[2]->Points->Clear();
    this->chart->Series[3]->Points->Clear();
    this->chart->Series[4]->Points->Clear();
    this->chart->Series[5]->Points->Clear();
    this->chartx->Series[0]->Points->Clear();
    this->chartv->Series[0]->Points->Clear();
    this->chart1->Series[0]->Points->Clear();
    this->chart2->Series[0]->Points->Clear();
    this->chart3->Series[0]->Points->Clear();
    this->chart4->Series[0]->Points->Clear();

    if (textBox_x0->Text == "" || textBox_v0->Text == "" || textBox_m->Text == "" || 
        textBox_k->Text == "" || textBox_n->Text == "" || textBox_d->Text == "" || 
        textBox_l->Text == "" || textBox_w->Text == "" || textBox_f0->Text == "" || 
        textBox_r->Text == "" || textBox_dt->Text == "" || textBox_t_max->Text == "")
    {
        //Проверка на пустые поля, если пыстые замена на дефолтные параметры 
        DefaultParams();
        textBox_x0->Text = Convert::ToString(x0);
        textBox_v0->Text = Convert::ToString(v0);
        textBox_m->Text = Convert::ToString(m);
        textBox_k->Text = Convert::ToString(k);
        textBox_n->Text = Convert::ToString(n);
        textBox_l->Text = Convert::ToString(l);
        textBox_w->Text = Convert::ToString(w);
        textBox_f0->Text = Convert::ToString(f0);
        textBox_r->Text = Convert::ToString(r);
        textBox_d->Text = Convert::ToString(d);
        textBox_dt->Text = Convert::ToString(dt);
        textBox_t_max->Text = Convert::ToString(tmax);

    }
    else
    {
        //Иначе вводим сами начальные значения 
        x0 = Convert::ToDouble(textBox_x0->Text);
        v0 = Convert::ToDouble(textBox_v0->Text);
        m = Convert::ToDouble(textBox_m->Text);
        k = Convert::ToDouble(textBox_k->Text);
        n = Convert::ToDouble(textBox_n->Text);
        l = Convert::ToInt32(textBox_l->Text);
        w = Convert::ToDouble(textBox_w->Text);
        f0 = Convert::ToDouble(textBox_f0->Text);
        r = Convert::ToDouble(textBox_r->Text);
        d = Convert::ToDouble(textBox_d->Text);
        dt = Convert::ToDouble(textBox_dt->Text);
        tmax = Convert::ToInt32(textBox_t_max->Text);
    }

    chart->ChartAreas[0]->AxisX->Maximum = l+2;
    chart->ChartAreas[0]->AxisX->Minimum = -(l+2);
    chart->ChartAreas[0]->AxisY->Maximum = l+3;
    chart->ChartAreas[0]->AxisY->Minimum = -0.1;

    //Отрисовка пола
    for (double floor = -l; floor <= l; floor++)
    {
        this->chart->Series[0]->Points->AddXY(floor, 0);
    }
    //Отрисовка пола
    for (int wall = 0; wall <= d; wall++)
    {
        this->chart->Series[1]->Points->AddXY(-l, wall);
        this->chart->Series[2]->Points->AddXY(l, wall);
    }

    delete[] x;
    delete[] v;
    delete[] ti;
    count++;
    RK();
}

System::Void Phys25::MyForm::стопToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    stop = true;
}


