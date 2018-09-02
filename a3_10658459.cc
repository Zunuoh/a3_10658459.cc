
#include <iostream>
using namespace std;
int main()
{
 int grade;
cout<<"Please enter your grade"<<endl;
cin>>grade;

 if(grade >=80 && grade <=100)
{
  cout<<"You had an A";
}

 else if (grade >=75 && grade <=79)
{
 cout<<"You had a B+";
}

 else if (grade >=70 && grade <=74)
{
 cout<<"You had a B";
}

  else if (grade >=65 && grade <=69)
{
 cout<<"You had a C+";
}

  else if (grade >=60 && grade <=64)
{
 cout<<"You had a C";
}

 else if (grade >=55 && grade <=59)
{
 cout<<"You had a D+";
}

 else if (grade >=50 && grade <=54)
{
 cout<<"You had a D";
}

 else if (grade >=45 && grade <=49)
{
 cout<<"You had an E";
}

else if (grade >=0 && grade <=44)
{
 cout<<"You had an F";
}



return 0;
}
