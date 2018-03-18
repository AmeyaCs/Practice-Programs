/*Program 7.4 Bank inheritance
  Author : Tushar Ghadge */

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Account{

	protected:
		double balance;
		string acc_no,acct_holders_name,address;

	public :
		void setInitailBalane( double init_bal ){
			balance = init_bal;
		}	
	
		double checkBalance(){
			return balance;	
		}
		
		void depositeMoney( double add_money ){
			balance += add_money;
		}

		void withdrawMoney( double withdraw_money ){
			balance -= withdraw_money;
		}			
};

class SavingsAccount : public Account{

	public:
		float rate_of_interest;

		void withdrawMoney( double );

		SavingsAccount(){
			rate_of_interest = 4.2;		
		}	 
}; 

void SavingsAccount :: withdrawMoney( double withdraw_money ){
	
	if( withdraw_money > checkBalance() ){
		cout <<	" No sufficent balance " << endl;
	}else{
		Account::withdrawMoney( withdraw_money );	
	}
}

class CurentAccount : public Account{
	private:
		double overdraft_limit;

	public:
		void withdrawMoney( double );
		CurentAccount(){
			overdraft_limit = 2500;
		}		
};

void CurentAccount :: withdrawMoney( double withdraw_money ){
	
	if( withdraw_money > ( checkBalance() + overdraft_limit ) ){
		cout <<	" No sufficent balance " << endl;
	}else{
		Account::withdrawMoney( withdraw_money );	
	}
}

void displayMenu(){

	cout << "\nChoose Transactions\n";
	cout << "1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\nChoose transaction : ";

}

void amountErrorMessgae(){
	cout << "\nPlease enter correct amount ";
}

void processTransaction(){

}

void currentTransactions( CurentAccount& curr){	
	
	int choise;	
	double amt;
	
	do{
		displayMenu();
		cin >> choise;
		switch( choise ){
	
			case 1 :
				cout << "Enter amout to deposit : ";
				cin >> amt;
				if( amt < 0 ){
					amountErrorMessgae();
				}else{
					curr.depositeMoney( amt );
				}

				cout << endl;
				break;
			case 2 :
				cout << "Enter amout to withdraw : ";
				cin >> amt;
				if( amt < 0 ){
					amountErrorMessgae();
				}else{
					curr.withdrawMoney( amt );
				}

				cout << endl;
				break;
			case 3 :
				cout << "Your current balance is : " << curr.checkBalance();
				cout << endl;
				break;
		
			case 4 : break;
		
			default : cout << "Select correct operation\n";
		}
	}while( choise != 4 );
}

void savingsTransactions( SavingsAccount& savings ){	
	
	int choise;	
	double amt;
	
	do{
		displayMenu();
		cin >> choise;
		switch( choise ){
	
			case 1 :
				cout << "Enter amout to deposit : ";
				cin >> amt;
				if( amt < 0 ){
					amountErrorMessgae();
				}else{
					savings.depositeMoney( amt );
				}
				cout << endl;
				break;
			case 2 :
				cout << "Enter amout to withdraw : ";
				cin >> amt;
				if( amt < 0 ){
					amountErrorMessgae();
				}else{
					savings.withdrawMoney( amt );
				}
				cout << endl;
				break;
			case 3 :
				cout << "Your savings balance is : " << savings.checkBalance() << endl;
				break;
		
			case 4 : break;
		
			default : cout << "Select correct operation\n";
		}
	}while( choise != 4 );
}

int main(){

	SavingsAccount savingsAcc;
	CurentAccount currentAcc;

	string acc_holder_name, address;
	double saving_bal, curr_bal;
	double add_money,withdraw_money;

	cout << "Enter details for banking accounts \n";	
	cout << "Account holder name : ";
	//cin >>acc_holder_name;
	getline( cin, acc_holder_name );

	cout << "\nAccount holder's address : " ;
	//cin >> address;
	getline( cin, address );
	

	cout << "\nDetails for saving accounts  \n";
	cout << "Initial opening balance : ";
	cin >> saving_bal;
	savingsAcc.setInitailBalane( saving_bal );
	cout << "Your rate of intrest is : " << savingsAcc.rate_of_interest << endl;

	cout << "\nDetails for cureent accounts  \n";
	cout << "Initial opening balance for current account : ";
	cin >> curr_bal;
	currentAcc.setInitailBalane( curr_bal );
	
	int choise;

	do{
		
		cout << "\n\nSelect account for transaction : \n";
		cout << "1.Savings\n2.Current\n3.Exit\nEnter choise : ";
		cin >> choise;
		
		switch( choise ){
			
			case 1 : savingsTransactions( savingsAcc );
				 break;

			case 2 : currentTransactions( currentAcc );
			 	 break; 
		
			case 3 : exit(0);
			
			default : cout << "Enter correct choise :";
				 break;		
							
		}
		
	}while( choise != 3 );	
	
	return 0;
}
