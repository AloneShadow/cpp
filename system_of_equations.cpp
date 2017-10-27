#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//solution of the system of two equations
/*
 Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений
 Вывод программы зависит от вида решения этой системы.
 Если система не имеет решений, то программа должна вывести единственное число 0.
 Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n, то программа должна вывести число 1, а затем значения k и n.
 Если система имеет единственное решение (x0, y0), то программа должна вывести число 2, а затем значения x0 и y0.
 Если система имеет бесконечно много решений вида x=x0, y — любое, то программа должна вывести число 3, а затем значение x0.
 Если система имеет бесконечно много решений вида y=y0, x — любое, то программа должна вывести число 4, а затем значение y0.
 Если любая пара чисел (x, y)  является решением, то программа должна вывести число 5.
*/

int main() {
  double a,b,c,d,e,f, x, y, det, detx, dety;
  cin >> a >> b >> c >> d >> e >> f;
  det = a*d - c*b;
  detx = e*d - f*b;
  dety = a*f - c*e;
  if (a==0 && b==0 && c==0 && d==0 && e==0 && f==0){
    cout << 5 << endl;
  } else if (det !=0){
    x = detx/det;
    y = dety/det;
    cout << 2 << " " << x << " " << y << endl;
  } else {
      if (b==0 && d==0 && (a!=0 || c!=0)){
        if (a==0 && e ==0){
          cout << 3 << " " << f/c << endl;
        } else if (c==0 && f ==0){
          cout << 3 << " " << e/a << endl;
        } else if (e/a == f/c){
          cout << 3 << " " << e/a << endl;
        } else {
          cout << 0 << endl;
        }
      } else if (a==0 && c==0 && (b!=0 || d!=0)){
        if (b==0 && e ==0){
          cout << 4 << " " << f/d << endl;
        } else if (d==0 && f ==0){
          cout << 4 << " " << e/b << endl;
        } else if (e/b == f/d){
          cout << 4 << " " << e/b << endl;
        } else {
          cout << 0 << endl;
        }
      } else  if (a && b || c && d){
        if ((-a/b == -c/d) && (e/b == f/d)){
          cout << 1 << " " << -a/b << " " << e/b << endl;
        } else if (a==0 && b==0 && e==0 ){
          cout << 1 << " " << -c/d << " " << f/d << endl;
        } else  if(c==0 && d==0 && f==0 ){
          cout << 1 << " " << -a/b << " " << e/b << endl;
        } else {
          cout << 0 << endl;
        }
      } else {
        cout << 0 << endl;
      }
    }
  return 0;
}