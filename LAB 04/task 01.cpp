#include<iostream>
#include<string>

using namespace std;



class car{
	private :
	string brand;
	string model;
	float price;
	bool availability;
	
	public :
	
	car(){
		
		brand ="unknown";
		model = "generic";
		price = 0;
		availability = 1;
	}
	
	
	void setcar(string b, string m, float rent, bool a){
		
		brand =b;
		model = m;
		price = rent;
		availability =  a;
	}
	
	void requestRent(){
		
		if(!availability){
			cout << "not avialble, select another one if needed" << endl;
		}else if(availability){
			
			cout << "car available , you have booked it" << endl;
			
			
			availability = 0;
		}
	}
};

int main (){
	
	car corolla;
	
	corolla.requestRent();
	
	
	return 0;
}
