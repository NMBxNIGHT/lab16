#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int x=rand()%3,temp1,temp2;
	switch (x	)
	{
	case 0:
		temp1 =a;
		a=b;
		b=c;
		c=d;
		d=temp1;
		break;
	case 1:
		temp1 =b;temp2=a;
		a=c;
		b=d;
		c=temp2;
		d=temp1;
		break;
	default:
		temp1 =a,temp2=b;
		a=d;
		d=c;
		b=temp1;
		c=temp2;

	}
	


}
