#include <iostream>
    using namespace std;

int main()
{
    double first;
        cout<<"Type first: ";
            cin>>first;

    double second;
        cout<<"Type second: ";
            cin>>second;

    double result;

    int w;
        cout<<"\nWhat will i do, if: \n1 - addition; 2 - deduction; 3 - multix; 4 - division"<<endl;
            cout<<"\nType here: ";
                cin>>w;

                    if (w==1) {
                        result=first+second;
                            cout<<"\n"<<first<<" + "<<second<< " = "<<result;
                    }

                    if (w==2){
                        result=first-second;
                            cout<<first<<" - "<<second<< " = "<<result;
                    }

                    if (w==3){
                        result=first*second;
                            cout<<first<<" * "<<second<< " = "<<result;
                    }

                    if (w==4) {
                            if (second!=0){
                                result=first/second;

                                cout<<first<<" / "<<second<< " = "<<result;
                            }

                            else {
                                    cout<<"\nYou have to type another second numeral\n"<<"Your current numeral is: ";
                                    cout<<second<<"\nType another here: ";
                                        cin>>second;

                                        if (second!=0){
                            result=first/second;
                            cout<<first<<" / "<<second<< " = "<<result;
                            }

                            while (second==0) {
                                        cout<<"\nYou have to choose another numeral! \n";
                                        cout<<"Type it here: ";
                                            cin>>second;

                                                if (second!=0){
                            result=first/second;

                            cout<<first<<" / "<<second<< " = "<<result;
                            }
                            }
                        }



    }
                            while (w>4 || w<1){
                                cout<<"\nYou have to choose correct do \n";
                                    cout<<"1 - addition; 2 - deduction; 3 - multix; 4 - division\n";
                                        cout<<"\nType it here: ";
                                                    cin>>w;


                                           if (w==4) {
                            if (second!=0){
                                result=first/second;

                                cout<<first<<" / "<<second<< " = "<<result;
                            }

                            else {
                                    cout<<"\nYou have to type another second numeral\n";
                                        cout<<"Your current numeral is: ";
                                            cout<<second<<"\nType another here: ";
                                                    cin>>second;

                                        if (second!=0){
                            result=first/second;
                            cout<<first<<" / "<<second<< " = "<<result;
                            }

                            while (second==0) {
                                        cout<<"\nYou have to choose another numeral! \n";
                                        cout<<"Type it here: ";
                                            cin>>second;

                                                if (second!=0){
                            result=first/second;
                                cout<<first<<" / "<<second<< " = "<<result;
                                                              }
                                                }
                                }



            }


            }

    return 0;
}
