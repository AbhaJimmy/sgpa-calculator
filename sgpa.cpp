#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
//a[] = internal marks
//b[] = external marks
//c[] = grade point
//d[] = credits
    float a[10], b[10]; int i;
//credits = maths,dsa,dec,cle,oop, DSA Lab, DEC Lab, OOPS Lab, DTI, internship
    float c[10], d[]={3,4,3,2,3,1,1,1,1,1}, sum=0;

    cout<<"\nEnter Total Internal Marks of:\n1.Maths\n2.DSA\n3.DEC\n4.CLE\n5.OOPS\n6.DSA Lab (out of 50)\n7.DEC Lab (out of 50)\n8.OOPS Lab (out of 50)\n9.DTI (out of 50)\n10.Internship (out of 50)";
    for (i=0; i<10; i++) {
        cout<<"\nEnter Marks of "<<i+1<<":";
        cin>>a[i];
    }

  cout<<"\n\nEnter External Marks of:\n1.Maths\n2.DSA\n3.DEC\n4.CLE\n5.OOPS\n6.DSA Lab (out of 50)\n7.DEC Lab (out of 50)\n8.OOPS Lab (out of 50)\n9.DTI (out of 50)\n10.Internship (out of 50)";
    for (i=0; i<10; i++) {
        cout<<"\nEnter Marks of "<<i+1<<":";
        cin>>b[i];
    }

    cout<<"\n\nTotal Marks of (OUT OF 200):\n1.Maths\n2.DSA\n3.DEC\n4.CLE\n5.OOPS\n6.DSA Lab\n7.DEC Lab\n8.OOPS Lab\n9.DTI\n10.Internship";
    //theory subjects (out of 200)
    for (i=0; i<5; i++) {
        cout<<"\nMarks of "<<i+1<<"="<<a[i]+b[i]<<"/200";
        cout<<"\nGrade Point = "<<round(((a[i]+b[i])*100)/2000);
        //calculate grade point
        c[i] = ((a[i]+b[i])*100)/2000;
    }
    //practical subjects (out of 100)
    for (i=5; i<10; i++) {
        cout<<"\nMarks of "<<i+1<<"="<<a[i]+b[i]<<"/100";
        cout<<"\nGrade Point = "<<round(((a[i]+b[i])*10)/100);
        //calculate grade point
        c[i] = ((a[i]+b[i])*10)/100;
    }
    // calculate sum of all grade_point * credits
    for (i=0; i<10; i++)
        sum = sum + (c[i]*d[i]);
    cout<<"\nSum of all grade_point * credits: "<<setprecision(3)<<sum;
    // sgpa = sum/total credits 
    cout<<"\n\nSGPA (for 20 credits): "<<setprecision(3)<<sum/20;
    return 0;
}
