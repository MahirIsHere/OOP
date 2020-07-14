2020-07-07 -- Scratchpad of CSe213+L, sec-1
===========================================
struct Document{...};
class Student{
	private:
	int id;
	string name;
	float cgpa;
	void conductSurvey(){ //100 lines code}
	public:
	void populateData(){
		cout<<"Enter ID: "; cin>>id;
		cout<<"Enter Name: "; cin>>name;
		cout<<"Enter Cgpa: "; cin>>cgpa;
	}
	void submitAssignment(Document d1){
		//conducting survey: 100 line code
		conductSurvey();
		//other 200 lines code

	}
	void submitInternReport(...){
		//conducting survey: 100 line code
		conductSurvey();
		//other 500 lines code
	}
};

class Course{
	Student studArr[30];
};
class Faculty{
	...
	//Course s20[4];
	Student studArr[30];
	public:
	void giveAssignment(){
		Document d; d.setDoc();
		loop:
			studArr[i].submitAssignment(d);
		
	}

};

//member data --> field
//member function --> method

In struct: by default, everything is public
In class: by default, everything is private

int main(){
	int x, *intPtr;
	Student adib, *studPtr; studPtr = new Student;
	//cin>>adib.id; cin>>studPtr->id;
	setStudInfo(adib);
	adib.populateData();
	luna.populateData();
	showStudInfo(adib);
	return 0;
	
void setStudInfo(Student s){
	cout<<"Enter ID: "; cin>>s.id;
	cout<<"Enter Name: "; cin>>s.name;
	cout<<"Enter Cgpa: "; cin>>s.cgpa;
}
void showStudInfo(Student s){
	cout<<ID="<<s.id<<", Name="<<s.name<<", Cgpa="<<s.id<<endl;
}

----------------------------
class Client{
	private: 
	.....
	string ccNo;
	bool chargeCard(float amount){
		make connection with Bank and return status
	}
	public:
	bool verifyTransaction(float a){
		return chargeCard(a,cardNo,ccv,doE);
	}

};

Class Teller{
	//private fields...
	public:
	void processPayment(){
		Client c = scanMembershipCardAndDetectClient();
		amt = scan barcodes and calculate total amount
		bool isApproved = c.verifyTransaction(amt);
	}
	
	
	









































