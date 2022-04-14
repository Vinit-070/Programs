// basic calculator using switch case
# include <iostream>
using namespace std;

int main() {

  char op;
  float a, b;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> a >> b;

  switch(op) {

    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a / b;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
