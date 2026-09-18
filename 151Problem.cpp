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



    
// 5.)  Withdrawal Validity as a Boolean

    float accountBalance;
    int withdrawalAmount;

    cout<<"\nNOTE - Transaction fee is 2$\n";
    cout << "\nEnter Your Account Balance: ";
    cin >> accountBalance;
    cout << "Enter Your Withdrawl Amount: ";
    cin >> withdrawalAmount;
    

    bool Result = withdrawalAmount > 0 && withdrawalAmount%100 == 0 && accountBalance >= withdrawalAmount+2;
    cout << boolalpha;
    cout<<"Transaction valid: "<<Result<<endl;
    if(Result){
    float balance_left = accountBalance - withdrawalAmount -2;
    cout << "Remaining Balance: "<< balance_left;
    }

    

// 6.) Largest of Three Numbers (Nested If-Else)

    int a, b, c;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    if( a > b){
        if( a > c){
            cout<<"A is Largest";
        }
        else{
            cout<<"C is Largest";
        }
    }
    else if(b > c){
        cout << "B is Largest";
    }

    else{
        cout <<"C is Largest";
    }




// 7.) Check Leap Year

    int year;

    cout << " \nEnter Year : ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " is a leap year" << endl;
        }
    else
    {
        cout << year << " is not a leap year" << endl;
    }


// 8.) Divisible by Both 3 and 5

    int N;

    cout << " \nEnter any natural no.";
    cin >> N;

    if (N > 0)
    {
        if (N % 3 == 0 && N % 5 == 0)
        {
            cout << "Divisible by both 3,5.";
        }
        else if (N % 3 == 0)
        {
            cout << "Divisible by 3 only.";
        }
        else if (N % 5 == 0)
        {
            cout << "Divisible by 5 only.";
        }
        else
        {
            cout << "Not Divisible by 3 or 5.";
        }
    }
    else{
          cout << "Enter Natural NO.";
    }



// 10.) Problem Statement & What to Create

    int day, month, year;

    cout << "\nEnter Date in DD MM YY format : ";
    cin >> day >> month >> year;

    if (day > 0 && month > 0 && year > 0)
    {

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (1 <= day && day <= 31)
            {
                cout << "VALID DATE";
            }
            else
            {
                cout << "INVALID DATE";
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (1 <= day && day <= 30)
            {
                cout << "VALID DATE";
            }
            else
            {
                cout << "INVALID DATE";
            }
        }
        else if ((year % 4 == 0 && year % 100 != 0 && month == 2) || (year % 400 == 0 && month == 2))
        {
            if (1 <= day && day <= 29)
            {
                cout << "VALID DATE";
            }
            else
            {
                cout << "INVALID DATE";
            }
        }
        else if (month == 2)
        {
            if (1 <= day && day <= 28)
            {
                cout << "VALID DATE";
            }
            else
            {
                cout << "INVALID DATE";
            }
        }

        else
        {
            cout << "ENTER VALID MONTH";
        }



        
// 11.) Simple Calculator Using Switch Case


    int a , b , r;
    char op ;

    cout <<"\nEnter your 1st no. : ";
    cin >> a;
    cout <<"\nEnter your 2nd no. : ";
    cin >> b;
    cout <<"\nEnter operator ' + , - , / ,* ,% ' : ";
    cin >> op;

    switch(op){

        case '+':
            r = a+b;
            cout <<a<<" + "<<b <<" = "<< r;
            break;

        case '-':
            r = a-b;
            cout <<a<<" - "<<b<<" = "<<r;
            break;

        case '*':
            r = a*b;
            cout <<a<<" * "<<b <<" = "<<r;
            break;

        case '%':
            if(b !=0){
             r = a%b;
            cout <<a<<" % "<<b <<" = "<<r;
            }
            else{
                cout <<"Denominator can't be zero";
            }
            break;
           

        case '/':
            if(b !=0){
            r = a/b;
            cout <<a<<" / "<<b <<" = "<<r;
            }
            else{
                cout <<"Denominator can't be zero";
            }
            break;
        
            default:
                cout<<"Enter valid digits";
        }



        
// 12.) Month to Season Using Fall-Through


    int month;
    
    cout <<"\nEnter Month no. : ";
    cin>>month;

    if(month >0 && month <13){

        switch(month){
            case 12:
            case 1:
            case 2:
                cout<<"Season : Winter"<<endl;
                break;

            case 3:
            case 4:
            case 5:
                cout<<"Season : Spring"<<endl;
                break;

            case 6:
            case 7:
            case 8:
                cout<<"Season : Summer"<<endl;
                break;

            case 9:
            case 10:
            case 11:
                cout<<"Season : Autumn / Monsoon" <<endl;
                break;
        }

    }
    else{
        cout<<"Enter valid month no. between 1 to 12";
    }

        

// 13.) Print 1 to N (For Loop)

    int N;

    cout<<"Enter any natural no.";
    cin>>N;

    for (int i = 1 ; i <= N ; i++){
        cout<<i<<" ";
    }
        


        
  // 14.) Print N to 1 (While Loop)

    int N;

    cout << "Enter any natural no. : ";
    cin>> N;


    while (N >= 1 ){
        cout << N <<" ";
        N--;

    }


        
        
        
// 15.) Check Prime Number (Loop)


    int N;
    bool isprime =true;
    
    
    cout<<"Enter any natural no. : ";
    cin>>N;

    for ( int i = 2 ; i <= sqrt(N) ; i++){
        if( N%i == 0){
            isprime = false;
            break;
        }
    }

     if(isprime){
        cout<<N<<" is a prime no.";
     }
     else{
        cout<<N<<" is not a prime no.";
     }

    




        
// 16.) Check Palindrome Number

    int N;
    int rev = 0;

    cout<<"Enter any integer : ";
    cin>>N;
    

    int orignal = N;

    while( N > 0 ){
        rev = rev * 10 + (N % 10);
        N =N/10;

    }


    if(rev == orignal){
        cout<<"Palindrom";
    }
    else{
        cout<<" Not Palindrom";
    }



    
// 17.) Fibonacci Series (Iterative)

    int N, a, b, next;

    cout << "Enter any natural no. : ";
    cin >> N;
    a = 0;
    b = 1;
    if (N > 0)
    {
        if (N >= 2)
        {
            cout << a << " " << b;

            for (int i = 3; i <= N; i++)
            {
                next = a + b;
                cout << " " << next << " ";
                a = b;
                b = next;
            }
        }
        else
        {
            cout << a;
        }
    }
    else{
        cout<<"Natural no.s are allowed.";
    }




// 18.) Break Statement Demo.

   int num ,sum;

   sum = 0 ;
   cout<<"Enter any natural no.s : ";
   while (true){
    
    cin>>num;

        if(num <= 0){
            break;
        }

    sum = num + sum;
   }
   cout<<"SUM before break : "<<sum;


        

       

        
    
    

    return 0;



    
}
