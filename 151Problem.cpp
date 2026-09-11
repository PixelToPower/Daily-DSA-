#include <iostream>
using namespace std;

int main()
{

    // 1.) Age Estimate From Days Lived

    int N;
    int y, m, rd, d;
    cout << "Enter no of days you have lived :";
    cin >> N;
    if (N <= 0)
    {
        cout << "enter valid days";
    }
    else
    {

        y = (N / 365);
        rd = (N % 365);
        m = (rd / 30);
        d = (rd % 30);

        cout << y << " Years, " << m << " Months, " << d << " Days";
    }


    
    //2.) Swap Two Numbers Using a Temporary Variable

    int a ,b ,temp;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout << "Before swap a = "<< a << " , b = "<<b <<endl;


    temp = a;
    a = b;
    b = temp;
    
    
    cout << "After swap  a = "<< a << " , b = "<<b <<endl;


    
    // 3.) Toggle a Boolean Flag

    bool a, b;

    cout << "Enter true or false : ";
    cin >> a;

    b = !a;
    cout << boolalpha;
    cout << "Initial : " << a << endl;
    cout << "Toggled : " << b;



    // 4.) Final Price After Discount and Tax


    float Price , Discount , tax ,taxamt;
    float dp , finalp ,Discounted_price;

    cout << "Enter Orignal price : ";
    cin>>Price;
    cout << "Enter Discount in % : ";
    cin>>Discount;
    cout << "Enter tax in % : ";
    cin>>tax;


    dp =  Price * (Discount/100);
    Discounted_price = Price - dp;
    

    taxamt = Discounted_price *(tax/100);
    finalp = Discounted_price + taxamt;

    cout<<fixed<<setprecision(2);
    cout<<" \nDiscounted Price : "<<Discounted_price<<endl;
    cout<<"Final Price : "<<finalp <<endl;


    
    
        

    return 0;



    
}
