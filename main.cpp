# include <iostream>
  using namespace std;

int main (){

    cout<< "MENU"<<endl;

cout<<"1. Add"<< endl;
cout<<"2. Subtraction"<< endl;
cout<<"3.Multiply"<< endl;
cout<<"4.Divide"<<endl;

     int choiceNumber;
cout<<"Enter your choice(1-4):"<< endl;
cin>> choiceNumber;

      int num1, num2, result0, result1, result2,result3;
      char choice;
cout<<"Enter integer number 1:"<<endl;
cin>>num1;
cout<<"Enter integer number 2:"<<endl;
cin>>num2;

        do{
          result0 =  num1+ num2;
        cout<<"Result:"<< result0 <<endl;
        break;
        } while(choiceNumber==1);



        do{
         result1 =  num1 - num2;
        cout<<"Result:"<< result1<< endl;

        break;
        } while (choiceNumber==2);


       do{
        result2 =  num1*num2;
        cout<<"Result:"<< result2<< endl;
        break;

       } while(choiceNumber==3);

       do{
         result3 = num1/num2;
        cout<<"results:"<<result3 <<endl;
        break;

       } while(choiceNumber==4);

       do{




      cout << "Do you want to continue? (y/n): ";
    cin >> choice;


        } while (choice == 'y' || choice == 'Y');

    cout << "Program exited. Goodbye!" <<endl;



return 0;
}
