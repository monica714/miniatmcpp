#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class atm
{
    private:
    //ADD ACC NUM
    //ADD NAME
    //ADD PIN
    //ADD TOTAL_BAL
    long  account_no;
    string name;
    int pin;
    long total_balance;
    long long phone_number;

    public:
    atm(long  acc_no,string name_a,int pin_a,long  total_bal_a,long long phone_num_a)
    {
        account_no=acc_no;
        name=name_a;
        pin=pin_a;
        total_balance=total_bal_a;
        phone_number=phone_num_a;

    }
    void setdata(long enteracc,int enterpin,long balanceleft ,string nameis )
    {
    account_no=enteracc;
    pin=enterpin;
    total_balance=balanceleft;
    name=nameis;
    }
    long  getaccountnumber()
    {
        return account_no;
    }
   
    int getpin()
    {
        return pin;
    }
    
    long double getbalance()
    {
        return total_balance;
    }
    void setphone(long long enteroldnumber,long long enternewnumber)
    {
        if((enteroldnumber==phone_number))
        {

                 
            cout<<"NUMBER ADDED SUCCESSFULLY:"<<enternewnumber<<endl;
            phone_number=enternewnumber;
            getch();
        }
        else{
            cout<<"Invalid Input or Incorrect number!!"<<endl;
        }

    }
    long long getphonenum()
    {
        return phone_number;
    }
    void setcashwithdraw(long  enteramount)
    {
        if((enteramount>=50)&&(enteramount<=total_balance)&&(enteramount%5==0))
        {
            total_balance -= enteramount;
            cout<<"TRANSACTION COMPLETED SUCCESSFULLY"<<endl;
            cout<<"COLLECT YOUR CASH:"<<enteramount<<endl;
            cout<<"BALANCE LEFT:"<<total_balance<<endl;
            getch();
        }
        else{
            cout<<"INVALID INPUT OR INSUFFICIENT BALANCE !!"<<endl;
            getch();
        }
    }
    string getname()
    {
        return name;
    }

};
int main()
{
    int choice;
    long long number,newnum;
    long double amount;
    long Enteracc;
    int Enterpin;
    atm user1(123456789,"Monica",1221,50000,8780968642);
    do{
        system("cls");
        cout<<"**WELCOME TO THE ATM**"<<endl;
        cout<<"ENTER YOUR ACCOUNT NUMBER:";
        cin>>Enteracc;
        cout<<"ACCOUNT NUMBER ADDED SUCCESSFULLY:"<<endl;
        cout<<"ENTER YOU PIN:";
        cin>>Enterpin;

        
        if((Enteracc ==user1.getaccountnumber())&&(Enterpin==user1.getpin()))
        {
            
            do
            {
                system("cls");
                cout<<"**CHOOSE FROM THE OPTIONS GIVEN BELOW**"<<endl;
                cout<<"1.CHECK BALANCE"<<endl;
                cout<<"2.USER DETAILS"<<endl;
                cout<<"3.UPDATE PHONE NUMBER"<<endl;
                cout<<"4.CASH WITHDRAW"<<endl;;
                cout<<"5.EXIT"<<endl;

                cin>>choice;
                switch(choice)
                {
                    
                    case 1:
                    cout<<"YOUR TOTAL BALANCE:"<<user1.getbalance();
                    
                    getch();
                    break;
                     
                    case 2:
                    cout<<"USER'S NAME:"<<user1.getname()<<endl;
                    cout<<"ACCOUNT NUMBER:"<<user1.getaccountnumber()<<endl;
                    cout<<"PHONE NUMBER:"<<user1.getphonenum()<<endl;
                    cout<<"TOTAL BALANCE:"<<user1.getbalance()<<endl;
                    
                    getch();
                    break;
                    case 3:
                    cout<<"ENTER YOUR OLD PHONE NUMBER :";
                    cin>>number;
                    cout<<"ENTER YOUR NEW PHONE NUMBER :";
                    cin>>newnum;
                    user1.setphone(number,newnum);
                
                    getch();
                    break;
                    case 4:
                    cout<<"ENTER THE AMOUNT:";
                    cin>>amount;
                    user1.setcashwithdraw(amount);
                    
                    getch();
                    break;
                    case 5:
                    cout<<"**THANK YOU**"<<endl;
                    exit(0);
                    
                    getch();
                    break;

                    
                    

                }
                
            } while (1);
            

           
        }




    }while (1);
}