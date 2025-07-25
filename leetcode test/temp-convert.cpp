#include<iostream>
#include<vector>
using namespace std;

void convertTemperature(double celsius) {
        vector<double>ans;
        double Kelvin = celsius + 273.15;
        double Fahrenheit = celsius*1.80 + 32;
        ans.push_back(Kelvin);
        ans.push_back(Fahrenheit);
      for (auto key:ans)
      {
  cout<<key<<" ";
      }
      

    }
    int main(){
convertTemperature(122.11);

    }