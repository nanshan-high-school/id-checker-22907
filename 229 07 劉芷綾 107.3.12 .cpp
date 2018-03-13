#include <iostream>

using namespace std;

int main()
{
    char k[10];
    int i, j, sum;
    cout << "請輸入身份證字號:";
	cin >> k;
	
	i = (int(k[0])- 55) / 10;
	j = i * 1;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = (int(k[0])- 55) % 10;
	j = i * 9;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[1])- 48;
	j = i * 8;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[2])- 48;
	j = i * 7;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[3])- 48;
	j = i * 6;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[4])- 48;
	j = i * 5;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[5])- 48;
	j = i * 4;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[6])- 48;
	j = i * 3;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[7])- 48;
	j = i * 2;
	sum = sum + j;
	//cout << i << " " << j <<"\n";

    i = int(k[8])- 48;
	j = i * 1;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
	i = int(k[9])- 48;
	j = i * 1;
	sum = sum + j;
	//cout << i << " " << j <<"\n";
	
    //cout << sum % 10;
	
	
	if((sum % 10) == 0){
	    cout << "身份證字號正確";
	}
	else{
	    cout<< "身份證字號錯誤";
	}
}
