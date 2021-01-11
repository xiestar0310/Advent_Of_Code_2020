#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;
int main() {
  string coolText;
  int num[200];

  ifstream MyReadFile("text.txt");
  
  
    for(int i=0;i<200;i++){
      getline (MyReadFile, coolText);
        num[i]= stoi(coolText);
    }
  sort(num, num+200);

  /*for(int i=0; i<200; i++){
    cout << num[i] <<endl;
  } */

  for(int i=0; i<200; i++){
    for(int j=0; j<200; j++){
      for(int k=0; k<200; k++){
        if(num[i]+num[j]+num[k]==2020){
        cout << num[i]*num[j]*num[k] <<endl;
        }
      }
    }
  }
  

//
}