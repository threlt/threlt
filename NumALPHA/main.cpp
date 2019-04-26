#include <iostream>
#include <math.h>
    using namespace std;

int main()
{
    int w;
        cout<<"\nWhat will i do, if: \n1 - addition; 2 - deduction; 3 - multix; 4 - division; 5 - find out squad ?"<<endl;
        cout<<"\nType here: ";
                cin>>w;
                    if ( w < 5 ) {

                    double first;
                        cout<<"\nType first: ";
                            cin>>first;

                    double second;
                        cout<<"Type second: ";
                            cin>>second;

                    double result;



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

                            while (w>5 || w<1){
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
            }
                        if ( w == 5) {

                                double x;
                                double y;
                                double d;

                                    double a;
                                        cout<<"\nType value  a.\nType here: ";
                                            cin>>a;

                                    double b;
                                        cout<<"\nType value  b.\nType here: ";
                                            cin>>b;

                                    double c;
                                        cout<<"\nType value c.\nType here: ";
                                            cin>>c;

                                    double res;
                                    double res1;
                                    double eq1 =- 1;
                                    double eq4 = -4;
                                    double res2;
                                    double res3 = sqrt(d);


                                           if (a!=1 && b>0 && c>0) {
                                            cout<<"\nYour equation looks like: "<<endl;
                                                cout<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<" = 0?\n";
                                                    cout<<"Type 1 if yes, 2 if no.\n\nType here: ";
                                               double check;
                                                    cin>>check;
                                                        while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }

                                                                        if (d<0) {
                                                                            cout<<"\nAnswer does not exist.\n";
                                                                                }

                                                                    }
                                                            if (check==2) {
                                                            cout<<"\nSorry try again!";


                                                            }
                                                    }


                                                        if (a!=1 && b<0 && c>0) {
                                            cout<<"\nYour equation looks like: "<<endl;
                                                cout<<a<<"x^2"<<" "<<b<<"x"<<" + "<<c<<" = 0?\n";
                                                    cout<<"Type 1 if yes, 2 if no.\n\nType here: ";
                                            double check;
                                                    cin>>check;
                                                        while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }

                                                             if (d<0)  {
                                                             cout<<"\nAnswer does not exist.\n";
                                                             }
                                                                    }
                                                            if (check==2) {
                                                            cout<<"\nSorry try again!";


                                                            }
                                                    }


                                                        if (a!=1 && b > 0 && c < 0) {
                                            cout<<"\nYour equation looks like: "<<endl;
                                                cout<<a<<"x^2"<<" + "<<b<<"x"<<" "<<c<<" = 0?\n";
                                                    cout<<"Type 1 if yes, 2 if no.\n\nType here: ";
                                                    double check;
                                                    cin>>check;
                                                        while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }

                                                                            if (d<0){
                                                                            cout<<"\nAnswer does not exist.\n";
                                                                                        }
                                                                    }
                                                            if (check==2) {
                                                            cout<<"\nSorry try again!";


                                                            }
                                                    }

                                                            if (a!=1 && b < 0 && c < 0) {
                                            cout<<"\nYour equation looks like: "<<endl;
                                                cout<<a<<"x^2"<<" "<<b<<"x"<<" "<<c<<" = 0?\n";
                                                    cout<<"Type 1 if yes, 2 if no.\n\nType here: ";
                                                    double check;
                                                    cin>>check;
                                                        while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }
                                                                        if (d<0) {
                                                                        cout<<"\nAnswer does not exist.\n";
                                                                            }
                                                                    }
                                                            if (check==2) {
                                                            cout<<"\nSorry try again!";


                                                            }
                                                    }



                                                            if (a==1 && b < 0 && c < 0) {
                                                            cout<<"\nYour equation looks like: "<<endl;
                                                            cout<<"x^2"<<" "<<b<<"x"<<" "<<c<<" = 0?\n";
                                                            cout<<"Type 1 if yes, 2 if no.\n\nType here: ";
                                                                double check;
                                                                    cin>>check;
                                                                while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }
                                                                        if (d<0) {
                                                                        cout<<"\nAnswer does not exist.\n";
                                                                            }
                                                                    }
                                                            if (check==2)
                                                            { cout<<"\nSorry try again!";}
                                                    }



                                                            if (a==1 && b<0 && c>0) {
                                                            cout<<"\nYour equation looks like: "<<endl;
                                                            cout<<"x^2"<<" "<<b<<"x"<<" + "<<c<<" = 0?\n";
                                                            cout<<"Type 1 if yes, 2 if no.\n\nType here: ";

                                                                        double check;
                                                                    cin>>check;

                                                                            while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                    cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }

                                                             if (d<0)  {
                                                             cout<<"\nAnswer does not exist.";
                                                             }
                                                                    }
                                                            if (check==2) {
                                                            cout<<"\nSorry try again!"; }
                                                            }



                                                        if (a==1 && b>0 && c<0) {
                                                        cout<<"\nYour equation looks like: "<<endl;
                                                        cout<<"x^2"<<" + "<<b<<"x"<<" "<<c<<" = 0?\n";
                                                        cout<<"Type 1 if yes, 2 if no.\n\nType here: ";

                                                            double check;
                                                                cin>>check;

                                                            while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }

                                                                            if (d<0){
                                                                            cout<<"\nAnswer does not exist.\n";
                                                                                        }
                                                                    }
                                                            if (check==2) {
                                                            cout<<"\nSorry try again!"; } }



                                                            if (a==1 && b>0 && c>0) {
                                                            cout<<"\nYour equation looks like: "<<endl;
                                                            cout<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<" = 0?\n";
                                                            cout<<"Type 1 if yes, 2 if no.\n\nType here: ";
                                                                double check;
                                                                    cin>>check;
                                                                while (check<1 || check>2) {
                                                            cout<<"Please, type 1 or 2!\nType here: ";
                                                                    cin>>check;
                                                                }

                                                        if (check==1) {
                                                             d=b*b+eq4*a*c;
                                                                if (d>0) {
                                                                                res = (eq1*b+sqrt(d)) / (a+a);
                                                                                res1 = (eq1*b-sqrt(d)) / (a+a);
                                                                                cout<<"\nYou first result is: "<<res<<endl;
                                                                                cout<<"\nYou second result is: "<<res1<<endl;
                                                                        }

                                                                        if (d<0) {
                                                                            cout<<"\nAnswer does not exist.\n";
                                                                                }

                                                                    }

                                                            if (check==2) {
                                                            cout<<"\nSorry try again!"; } }

                        }

    return 0;
}
