#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

//a task about eight chess quins
/*
 Известно, что на доске 8×8 можно расставить 8 ферзей так,
 чтобы они не били друг друга. 
 Вам дана расстановка 8 ферзей на доске, определите, 
 есть ли среди них пара бьющих друг друга.
*/

int main() {
  const int n = 8;
  int s;
  vector <int> a(n), b(n);
    cin >> s;
  for (int i=0; i<n; i++){
      cin >> a[i];
      cin >> b[i];
  }

  for (int i=0; i<n-1; i++){
      for (int j=i+1; j<n; j++){
          //cout << a[i] << b[i] << " " << a[j] << b[j] << " " << abs(a[i]-a[j]) << abs(b[i]-b[j])<<  endl;
          if (a[i] == a[j] || b[i] == b[j] || abs(a[i]-a[j])==abs(b[i]-b[j])){
              cout << "YES" << endl;
              return 0;
          }
      }
    }
    cout << "NO" << endl;
    return 0;
}