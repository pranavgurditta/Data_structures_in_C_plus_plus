#include<conio.h>
#include <iostream.h>

/* Fibonacci: recursive version */
int Fibonacci_R(int n) {
  if (n <= 0) return 0;
  else if (n == 1) return 1;
  else return Fibonacci_R(n - 1) + Fibonacci_R(n - 2);
}

// iterative version
int Fibonacci_I(int n) {
  int fib[] = {
    0,
    1,
    1
  };

  for (int i = 2; i <= n; i++) {
    fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
    cout << fib[i % 3] << endl;
  }
  return fib[n % 3];
}

int main(void) {
  clrscr();
  int a;
  cout << "Enter the number of terms >=2 you want of the serioes. ";
  cin >> a;
  // calculate the fib(i) from scratch for each i <= a using your recursive function
  cout << endl << "From recursive function" << endl;

cout<<"0" <<endl<<"1"<<endl;
  for (int i = 2; i <= a; ++i)
    cout << Fibonacci_R(i) << endl;
  cout << endl;

// or calculate fib(a) once and output the intermediate results from the looping version
  cout << "From iterative function" << endl;

cout<<"0" <<endl<<"1"<<endl;
  Fibonacci_I(a);

  cout << endl;
  getch();
  return 0;
