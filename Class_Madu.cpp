#include <iostream>
#include <string>
using namespace std;


class madu{
	public:
		int jumlahmadu ;
		int hargamadu;
		string jenismadu;
		string teksturdanwarna;
		
		void berkhasiat(string manfaat);
		void kualitas(string hasil);
		
};
		void madu::berkhasiat(string manfaat){
	cout << "Khasiat madu :"<< manfaat <<endl <<endl;
}
	
void madu::kualitas(string hasil){
	cout << "Kualitas : " <<hasil<<endl <<endl;
	}	
int main(){
	madu maduTJ, maduAlWadey, maduBima;
	
	
}
