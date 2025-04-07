  #include<iostream>
  using namespace std;
  class BankAccount{
  protected:

  int accountNumber;
  string accountHolderName;
  double balance;

  public:

  void BankInformatation(  int accountNumber, string accountHolderName, double balance){
      this->accountNumber = accountNumber;
      this->accountHolderName = accountHolderName;
      this->balance= balance;

  }
  void deposit(double amount){

    if(amount >= 0)
    {
      balance += amount;
      cout << "Your deposit is           : "<< amount << endl;
      cout << "now your total balance is :" << balance << endl;
      cout << "---------------------------"<< endl;
    }
    else 
    {
      cout << " tamari pase paisa nathi " << endl;
    }
    
  }
  void withdraw(double amount){
    if(amount <= balance)
    {
      balance -= amount;
    cout << "withdraw your amount :"<< amount << endl;
    cout << "new your balance is  :"<< balance << endl;
    }
    else 
    {
      cout << "tamari pase paisa nathi :"<< endl;
    }
    
  }
  double getbalance(){
    return balance;
  } 
  
  void displayAccountInfo(){
    cout << "  Accont number      :"<< accountNumber<< endl;
    cout << "  Accont Holder Name :"<< accountHolderName<< endl;
    cout << "  Accont balance     :"<< balance<< endl;
  }

  };

  class savingaccount : public BankAccount{
    public:
    double interestRate;

    void calculateInterest( double interestRate){
        double interest = (getbalance() * interestRate) / 100;
        balance += interest;
        cout << "Your interestRate is : "<< interest << endl;
        cout << "new balance          :"<< balance << endl;
        cout << "-----------------------------------"<< endl;
        cout << "-----------------------------------"<< endl;
    }
  };
  class checkingAccount : public BankAccount {
    protected: 
    double overdraftLimit;

    public:
    void checkOverdraft(double overdraftLimit) {
        this->overdraftLimit = overdraftLimit;

        if (overdraftLimit > getbalance()) {
            cout << overdraftLimit << " - " << getbalance() << " = ";
            overdraftLimit -= getbalance();
            cout << overdraftLimit << endl;
        }
        else {
            cout << "Invalid overdraft limit " << endl;
        }
        cout << "----------------------------------------------" << endl;
    }
  };
  class fixedDepositAccount : public BankAccount {
    protected: 
    int term;

    public:
    void calculateInterest(double interestRate,int term) {
        this->term = term;

        cout << "Fix diposit interest: ";
        double interest = (getbalance() * interestRate * term) / 100;
        cout << interest << endl;
        cout << getbalance() << " + " << interest << " = " << getbalance() + interest << endl;
    }
  };



  int main()
  {
      
    int accountNumber;
    string accountHolderName;
    double balance ;


    cout << "Enter your Account number      = ";
    cin >> accountNumber;
    cout << "Enter your Account Holder Name = ";
    cin >> accountHolderName;
    cout << "Enter your Balance             = ";
    cin >> balance;
    cout << "-------------------------"<< endl;

    BankAccount info;

  info.BankInformatation( accountNumber,  accountHolderName, balance);

    double amount;
  cout << "Enter your deposit    : "<<  endl;
  cin >> amount;
  info.deposit(amount);

  cout << "Enter withdraw amount :"<< endl;
  cin >> amount;
  info.withdraw(amount);
  cout << "------------------------"<< endl;


  info.displayAccountInfo();
    

  double interestRate(3.5);


  savingaccount savings;
  savings.BankInformatation(accountNumber, accountHolderName, balance);
  savings.calculateInterest(interestRate);

    checkingAccount obj2;
    obj2.BankInformatation(accountNumber, accountHolderName, info.getbalance());

      double overdraftLimit;
      cout << "Enter overdraft limit: ";
      cin >> overdraftLimit;
      obj2.checkOverdraft(overdraftLimit);

      fixedDepositAccount obj3;
      obj3. BankInformatation(accountNumber,accountHolderName,info.getbalance());
     
      int term;
      cout << "Enter F.D. duration in month: ";
      cin >> term;
      obj3.calculateInterest(7,term);
  }

    
