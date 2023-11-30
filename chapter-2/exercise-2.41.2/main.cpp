#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data data1, data2;
  double price = 0.0;

  std::cin >> data1.bookNo >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;
  std::cin >> data2.bookNo >> data2.units_sold >> price;
  data2.revenue = data2.units_sold * price;

  unsigned totalCnt = data1.units_sold + data2.units_sold;
  double totalRevenue = data1.revenue + data2.revenue;

  std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " "
            << totalRevenue / totalCnt << std::endl;
  return 0;
}
