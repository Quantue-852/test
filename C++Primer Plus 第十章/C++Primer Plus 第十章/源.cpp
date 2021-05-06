#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
//用this指针操作构造函数，构造函数的参数可以与类成员命名一样（其他情况不可）
/*class BankCount {

private:
    string fullname;
    string banknumber;
    long balance;
public:
    BankCount() {}
    BankCount(string fullname, string banknumber, long balance);
    void ShowBankCount();
    int Deposit(long deposit);
    int WithDrawals(long withdrawals);
};
BankCount::BankCount(string fullname, string banknumber, long balance)
{
    this->fullname = fullname;
    this->banknumber = banknumber;
    this->balance = balance;
}*/
//第二题
/*class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person() { lname = " "; fname[0] = '\0'; }
    Person(const string& ln, const char* fn = "Heyyou");
    void Show()const;
    void FormalShow()const;
};

Person::Person(const string& ln, const char* fn = "Heyyou")//定义中的注释要省略
{
    lname = ln;
    strncpy_s(fname, fn, LIMIT);
}
void Person::FormalShow() const
{
    cout << lname << "," << fname << endl;
}
void Person::Show() const
{
    cout << fname << "," << lname << endl;
}
void p10_2(void)
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();
    cout << endl;
    two.Show();
    two.FormalShow();
    cout << endl;
    three.Show();
    three.FormalShow();
}*/
//第三题//;析构函数中创建临时变量来赋值
/*class golf {
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;

public:
    golf(const char* name, int hc);
    golf();
    void sethandicap(int hc);
    void showgolf();
};
golf::golf()
{
    char temp[Len] = "";
    int hand = 0;
    cout << "Please enter the full name of golf player: ";
    cin.getline(temp, Len);

    cout << "Please enter the hanicap of golf player: ";
    cin >> hand;
    cin.get();
    /for(int i=0;i<Len;i++)
      this->fullname[i] = temp[i];
    this->handicap = hand;/
  // *this = golf(temp, hand);析构函数中创建临时变量来赋值
}*/
//第四题
/*class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0.0, double b = 0.0);
    void showmove()const;
    Move add( const Move & m )const;
    void reset(double a = 0.0, double b = 0.0);
};
Move::Move(double a, double b)
{
    x = a;
    y = b;
}
void Move::showmove()const
{
    cout << "x = " << x << ", y = " << y << "." << endl;
}
Move Move::add(const Move& m)const
{
    Move temp;
    temp.x = this->x + m.x;
    temp.y = this->y + m.y;
    return temp;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
void p10_5()
{
    Move move1(1.1, 2.2);
    move1.showmove();
   
    Move move2(3.3, 4.4);
    move2.showmove();
    
    Move move3 = move1.add(move2);
    move3.showmove();

    move3.reset(0.1, 0.2);
    move3.showmove();
}*/
//模拟栈的先进后出
/*#include "stack.h"
void p10_5()
{
   
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order\n"
        << "P to process a PO,or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')//起到过滤换行符的作用（在两个cin中间使用）
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':cout << "Enter a PO number to add:";
                 cin >> po;
                 if (st.isfull())
                     cout << "stack already full\n";
                 else
                     st.push(po);
                 break;
        case 'P':
        case 'p':if (st.isempty())
            cout << "stack already empty\n";
                else {
                      st.pop(po);
                      cout << "PO#" << po << "popped\n";
                     }
                break;
        }
        cout << "Please enter A to add a purchase order\n"
            << "P to process a PO,or Q to quit.\n";
    }
    cout << "Bye\n";
}*/
//第五题
/*#include "customer.h"
void p10_5()
{
    Stack_ st;
    double total = 0.0;
    customer pop;
    customer customer1 = { "Jimmy",1000 };
    if (st.push(customer1))
        cout << customer1.fullname << "push." << endl;
    else
        cout << "Stack full." << endl;
   
    customer customer2 = { "Sam",5000 };
    if (st.push(customer2))
        cout << customer2.fullname << "push." << endl;
    else
        cout << "Stack full." << endl;
    if (st.pop(pop))
    {
        cout << pop.fullname << "pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;
    
    customer customer3 = { "kitty", 3000.0 };
    if (st.push(customer3))
        cout << customer3.fullname << " push." << endl;
    else
        cout << "Stack full." << endl;
    if (st.pop(pop))
    {
        cout << pop.fullname << " pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;
    if (st.pop(pop))
    {
        cout << pop.fullname << " pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;
    if (st.pop(pop))
    {
        cout << pop.fullname << " pop." << endl;
        total += pop.payment;
    }
    else
        cout << "Stack empty." << endl;
    cout << "Total paymemt: " << total << endl;
}*/
int main(int argc, char** argv)
    {
        p10_5();
        while (cin.get());
        return 0;
    }