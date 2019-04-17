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
                                cout<<"Error!";
                                }

                    }
    return 0;
}
