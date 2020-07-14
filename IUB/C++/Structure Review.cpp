
#include<cmath>
#include<iostream>

using namespace std;
struct Document{};


struct Student{
    private:
	int id;
	string name;
	float cgpa;
	public:
	void populateData(){
		cout<<"Enter ID: "; cin>>id;
		cin.ignore();
		cout<<"Enter Name: "; getline(cin,name);
		cout<<"Enter Cgpa: "; cin>>cgpa;
	}
	void submitAssignment(Document d1){

	}
    void showData(){
        cout<<"ID="<<id<<", Name="<<name<<", Cgpa="<<cgpa<<endl;
	}
};

void setStudInfo(Student&);
void showStudInfo(Student&);

int main(){
	Student adib, luna;
	setStudInfo(adib);
	//cout<<"Enter ID: "; cin>>adib.id;
	adib.populateData();
	//luna.populateData();
	adib.showData();
	//showStudInfo(adib);
	return 0;
}

void setStudInfo(Student& s){
    //int p,q;
    //cin>>p; cin>>q;
    //cout<<"p="<<p<<", q="<<q<<endl;
	cout<<"Enter ID: "; //cin>>s.id;
	cin.ignore();
	cout<<"Enter Name: "; //getline(cin, s.name);
	cout<<"Enter Cgpa: "; //cin>>s.cgpa;
}

void showStudInfo(Student& s){
	//cout<<"ID="<<s.id<<", Name="<<s.name<<", Cgpa="<<s.cgpa<<endl;
}




