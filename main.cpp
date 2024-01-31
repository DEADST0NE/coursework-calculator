#include <graphics.h>
#include <math.h>
#define PI 3.14159265
class Knop {
  int x1, y1, x2, y2, t, c, i, y;

 public:
  Knop(int xx1, int yy1, int xx2, int yy2, inttt, int cc, int ii, intyy,
       char aa[4]) {
    x1 = xx1;
    y1 = yy1;
    x2 = xx2;
    y2 = yy2;
    t = tt;
    c = cc;
    i = ii;
    y = yy;
    char tmp[4] = {aa[0], aa[1], aa[2], '\0'};
    setfillstyle(1, 4);           //Цветпаралепипеда
    bar3d(x1, y1, x2, y2, t, c);  // выводпаралепипеда
    outtextxy(i, y, tmp);  //вывод сивола на паралепипеде
  }
  Knop(char B[32], intx, int y)  //Символывывода
  {
    outtextxy(x, y, B);  // вывод символов
  }
  Knop(float A, intx, int y)  //Символывывода
  {
    charB[32];  //
    sprintf(B, "%f", A);  // перевод из вешественого в символьный
    outtextxy(x, y, B);  // вывод символов
  }
};

int main() {
  system("CLS");
  intgdriver = DETECT, gmode, errorcode;  //Дляработыграфики
  initgraph(&gdriver, &gmode, "");        //Дляработыграфики

  setfillstyle(1, 4);

  rectangle(20, 20, 285, 95);

  Knop op15(20, 115, 60, 135, 7, 1, 29, 117, "sqrt");
  Knop op16(70, 115, 110, 135, 7, 1, 78, 117, "sin");
  Knop op17(130, 115, 170, 135, 7, 1, 138, 117, "cos");
  Knop op18(190, 115, 230, 135, 7, 1, 198, 117, "tan");
  Knop op19(240, 115, 280, 135, 7, 1, 248, 117, "x^2");

  Knop op7(20, 150, 70, 200, 7, 1, 40, 165, "7");
  Knop op8(90, 150, 140, 200, 7, 1, 110, 165, "8");
  Knop op9(160, 150, 210, 200, 7, 1, 180, 165, "9");
  Knop op12(230, 150, 280, 200, 7, 1, 250, 165, "/");

  Knop op4(20, 220, 70, 270, 7, 1, 40, 235, "4");
  Knop op5(90, 220, 140, 270, 7, 1, 110, 235, "5");
  Knop op6(160, 220, 210, 270, 7, 1, 180, 235, "6");
  Knop op13(230, 220, 280, 270, 7, 1, 250, 235, "*");

  Knop op1(20, 290, 70, 340, 7, 1, 40, 305, "1");
  Knop op2(90, 290, 140, 340, 7, 1, 110, 305, "2");
  Knop op3(160, 290, 210, 340, 7, 1, 180, 305, "3");
  Knop op20(230, 290, 280, 340, 7, 1, 250, 305, "-");

  Knop op0(20, 360, 70, 410, 7, 1, 40, 375, "C");
  Knop op10(90, 360, 140, 410, 7, 1, 110, 375, "0");
  Knop op11(160, 360, 210, 410, 7, 1, 180, 375, ".");
  Knop op21(230, 360, 280, 410, 7, 1, 250, 375, "+");

  Knop op14(20, 430, 280, 480, 7, 1, 150, 447, "=");

  Knop op22(235, 525, 285, 575, 7, 1, 250, 540, "OFF");

  char mass3[] = {'E', 'r', 'o', 'r'};
  int x, y, q = 0, w = 0;
  char a = 0;

  char mass[20];
  for (inti = 0; i < 20; i++) {
    mass[i] = 0;
  }

  char mass2[20];
  for (inti = 0; i < 20; i++) {
    mass2[i] = 0;
  }

  float f1 = 0;
  float f2 = 0;

  for (;;) {
    while (!ismouseclick(WM_LBUTTONDOWN))  //Реакциянанажатия
    {
      delay(50);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);

    if (235 < x && x < 285 && 525 < y && y < 575)  // off
    {
      a = 'F';
      if (a == 'F') {
        return 0;
      }
    }

    if (20 < x && x < 80 && 150 < y && y < 200)  // 7
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '7';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '7';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (90 < x && x < 150 && 150 < y && y < 200)  // 8
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '8';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '8';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (160 < x && x < 220 && 150 < y && y < 200)  // 9
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '9';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '9';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (230 < x && x < 290 && 150 < y && y < 200)  // /
    {
      a = '/';
      chartmp[3] = {a, '\0'};
      Knop pb(tmp, 270, 45);
    }
    if (20 < x && x < 80 && 220 < y && y < 270)  // 4
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '4';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '4';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (90 < x && x < 150 && 220 < y && y < 270)  // 5
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '5';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '5';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (160 < x && x < 220 && 220 < y && y < 270)  // 6
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '6';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '6';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (230 < x && x < 290 && 220 < y && y < 270)  //*
    {
      a = '*';
      chartmp[3] = {a, '\0'};
      Knop pb(tmp, 270, 45);
    }
    if (20 < x && x < 80 && 290 < y && y < 340)  // 1
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '1';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '1';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (90 < x && x < 150 && 290 < y && y < 340)  // 2
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '2';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '2';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (160 < x && x < 210 && 290 < y && y < 340)  // 3
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '3';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '3';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (230 < x && x < 290 && 290 < y && y < 340)  //-
    {
      a = '-';
      chartmp[3] = {a, '\0'};
      Knop pb(tmp, 270, 45);
    }
    if (20 < x && x < 80 && 360 < y && y < 410)  // с
    {
      a = 0;
      w = 0;
      q = 0;
      f1 = 0;
      f2 = 0;
      for (inti = 0; i < 15; i++) {
        mass[i] = ' ';
      }

      for (inti = 0; i < 15; i++) {
        mass2[i] = ' ';
      }

      Knop pb(mass, 25, 25);
      Knop pb1(mass2, 25, 50);
      Knop ra(f1, 25, 75);
      chartmp[3] = {' ', ' ', '\0'};
      Knop pb2(tmp, 270, 45);

      for (inti = 0; i < 20; i++) {
        mass[i] = 0;
      }

      for (inti = 0; i < 20; i++) {
        mass2[i] = 0;
      }
    }
    if (90 < x && x < 150 && 360 < y && y < 410)  // 0
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '0';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '0';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (160 < x && x < 220 && 360 < y && y < 410)  //,
    {
      if (a == '+' || a == '-' || a == '/' || a == '*') {
        mass2[w] = '.';
        w++;
        Knop pb(mass2, 25, 50);
      } else {
        mass[q] = '.';
        q++;
        Knop pb(mass, 25, 25);
      }
    }
    if (230 < x && x < 290 && 360 < y && y < 410)  //+
    {
      a = '+';
      chartmp[3] = {a, '\0'};
      Knop pb(tmp, 270, 45);
    }
    if (20 < x && x < 290 && 430 < y && y < 480)  //=
    {
      if (a == '+') {
        f1 = strtof(mass, NULL);
        f2 = strtof(mass2, NULL);
        f1 = f1 + f2;
        std::cout << f1;
        Knop ra(f1, 25, 75);
      }
      if (a == '-') {
        f1 = strtof(mass, NULL);
        f2 = strtof(mass2, NULL);
        f1 = f1 - f2;
        Knop ra(f1, 25, 75);
      }
      if (a == '*') {
        f1 = strtof(mass, NULL);
        f2 = strtof(mass2, NULL);
        f1 = f1 * f2;
        Knop ra(f1, 25, 75);
      }
      if (a == '/') {
        f1 = strtof(mass, NULL);
        f2 = strtof(mass2, NULL);
        if (f1 == 0 || f2 == 0) {
          Knop pb(mass3, 25, 50);
        } else {
          f1 = f1 / f2;
          Knop ra(f1, 25, 75);
        }
      }
      if (a == 's') {
        f1 = strtof(mass, NULL);
        f1 = sin(f1 * PI / 180);
        Knop ra(f1, 25, 75);
      }
      if (a == 't') {
        f1 = strtof(mass, NULL);
        f1 = tan(f1 * PI / 180);
        Knop ra(f1, 25, 75);
      }
      if (a == 'c') {
        f1 = strtof(mass, NULL);
        f1 = cos(f1 * PI / 180);
        Knop ra(f1, 25, 75);
      }
      if (a == 'q') {
        f1 = strtof(mass, NULL);
        if (f1 == 0) {
          Knop pb(mass3, 25, 50);
        } else
          f1 = sqrt(f1);
        Knop ra(f1, 25, 75);
      }
      if (a == 'x') {
        f1 = strtof(mass, NULL);
        f1 = f1 * f1;
        Knop ra(f1, 25, 75);
      }
    }
    if (190 < x && x < 235 && 115 < y && y < 135)  // tan
    {
      a = 't';
      chartmp[4] = {'t', 'a', 'n', '\0'};
      Knop pb(tmp, 250, 45);
    }
    if (20 < x && x < 65 && 115 < y && y < 135)  // qqrt
    {
      a = 'q';
      chartmp[5] = {'s', 'q', 'r', 't', '\0'};
      Knop pb(tmp, 248, 45);
    }
    if (70 < x && x < 115 && 115 < y && y < 135)  // sin
    {
      a = 's';
      chartmp[4] = {'s', 'i', 'n', '\0'};
      Knop pb(tmp, 250, 45);
    }
    if (130 < x && x < 175 && 115 < y && y < 135)  // cos
    {
      a = 'c';
      chartmp[4] = {'c', 'o', 's', '\0'};
      Knop pb(tmp, 250, 45);
    }
    if (240 < x && x < 290 && 115 < y && y < 135)  // x^2
    {
      a = 'x';
      chartmp[4] = {'x', '^', '2', '\0'};
      Knop pb(tmp, 250, 45);
    }
  }

  system("pause");
  return 0;
}
