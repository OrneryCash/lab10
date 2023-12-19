#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
  int n = 0;
  float sum = 0;
  float squaredSum = 0;

  string score;
  ifstream file("score.txt");
  while (getline(file, score)) {
    n++;
    float s = stof(score);
    sum += s;
    squaredSum += s * s; 
  }

  file.close();

  float mean = sum / n;
  float squaredMean = squaredSum / n; 

  float stdi = sqrt(squaredMean - mean*mean);
  cout << "Number of data = " << n << '\n';
  cout << setprecision(3);
  cout << "Mean = " << mean << '\n';
  cout << "Standard deviation = " << stdi; 
}

