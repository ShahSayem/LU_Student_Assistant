#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;



struct login
{
    char name[30];
    char id[20];
    char sec[2];
    char dept[20];
    int batch;
    float credit;
    char current_sem[15];
    float avg_res;
    char bg[3];
    char pass[20];

};
struct login l;

int login();

void pro_name()
{
    
    int t = 137;
    while (t--)
    {
        cout<<"*";
    }
    cout<<endl<<endl;
    cout<<"                                                    \x03 \x03 \x03 LU Student Assistant \x03 \x03 \x03"<<endl<<endl;
    int t2 = 137;
    while (t2--)
    {
        cout<<"*";
    }
    cout<<endl<<endl;
}

void Stu_info()
{
    system("CLS");

    pro_name();

    cout<<"\t\t\t\t\t\t\t### Student information:"<<endl<<endl;

    cout<<"\t\t\t\t\t\t\tEnter student id: ";
    long long id;
    cin>>id;

    system("CLS");

    if (id == 2122020043)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Shah Sayem Ahmad"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020043"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.60"<<endl;
    }
    else if (id == 2122020015)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Ahmad Mihda Chowdhury"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020015"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.32"<<endl;
    }
    else if (id == 2122020022)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Banya Biswas Trisha"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020022"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.77"<<endl;
    }
    else if (id == 2122020007)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\tName: Anindita Gope Orchi"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020007"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.12"<<endl;
    }
    else if (id == 2122020001)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: MD Kamran Hussen"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020001"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 2.97"<<endl;
    }
    else if (id == 2122020003)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Md Mahmud Hossain Ferdous"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020003"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.57"<<endl;
    }
    else if (id == 2122020008)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Amortha Paul"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020008"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.44"<<endl;
    }
    else if (id == 2122020010)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Ayesha Ferdous"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020010"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.92"<<endl;
    }
    else if (id == 2122020011)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Hasibur Rahman Khurasani Jawad"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020011"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.31"<<endl;
    }
    else if (id == 2122020012)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Md. Mahin Usman"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020012"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.43"<<endl;
    }
    else if (id == 2122020013)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Abida Sultana Nowshin"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020013"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.28"<<endl;
    }
    else if (id == 2122020016)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Farzana Akther Juhee"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020016"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.69"<<endl;
    }
    else if (id == 2122020018)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Muhammad Nadim"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020018"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.92"<<endl;
    }
    else if (id == 2122020020)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Rahat Alam"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020020"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.41"<<endl;
    }
    else if (id == 2122020021)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Md. Shahir Sammun"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020021"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.43"<<endl;
    }
    else if (id == 2122020025)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Moumita Dhor Chowdhury"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020025"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.29"<<endl;
    }
    else if (id == 2122020026)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Nuzhat Rahman"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020026"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.08"<<endl;
    }
    else if (id == 2122020018)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Nafisa Maliath"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020027"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.01"<<endl;
    }
    else if (id == 2122020030)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Hasan Ahmed"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020030"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.19"<<endl;
    }
    else if (id == 2122020031)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Afsar Ahmed Opu"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020031"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 2.97"<<endl;
    }
    else if (id == 2122020032)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Sajeeb Bhattacharjee"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020032"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.59"<<endl;
    }
    else if (id == 2122020033)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Dilwar Hossain "<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020033"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.91"<<endl;
    }
    else if (id == 2122020034)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Imdadul Haque Ohi"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020034"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.78"<<endl;
    }
    else if (id == 2122020035)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Syed Abu Raiyan Sarhad"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020035"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.89"<<endl;
    }
    else if (id == 2122020036)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Tamanna Rashid Mim"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020036"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.39"<<endl;
    }
    else if (id == 2122020037)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Safa Majumder"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020037"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.21"<<endl;
    }
    else if (id == 2122020038)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Milton Dey Mishu"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020038"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 2.95"<<endl;
    }
    else if (id == 2122020039)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Saima Begum"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020039"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.10"<<endl;
    }
    else if (id == 2122020040)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Md. Ather Abeed"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020040"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.50"<<endl;
    }
    else if (id == 2122020041)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Abu Sufian Rafi"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020041"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.47"<<endl;
    }
    else if (id == 2122020042)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Farjana Masuma"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020042"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.46"<<endl;
    }
    else if (id == 2122020044)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Fariha Rahman"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020044"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 2.88"<<endl;
    }
    else if (id == 2122020045)
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\x03 \x03 \x03 Student information:"<<endl<<endl<<"\t\t\t\t\t\t\tName: Numan Ahmed Rony"<<endl<<"\t\t\t\t\t\t\tBatch: 57"<<endl<<"\t\t\t\t\t\t\tDepartmant: CSE"<<endl<<"\t\t\t\t\t\t\tSection: A"<<endl<<"\t\t\t\t\t\t\tID: 2122020045"<<endl<<"\t\t\t\t\t\t\tAverage CGPA: 3.38"<<endl;
    }
    else
    {
        cout<<endl<<endl<<"\t\t\t\t\t\t\tSorry!!! Invalid id"<<endl;
    }
}

void Class_routine()
{
    system("CLS");

    pro_name();

    cout<<"\t\t\t\t\t\t\tClass Routine:"<<endl<<endl;
    string dept;
    cout<<"\t\t\t\t\t\t\tDepartment : ";
    cin>>dept;

    int batch;
    cout<<"\t\t\t\t\t\t\tBatch : ";
    cin>>batch;
    if(dept == "cse" && batch == 56)
    {
        string day ;
        cout<<"\t\t\t\t\t\t\tDay : ";
        cin>>day;
        cout<<endl<<endl;

        string d1 = "sat",d2 = "mon",d3 = "tue",d4 = "wed",d5 = "thu";
        if (day == d1)
        {
            cout<<"\t\t\t\t[(9:50-10:40)am: ACM-1000_DCP_ACL-1]"<<"\t"<<"[(10:45-11:35)am: ACM-1000_DCP_ACL-1]"<<"\n\t\t\t\t"<<"[(11:40-12:30)pm: ACM-1000_DCP_ACL-1]";
        }
        else if (day == d2)
        {
            cout<<"\t\t\t\t[(8:55-9:45)am: MATH-1315_KJH_R-304]"<<"\t"<<"[(11:40-12:30)pm: GED-123_JTE_G-2]";
        }
        else if (day == d3)
        {
            cout<<"\t\t\t\t[(12:35-1:25)pm: CSE-1316_SRK_ACL-2]"<<"\t"<<"[(2:15-3:05)pm: CSE-1316_SRK_ACL-2]"<<"\n\t\t\t\t"<<"[(3:10-4:00)pm: CSE-1315_SRK_R-304]";
        }
        else if (day == d4)
        {
            cout<<"\t\t\t\t[(3:10-4:00)pm: GED-125_HB_G-3]";
        }
        else if (day == d5)
        {
            cout<<"\t\t\t\t[(8:55-9:45)am: GED-125_HB_G-3]"<<"\t"<<"[(9:50-10:40)am: GED-125_HB_G-3]";
        }
        else
        {
            cout<<"\t\t\t\t\t\t\tNo classes"<<endl;
        }
    }
    else  if  (dept == "cse" && batch == 57)
    {
        string day ;
        cout<<"\t\t\t\t\t\t\tDay : ";
        cin>>day;
        cout<<endl<<endl;
        string d1 = "sat",d2 = "sun",d3 = "mon",d4 = "thu";
        if (day == d1)
        {
            cout<<"\t\t\t\t[(9:50-10:40)am: ACM-1000_DCP_ACL-1]"<<"\t"<<"[(10:45-11:35)am: ACM-1000_DCP_ACL-1]"<<"\n\t\t\t\t"<<"[(11:40-12:30)pm: ACM-1000_DCP_ACL-1]";
        }
        else if (day == d2)
        {
            cout<<"\t\t\t\t[(9:50-10:40)am: GED-125_HB_G-3]"<<"\t"<<"[(10:45-11:35)am: CSE-1215_STA_R-102]"<<"\n\t\t\t\t"<<"[(11:40-12:30)pm: CSE-1215_STA_R-102]"<<"\t"<<"[(12:35-1:25)pm: MATH-1213_KJH_R-309]"<<"\n\t\t\t\t"<<"[(2:15-3:05)pm: MATH-1213_KJH_R-309]";
        }
        else if (day == d3)
        {
            cout<<"\t\t\t\t[(8:55-9:45)am: CSE-1215_STA_R-302]"<<"\t"<<"[(9:50-10:40)am: GED-125_HB_G-3]"<<"\n\t\t\t\t"<<"[(10:45-11:35)pm: GED-125_HB_G-3]"<<"\t"<<"[(12:35-1:25)pm: CSE-1213_SRK_R-106]"<<"\n\t\t\t\t"<<"[(2:15-3:05)pm: CSE-1213_SRK_R-106]";
        }
        else if (day == d4)
        {
            cout<<"\t\t\t\t[(8:55-9:45)am: CSE-1213_SRK_ACL-1]"<<"\t"<<"[(9:50-10:40)am: CSE-1213_SRK_ACL-1]"<<"\n\t\t\t\t"<<"[(10:45-11:35)pm: MATH-1213_KJH_R-302]"<<"\t"<<"[(12:35-1:25)pm: CSE-1213_SRK_R-302]";
        }
        else
        {
            cout<<"\t\t\t\t\t\t\tNo classes"<<endl;
        }
    }
    else if(dept == "cse" && batch == 58)
    {
        string day ;
        cout<<"\t\t\t\t\t\t\tDay : ";
        cin>>day;
        cout<<endl<<endl;
        string d1 = "sat",d2 = "sun",d3 = "wed",d4 = "thu";
        if (day == d1)
        {
            cout<<"\t\t\t\t[(9:50-10:40)am: ACM-1000_DCP_ACL-1]"<<"\t"<<"[(10:45-11:35)am: ACM-1000_DCP_ACL-1]"<<"\n\t\t\t\t"<<"[(11:40-12:30)pm: ACM-1000_DCP_ACL-1]";
        }
        else if (day == d2)
        {
            cout<<"\t\t\t\t[(10:50-11:35)am: CSE-1111_RLP_R-304]"<<"\t"<<"[(11:40-12:30)am: CSE-1111_RLP_R-304]";
        }
        else if (day == d3)
        {
            cout<<"\t\t\t\t[(9:50-10:40)am: MATH-1111_KJH_R-309]"<<"\t"<<"[(10:45-11:35)pm: MATH-1111_KJH_R-309]";
        }
        else if (day == d4)
        {
            cout<<"\t\t\t\t[(8:55-9:45)am: MATH-1111_KJH_R-309]"<<"\t"<<"[(10:45-11:35)pm: CSE-1112_PRB_ACL-1]"<<"\n\t\t\t\t"<<"[(11.40-12.30)pm: CSE-1112_PRB_ACL-1]"<<"\t"<<"[(12:35-1:25)pm: CEE-2110_MJR_ACL-2]"<<"\n\t\t\t\t"<<"[(2:15-3:05)pm: CEE-2110_MJR_ACL-2]"<<"\t"<<"[(3:10-4:00)pm: CEE-2110_MJR_ACL-2]";
        }
        else
        {
            cout<<"\t\t\t\t\t\t\tNo classes"<<endl;
        }

    }
    else
    {
        cout<<endl<<"\t\t\t\t\t\t\tSorry!!! Invalid department or batch"<<endl;
    }
}

void Bus_schedule()
{
    system("CLS");

    pro_name();

    cout<<"\t\t\t\t\t\t\t### Bus Schedule: "<<endl<<endl;
    int bus;
    cout<<"\t\t\t\t\t\t\tEnter bus route no: ";
    cin>>bus;
    if    (bus == 4)
    {
        cout<<endl<<endl<<"\t\tStarts from: Tilagor to (Shibgonj, Naiorpul, Subhanighat, Rose view pt, Kodomtoli, Bypass)"<<endl;
        cout<<endl<<endl<<"\t\t# Sunday to Thursday:"<<endl<<endl<<"\t\tStarting time: 8 am, 9 am, 10 am, 11 am, 12.45 pm"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 12 pm, 2 pm, 2.45 pm, 4.10 pm (As per Route closing at this time)";
        cout<<endl<<endl<<"\t\t# Friday:"<<endl<<endl<<"\t\tStaring time: 8 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
        cout<<endl<<endl<<"\t\t# Saturday:"<<endl<<endl<<"\t\tStaring time: 9 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
    }
    else if(bus == 3)
    {
        cout<<endl<<endl<<"\t\tStarts from: Lakkatura to (Chowkidekhi, Amberkhana, Subidbazar, Pathantula, Modina Market, Sust gate, Temikhi Bridge)"<<endl;
        cout<<endl<<endl<<"\t\t# Sunday to Thursday:"<<endl<<endl<<"\t\tStarting time: 8 am, 9 am, 10 am, 11 am, 12.45 pm"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 12 pm, 2 pm, 2.45 pm, 4.10 pm (As per Route closing at this time)";
        cout<<endl<<endl<<"\t\t# Friday:"<<endl<<endl<<"\t\tStaring time: 8 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
        cout<<endl<<endl<<"\t\t# Saturday:"<<endl<<endl<<"\t\tStaring time: 9 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
    }
    else if(bus == 2)
    {
        cout<<endl<<endl<<"\t\tStarts from: Surmatower to (Jitumiar pt, Kazirbazar Bridge, Lamabazar, Rikabibazar, Radio office)"<<endl;
        cout<<endl<<endl<<"\t\t# Sunday to Thursday:"<<endl<<endl<<"\t\tStarting time: 8 am, 9 am, 10 am, 11 am, 12.45 pm"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 12 pm, 2 pm, 2.45 pm, 4.10 pm (As per Route closing at this time)";
        cout<<endl<<endl<<"\t\t# Friday:"<<endl<<endl<<"\t\tStaring time: 8 am, 9 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
        cout<<endl<<endl<<"\t\t# Saturday:"<<endl<<endl<<"\t\tStaring time: 9 am, 10 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
    }
    else if(bus == 1)
    {
        cout<<endl<<endl<<"\t\tStarts from: Tilagor to (Baluchar, TB gate, Eidgah, Electric Supply, Amberkhana)"<<endl;
        cout<<endl<<endl<<"\t\t# Sunday to Thursday:"<<endl<<endl<<"\t\tStarting time: 8 am, 9 am, 10 am, 11 pm, 12.45 pm"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 12 pm, 2 pm, 2.45 pm, 4.10 pm (As per Route closing at this time)";
        cout<<endl<<endl<<"\t\t# Friday:"<<endl<<endl<<"\t\tStaring time: 8 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
        cout<<endl<<endl<<"\t\t# Saturday:"<<endl<<endl<<"\t\tStaring time: 8 am"<<endl<<endl<<"\t\tReturn From: University"<<endl<<endl<<"\t\tTime: 4.10 pm";
    }
    else
    {
        cout<<endl<<"\t\t\t\t\t\t\tSorry!!! Invalid bus route no"<<endl;
    }

}

/*void Tasks_updates()
{
    system("CLS");

    pro_name();

    cout<<"Tasks and Updates: "<<endl<<endl;
    cout<<endl<<"Options:"<<endl;
    cout<<"1. Tasks and Updates"<<endl;
    cout<<"2. Mid Term Exam"<<endl;
    cout<<"3. Semester Final Exam"<<endl;
    cout<<"4. Lab Final Exam"<<endl<<endl;

    int task;
    cout<<"Enter option: ";
    cin>>task;
    if(task == 1)
    {
        cout<<endl<<endl<<"# Tasks and Updates:"<<endl<<endl<<"Varsity will remain close till 6 February, 2022.";
    }
    else if(task == 2)
    {
        cout<<endl<<endl<<"# Mid Term Exam: "<<endl<<endl<<"No schedule here";
    }
    else if(task == 3)
    {
        cout<<endl<<endl<<"# Semester Final Exam: "<<endl<<endl<<"No schedule here";
    }
    else if(task == 4)
    {
        cout<<endl<<endl<<"# Lab Final Exam: "<<endl<<endl<<"CSE-1214 (Project Defence): 26 January,2022 at G-2, time - 11 am"<<endl;
    }
    else
    {
        cout<<endl<<"  Sorry!!! Invalid option"<<endl;
    }
}*/

void Result()
{
    system("CLS");

    pro_name();

    cout<<"\t\t\t\t\t\t\t ###  Result: "<<endl<<endl;
    string studentID;
    cout<<"\t\t\t\t\t\tEnter ID Number: ";
    cin>>studentID;
    if(studentID == "2122020001")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.97"<<endl<<"\t\t\t\t\t\tGrade: B-"<<endl<<endl;
    }
    else if(studentID == "2122020002")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.57"<<endl<<"\t\t\t\t\t\tGrade: C+"<<endl<<endl;
    }
    else if(studentID == "2122020003")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.57"<<endl<<"\t\t\t\t\t\tGrade: A-"<<endl<<endl;
    }
    else if(studentID == "2122020007")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.12"<<endl<<"\t\t\t\t\t\tGrade: B"<<endl<<endl;
    }
    else if(studentID == "2122020008")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.44"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020010")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.92"<<endl<<"\t\t\t\t\t\tGrade: A"<<endl<<endl;
    }
    else if(studentID == "2122020011")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.31"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020012")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.45"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020013")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.28"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020015")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.32"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020016")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.69"<<endl<<"\t\t\t\t\t\tGrade: A-"<<endl<<endl;
    }
    else if(studentID == "2122020017")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.25"<<endl<<"\t\t\t\t\t\tGrade: C"<<endl<<endl;
    }
    else if(studentID == "2122020018")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.92"<<endl<<"\t\t\t\t\t\tGrade: A"<<endl<<endl;
    }
    else if(studentID == "2122020020")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.41"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020021")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.43"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020022")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.77"<<endl<<"\t\t\t\t\t\tGrade: A"<<endl<<endl;
    }
    else if(studentID == "2122020023")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.7"<<endl<<"\t\t\t\t\t\tGrade: C+"<<endl<<endl;
    }
    else if(studentID == "2122020025")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.29"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020026")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.08"<<endl<<"\t\t\t\t\t\tGrade: B"<<endl<<endl;
    }
    else if(studentID == "2122020027")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.01"<<endl<<"\t\t\t\t\t\tGrade: B"<<endl<<endl;
    }
    else if(studentID == "2122020030")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.19"<<endl<<"\t\t\t\t\t\tGrade: B"<<endl<<endl;
    }
    else if(studentID == "2122020031")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.97"<<endl<<"\t\t\t\t\t\tGrade: B-"<<endl<<endl;
    }
    else if(studentID == "2122020032")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.59"<<endl<<"\t\t\t\t\t\tGrade: A-"<<endl<<endl;
    }
    else if(studentID == "2122020033")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.91"<<endl<<"\t\t\t\t\t\tGrade: A"<<endl<<endl;
    }
    else if(studentID == "2122020034")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.78"<<endl<<"\t\t\t\t\t\tGrade: A"<<endl<<endl;
    }
    else if(studentID == "2122020035")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.89"<<endl<<"\t\t\t\t\t\tGrade: A"<<endl<<endl;
    }
    else if(studentID == "2122020036")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.39"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020037")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.21"<<endl<<"\t\t\t\t\t\tGrade: B"<<endl<<endl;
    }
    else if(studentID == "2122020038")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.95"<<endl<<"\t\t\t\t\t\tGrade: B-"<<endl<<endl;
    }
    else if(studentID == "2122020039")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.1"<<endl<<"\t\t\t\t\t\tGrade: B"<<endl<<endl;
    }
    else if(studentID == "2122020040")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.5"<<endl<<"\t\t\t\t\t\tGrade: A-"<<endl<<endl;
    }
    else if(studentID == "2122020041")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.47"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020042")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.46"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020043")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.6"<<endl<<"\t\t\t\t\t\tGrade: A-"<<endl<<endl;
    }
    else if(studentID == "2122020044")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.88"<<endl<<"\t\t\t\t\t\tGrade: B-"<<endl<<endl;
    }
    else if(studentID == "2122020045")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.38"<<endl<<"\t\t\t\t\t\tGrade: B+"<<endl<<endl;
    }
    else if(studentID == "2122020046")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.67"<<endl<<"\t\t\t\t\t\tGrade: A-"<<endl<<endl;
    }
    else if(studentID == "2122020047")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.86"<<endl<<"\t\t\t\t\t\tGrade: A"<<endl<<endl;
    }
    else if(studentID == "2122020048")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.66"<<endl<<"\t\t\t\t\t\tGrade: C+"<<endl<<endl;
    }
    else if(studentID == "2122020049")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.06"<<endl<<"\t\t\t\t\t\tGrade: B"<<endl<<endl;
    }
    else if(studentID == "2122020050")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 3.68"<<endl<<"\t\t\t\t\t\tGrade: A-"<<endl<<endl;
    }
    else if(studentID == "2122020051")
    {
        cout<<endl<<"\t\t\t\t\t\tSemester: Summer-2021"<<endl<<"\t\t\t\t\t\tCGPA: 2.34"<<endl<<"\t\t\t\t\t\tGrade: C"<<endl<<endl;
    }
    else
    {
        cout<<endl<<"\t\t\t\t\t\tInvalid ID"<<endl<<endl;
    }
}

/*void Teacher_staff_info()
{
    system("CLS");

    pro_name();

    cout<<"Teacher's and Staff's information: "<<endl<<endl;
    string Department ;
    cout<<"Department : ";
    cin>>Department;
    string dept1 = "cse",dept2 = "eee",dept3 = "civil",dept4 = "bba",dept5 = "english";
    if(Department == dept1)
    {
        cout<<endl<<"Teacher's and Staff's information:"<<endl<<endl;
        cout<<"1.Md Saidur Rahman Kohinoor"<<endl<<"Lecturer, Department of CSE"<<endl<<"Phone: 01732-477046"<<endl<<endl;
        cout<<"2.Rana M Luthfur Rahman Pir"<<endl<<"Assistant Professor, Department of CSE"<<endl<<"Phone: 01763-460076"<<endl<<endl;
        cout<<"3.Kazi Md. Jahid Hasan"<<endl<<"Lecturer (Mathematics), Department of CSE"<<endl<<"Phone: 01676-480060"<<endl<<endl;
        cout<<"4.Prithwiraj Bhattacharjee"<<endl<<"Lecturer, Department of CSE"<<endl<<"Phone: 01985-240328"<<endl<<endl;
        cout<<"5.Dipta Paul"<<endl<<"Lecturer, Department of CSE"<<endl<<"Phone: 01744-420273"<<endl<<endl;
    }
    else if(Department == dept2)
    {
        cout<<endl<<"Teacher's and Staff's information:"<<endl<<endl;
        cout<<"1.Md. Kamruzzaman"<<endl<<"Assistant Professor, Head of the Department(Acting), Department of EEE"<<endl<<"Phone: 01580831271"<<endl<<endl;
        cout<<"2.Md. Niaz Morshedul Haque"<<endl<<"Lecturer, Department of EEE"<<endl<<"Phone: 01717255769"<<endl<<endl;
        cout<<"3.Rafiqul Islam"<<endl<<"Assistant Professor, Department of EEE"<<endl<<"Phone: 01716 446071"<<endl<<endl;
        cout<<"4.Mrinal Kanti Dhar"<<endl<<"Assistant Professor, Department of EEE"<<endl<<"Phone: 01719447739"<<endl<<endl;
        cout<<"5.Gulam Mahfuz Chowdhury"<<endl<<"Lecturer, Department of EEE"<<endl<<"Phone: 01303128793"<<endl<<endl;
    }
    else if(Department == dept3)
    {
        cout<<endl<<"Teacher's and Staff's information:"<<endl<<endl;
        cout<<"1.Syeda Zehan Farzana"<<endl<<"Associate Professor, Head of the Department, Department of Civil Engineering"<<endl<<"Phone: 01911017626"<<endl<<endl;
        cout<<"2.Engr. Md. Aminul Haque"<<endl<<"Associate Professor and Former Head(Acting), Department of Civil Engineering"<<endl<<"Phone:01672005555"<<endl<<endl;
        cout<<"3.Chowdhury Mohammed Shams Wahid"<<endl<<"Assistant Professor, Department of Civil Engineering"<<endl<<"Phone: 01719192149"<<endl<<endl;
        cout<<"4.Shabbir Ahmed Osmani"<<endl<<"Assistant Professor, Department of Civil Engineering"<<endl<<"Phone: 01751-232-163"<<endl<<endl;
        cout<<"5.Sheikh Hefzul Bari"<<endl<<"Assistant Professor, Department of Civil Engineering"<<endl<<"Phone: 01711188073"<<endl<<endl;
    }
    else if(Department == dept4)
    {
        cout<<endl<<"Teacher's and Staff's information:"<<endl<<endl;
        cout<<"1.Professor Dr. Bashir Ahmed Bhuiyan"<<endl<<"Dean, Department of Business Administration"<<endl<<"Phone:01871333355"<<endl<<endl;
        cout<<"2.Md. Jahangir Alam"<<endl<<"Associate Professor, Head of the Department, Department of Business Administration"<<endl<<"Phone: 01711009899"<<endl<<endl;
        cout<<"3.Wahida Akther"<<endl<<"Assistant Professor(AIS), Department of Business Administration"<<endl<<"Phone: 01819538975"<<endl<<endl;
        cout<<"4.Mohammad Zahed Hossain"<<endl<<"Assistant Professor(Finance & Banking), Department of Business Administration"<<endl<<"E-mail: zahed@lus.ac.bd"<<endl<<endl;
        cout<<"5.Md. Hafizur Rahman Khan"<<endl<<"Assistant Professor(Finance), Department of Business Administration"<<endl<<"Phone: 01737401135"<<endl<<endl;
    }
    else if(Department == dept5)
    {
        cout<<endl<<"Teacher's and Staff's information:"<<endl<<endl;
        cout<<"1.Dr. Md. Rezaul Karim"<<endl<<"Associate Professor, Head Director, IQAC, Department of English"<<endl<<"Phone: 01711467396"<<endl<<endl;
        cout<<"2.Rumpa Sharmin"<<endl<<"Assistant Professor, Department of English"<<endl<<"Phone: 01711147833"<<endl<<endl;
        cout<<"3.Ms. Shammi Akter"<<endl<<"Assistant Professor, Department of English"<<endl<<"Phone: 01674764323"<<endl<<endl;
        cout<<"4.Muhammad Nazrul Islam"<<endl<<"Assistant Professor, Department of English"<<endl<<"Phone: 01717326505"<<endl<<endl;
        cout<<"5.Ms. Jarin Tasnim Elahi"<<endl<<"Lecturer, Department of English"<<endl<<"Phone: 01712332441"<<endl<<endl;
    }
    else
    {
        cout<<endl<<"  Sorry!!! Invalid department"<<endl;
    }
}*/

void Library()
{
    system("CLS");

    pro_name();

    cout<<"\t\t\t\t\t\t\t ### Library: "<<endl<<endl;
    cout<<"\t\t\t\t\t\tOptions:\n\n\t\t\t\t\t\t1.Request Library Membership\n\t\t\t\t\t\t2.View Available Books"<<endl;
    cout<<endl<<"\t\t\t\t\t\tEnter your option: ";
    int lib;
    cin>>lib;
    cout<<endl;

    if (lib == 1)
    {
        cout<<endl<<"\t\t\t\t\tThanks for submitting library membership request."<<endl<<"\t\t\t\t\tWe will inform you on your library membership request after reviewing your request. \2"<<endl;
    }
    else if (lib == 2)
    {
        cout<<"\t\t\t# Available Books: "<<endl;
        cout<<"\t\t\tA. C Programming Absolute Beginners Guide- Greg Perry and Dean Miller  "<<endl;
        cout<<"\t\t\tB. C Programming Language (2nd Edition)- Brain W. Kernighan"<<endl;
        cout<<"\t\t\tC  C++ Primer- Barbara E. Moo, Jose Lajoie, and Stanley B. Lippman"<<endl;
        cout<<"\t\t\tD. Discrete mathematics and its applications-  Kenneth H. Rosen"<<endl;
        cout<<"\t\t\tE. Introductory discrete mathematics- V. Balakrishnan"<<endl;
        cout<<"\t\t\tF. The Sociological Imagination- C. Wright Mills"<<endl;
        cout<<"\t\t\tG. The Theory of Social and Economic Organization- Max Weber"<<endl;
        cout<<"\t\t\tH. Foundations of Social Theory- James Samuel Coleman"<<endl;
        cout<<"\t\t\tI. Beginning Programming With Java for Dummies- Barry A. Burd"<<endl;
        cout<<"\t\t\tJ. Effective Java- Joshua Bloch"<<endl;
        cout<<"\t\t\tK. HTML & CSS: Design and Build Web Sites- Jon Duckett"<<endl;
        cout<<"\t\t\tL. Systems Analysis and Design: An Object-Oriented Approach with UML- Alan Dennis and David Tegarden"<<endl;
        cout<<"\t\t\tM. Computer Networking: A Top-down Approach- Jim Kurose"<<endl;
    }
    else
    {
        cout<<"\t\t\t\tSorry!!! invalid option"<<endl;
    }
}

void Accommodation()
{

    system("CLS");

    pro_name();

    cout<<"\t\t\t\t\t\t\t ### Accomodation: ";

    printf("\n\n\t\t\t\t\t\tOptions : \n\n");
    printf("\t\t\t\t\t\t1. Post for get Accomodation\n");
    printf("\t\t\t\t\t\t2. Post for rent a house\n");

    int o;
    printf("\n\n\t\t\t\t\t\tEnter option: ");
    scanf("%d",&o);

    struct p
    {
        char namep[1000];
        char post1[1000];
        char loc[1000];
        char ph[1000];
        char namep2[1000];
        char post2[1000];
        char loc2[1000];
        char ph2[1000];
    };

    struct p s;

    if(o==1)
    {

        printf("\n\t\t\t\t\t\tName : ");
        fflush(stdin);
        gets(s.namep);

        printf("\t\t\t\t\t\tDetails : ");
        fflush(stdin);
        gets(s.post1);
        printf("\t\t\t\t\t\tLocation : ");
        fflush(stdin);
        gets(s.loc);
        printf("\t\t\t\t\t\tPhone : ");
        fflush(stdin);
        gets(s.ph);

        int aa;
        printf("\n\t\t\t\t\t\tIf you want to see your post than enter 1 else any key to exit: ");
        scanf("%d", &aa);
        if(aa == 1)
        {

            printf("\n\t\t\t\t\t\tName : ");
            fflush(stdin);
            puts(s.namep);

            printf("\t\t\t\t\t\tDetails : ");
            fflush(stdin);
            puts(s.post1);
            
            printf("\t\t\t\t\t\tLocation : ");
            fflush(stdin);
            puts(s.loc);

            printf("\t\t\t\t\t\tPhone : ");
            fflush(stdin);
            puts(s.ph);
        }

    }
    if(o==2)
    {

        printf("\n\t\t\t\t\t\tName : ");

        fflush(stdin);
        gets(s.namep2);
        printf("\t\t\t\t\t\tDetails : ");

        fflush(stdin);
        gets(s.post2);
        printf("\t\t\t\t\t\tLocation : ");

        fflush(stdin);
        gets(s.loc2);
        printf("\t\t\t\t\t\tPhone : ");

        fflush(stdin);
        gets(s.ph2);

        int bb;
        printf("\t\t\t\t\t\tIf you want to see your post than enter 1 else any key to exit: ");
        scanf("%d", &bb);
        if(bb == 1)
        {

            printf("\n\t\t\t\t\t\tName : ");
            fflush(stdin);
            puts(s.namep2);

            printf("\t\t\t\t\t\tDetails : ");
            fflush(stdin);
            puts(s.post2);

            printf("\t\t\t\t\t\tLocation : ");
            fflush(stdin);
            puts(s.loc2);

            printf("\t\t\t\t\t\tPhone : ");
            fflush(stdin);
            puts(s.ph2);

        }
    }

}

/*void Blood_bank()
{
    system("CLS");

    pro_name();


    cout<<"Blood Bank: "<<endl<<endl;
    cout<<"Doner's list and contact information:"<<endl<<endl;
    cout<<"1.Md Saidur Rahman Kohinoor"<<endl<<"   Blood group: B+"<<endl<<"   Lecturer, Department of CSE"<<endl<<"   Phone: 01732-477046"<<endl<<endl;
    cout<<"2.Rana M Luthfur Rahman Pir"<<endl<<"   Blood group: B+"<<endl<<"   Assistant Professor, Department of CSE"<<endl<<"   Phone: 01763-460076"<<endl<<endl;
    cout<<"3.Kazi Md. Jahid Hasan"<<endl<<"   Blood group: O+"<<endl<<"   Lecturer, Department of CSE"<<endl<<"   Phone: 01676-480060"<<endl<<endl;
    cout<<"4.Prithwiraj Bhattacharjee"<<endl<<"   Blood group: A+"<<endl<<"   Lecturer, Department of CSE"<<endl<<"   Phone: 01985-240328"<<endl<<endl;
    cout<<"5.Dipta Paul"<<endl<<"   Blood group: A+"<<endl<<"   Lecturer, Department of CSE"<<endl<<"   Phone: 01744-420273"<<endl<<endl;
    cout<<"6.Sayeda Tamanna Alam Monisha"<<endl<<"   Blood group: B+"<<endl<<"   Lecturer, Department of CSE"<<endl<<"   Phone: 01712-953999"<<endl<<endl;
    cout<<"7.Sabia Akhter Bhuiyan"<<endl<<"   Blood Group: o+"<<endl<<"   Assistant Professor, Department of CSE"<<endl<<"   Phone: 01714-506159"<<endl<<endl;
    cout<<"8.Safkat Kibria"<<endl<<"   Blood Group: A+"<<endl<<"   Assistant Professor & Head(Acting), Department of CSE"<<endl<<"   Phone: 01972-601050"<<endl<<endl;
    cout<<"9.Md Ebrahim Hossain"<<endl<<"   Blood Group: B+"<<endl<<"   Assistant Professor, Department of CSE"<<endl<<"   Phone: 01733-688612"<<endl<<endl;
    cout<<"10.Arafat Habib Quraishi"<<endl<<"    Blood Group: A+"<<endl<<"    Lecturer, Department of CSE"<<endl<<"    Phone: 01914-487146"<<endl<<endl;
    cout<<"11.Md Kamran Hussen"<<endl<<"    Blood Group: A+"<<endl<<"    ID No-2122020001"<<endl<<"    Phone: 01741-956959"<<endl<<endl;
    cout<<"12.Md Mahmud Hussain Ferdous"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020003"<<endl<<"    Phone: 01613-454974"<<endl<<endl;
    cout<<"13.Anindita Gope Orchi"<<endl<<"    Blood Group: A+"<<endl<<"    ID No-2122020007"<<endl<<"    Phone: 01880-557997"<<endl<<endl;
    cout<<"14.Ayesha Ferdous"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020010"<<endl<<"    Phone: 01787-056951"<<endl<<endl;
    cout<<"15.Hasibur Rahman Khurasani Jawad"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020011"<<endl<<"    Phone: 01733-555482"<<endl<<endl;
    cout<<"16.Md Mahin Usman"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020012"<<endl<<"    Phone: 01706-096872"<<endl<<endl;
    cout<<"17.Abida Sultana Nowshin"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020013"<<endl<<"    Phone: 01754-033686"<<endl<<endl;
    cout<<"18.Muhammad Alam"<<endl<<"    Blood Group: A+"<<endl<<"    ID No-2122020018"<<endl<<"    Phone: 01406-791514"<<endl<<endl;
    cout<<"19.Rahat Alam"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020020"<<endl<<"    Phone: 01701-364436"<<endl<<endl;
    cout<<"20.Md Shahir Sammun"<<endl<<"    Blood Group: AB+"<<endl<<"    ID No-2122020021"<<endl<<"    Phone: 01773-381454"<<endl<<endl;
    cout<<"21.Banya Biswas Trisha"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020022"<<endl<<"    Phone: 01645-608072"<<endl<<endl;
    cout<<"22.Moumita Dhor Chowdhury"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020025"<<endl<<"    Phone: 01752-259363"<<endl<<endl;
    cout<<"23.Nuzat Rahman"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020026"<<endl<<"    Phone: 01742-264271"<<endl<<endl;
    cout<<"24.Nafisa Maliat"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020027"<<endl<<"    Phone: 01705-716865"<<endl<<endl;
    cout<<"25.Hasan Ahmed"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020030"<<endl<<"    Phone: 01716-874981"<<endl<<endl;
    cout<<"26.Afsar Ahmed Opu"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020031"<<endl<<"    Phone: 01748-124214"<<endl<<endl;
    cout<<"27.Sajeeb Bhattacharjee"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020032"<<endl<<"    Phone: 01775-716735"<<endl<<endl;
    cout<<"28.Imdadul Haque Ohi"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020034"<<endl<<"    Phone: 01708-333805"<<endl<<endl;
    cout<<"29.Syed Abu Raiyan Sarhad"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020035"<<endl<<"    Phone: 01744-522593"<<endl<<endl;
    cout<<"30.Tamanna Rashid Mim"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020036"<<endl<<"    Phone: 01314-951444"<<endl<<endl;
    cout<<"31.Saima Begum"<<endl<<"    Blood Group: B+"<<endl<<"    ID No-2122020039"<<endl<<"    Phone: 01781-174450"<<endl<<endl;
    cout<<"32.Farzana Masuma"<<endl<<"    Blood Group: A+"<<endl<<"    ID No-2122020042"<<endl<<"    Phone: 01731-972084"<<endl<<endl;
    cout<<"33.Shah Sayem Ahmad"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020043"<<endl<<"    Phone: 01759-590338"<<endl<<endl;
    cout<<"34.Fariha Rahman"<<endl<<"    Blood Group: O+"<<endl<<"    ID No-2122020044"<<endl<<"    Phone: 01751-908597"<<endl<<endl;
    cout<<"35.Numan Ahmed Rony"<<endl<<"    Blood Group: A+"<<endl<<"    ID No-2122020045"<<endl<<"    Phone: 01779-906235"<<endl<<endl;

}

void Academic_calender()
{
    system("CLS");

    pro_name();

    cout<<"Academic Calender: "<<endl<<endl;
    cout<<endl<<"Enter semester: ";
    string semes;
    cin>>semes;

    if (semes == "fall-21")
    {
        cout<<endl<<"        Classes Start: 28 October, 2021"<<endl;
        cout<<"     Mid-Term Examination: 03 December - 09 December, 2021"<<endl;
        cout<<"        Classes End: 13 January, 2022"<<endl;
        cout<<"     Final Examination: 14 January - 20 January, 2022"<<endl;
    }
    else if(semes == "summer-21")
    {
        cout<<endl<<"       Classes Start: 19 July, 2021"<<endl;
        cout<<"     Mid-Term Examination: 09 August, 2021"<<endl;
        cout<<"       Classes End: 29 September, 2021"<<endl;
        cout<<"     Final Examination: 30 September - 03 October, 2021"<<endl;
    }
    else if(semes == "spring-21")
    {
        cout<<endl<<"       Classes Start: 15 February, 2021"<<endl;
        cout<<"     Mid-Term Examination: 05 April - 09 April, 2021"<<endl;
        cout<<"       Classes End: 19 June, 2021"<<endl;
        cout<<"     Final Examination: 21 June - 25 June, 2021"<<endl;
    }
    else
    {
        cout<<endl<<"  Sorry! Invalid Semester"<<endl;
    }
}

void Public_holidays()
{

    system("CLS");

    pro_name();

    cout<<"Public Holidays of 2022: "<<endl<<endl;
    cout<<"February: Language Movement Day - Mon, Feb 21, 2022"<<endl<<endl;
    cout<<"March: Sheikh Mujibur Rahman's Birth Anniversary - Thu, March 17, 2022"<<endl<<"       *Mid-Sha'ban - Likely 18 March - 19 March, 2022"<<endl<<"       Independence Day of Bangladesh - Sat, March 26, 2022"<<endl<<endl;
    cout<<"April: *Jumu'atul-Wida - Likely Apr 28 - 29, 2022"<<endl<<"       *Laylat al-Qudr - Likely Apr 28 - 29, 2022"<<endl<<endl;
    cout<<"May:   Labour Day - Sun, May 1, 2022"<<endl<<"       *Eid al-Fitr - Likely May 2 - 3, 2022"<<endl<<"       *Vesak - Likely Mon, May 16, 2022"<<endl<<"       Nazrul Jayanti - Tue, May 24, 2022"<<endl<<endl;
    cout<<"July:  *Eid al-Adha - Likely Jul 9 -10, 2022"<<endl<<endl;
    cout<<"August:   *Ashura - Likely Aug 7 - 8, 2022"<<endl<<"          National Mourning Day - Mon, Aug 15, 2022"<<endl<<"          *Krishna Janmashtami- Likely Thu, Aug 18, 2022"<<endl<<endl;
    cout<<"October:  *Dussehra - Likely Wed, Oct 5, 2022"<<endl<<"          *Vijayadashami - Likely Wed, Oct 5, 2022"<<endl<<"          *Prophet's Birthday- Likely Oct 7 - 8, 2022"<<endl<<endl;
    cout<<"December: Victory Day of Bangladesh - Fri, Dec 16, 2022"<<endl<<"          Christmas Day- Sun, Dec 25, 2022"<<endl;
}*/

void Todo_list()
{
    system("CLS");

    pro_name();

    cout<<"\t\t\t\t\t\t### Todo list: "<<endl<<endl;

    printf("\t\t\t\t\t\tOptions : \n\n\t\t\t\t\t\t1. Make a new One\n\t\t\t\t\t\t2. Edit the current one\n\t\t\t\t\t\t3. Show To-do list\n\n");
    int q;
    printf("\n\n\t\t\t\t\t\tEnter option: ");
    scanf("%d",&q);
    struct s
    {
        char write[1000];
        char write2[1000];
        char write3[1000];
    };
    struct s d;

    if(q==1)
    {
        fflush(stdin);
        printf("\n\n\t\t\t\t\t\tWrite here: \n");
        printf("\t\t\t\t\t\t");
        gets(d.write);

        strcpy(d.write2,d.write);

        printf("\n\n\t\t\t\t\t\tEnter 1 to see your To-do List or any key to exit: ");
        int p;
        printf("\n\n\t\t\t\t\t\tEnter option: ");
        scanf("%d",&p);

        if(p==1)
        {
            fflush(stdin);
            printf("\n\t\t\t\t\t\tTo-do list: \n\n");
            printf("\t\t\t\t\t\t%s",d.write);
        }


    }
    if(q==2)
    {
        printf("\t\t\t\t\t\tEdit your To-do List \n\n");

        fflush(stdin);
        printf("\t\t\t\t\t\tWrite here: \n");
        printf("\t\t\t\t\t\t");
        gets(d.write3);


        printf("\n\n\t\t\t\t\t\tEnter 1 to see your updated To-do List or any key to exit: ");
        int u;
        scanf("%d",&u);

        if(u==1)
        {
            fflush(stdin);
            printf("\n\t\t\t\t\t\t%s",d.write2);

            fflush(stdin);
            printf(" %s",d.write3);

        }

    }


    if(q==3)
    {
        fflush(stdin);
        printf("\n\t\t\t\t\t\t%s",d.write2);

        fflush(stdin);
        printf(" ");
        puts(d.write3);

    }
}


void registe()
{

    system("CLS");

    pro_name();

    FILE *log;
    log = fopen("lu_login.txt","a");

    cout<<"\t\t\t\t\t\t\t### Register Page: "<<endl<<endl;

    fflush(stdin);
    printf("\t\t\t\t\t\tEnter your full name: ");
    gets(l.name);

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tEnter your ID: ");
    gets(l.id);

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tEnter your Batch Number: ");
    scanf("%d", &l.batch);


    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tEnter Section: ");
    scanf("%s",&l.sec);

    printf("\n\n\t\t\t\t\t\tEnter Department: ");
    scanf("%s",&l.dept);

    printf("\n\n\t\t\t\t\t\tEnter credit: ");
    scanf("%f",&l.credit);


    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tCurrent Semester : ");
    gets(l.current_sem);

    printf("\n\n\t\t\t\t\t\tAverage Result : ");
    scanf("%f",&l.avg_res);

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tBlood Group : ");
    gets(l.bg);

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tPassword : ");
    gets(l.pass);


    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    system("CLS");
    login();
}


int main()
{
    system("CLS");

    pro_name();

    int y;
    printf("\t\t\t\tIf you do not have any account than Register first. Otherwise, login\n");
    printf("\n\t\t\t\t\t\t\t### Options:\n\n");
    printf("\t\t\t\t\t\t\t1. Register\n\n");
    printf("\t\t\t\t\t\t\t2. Login\n\n");
    printf("\n\t\t\t\t\t\t\tEnter your option: ");
    scanf("%d",&y);

    if(y==1)
    {
        registe();
    }
    if(y==2)
    {
        login();
    }

    return 0;
}

login()
{
    system("CLS");

    char username[30];
    char idd[30];
    char password[20];
    int lFound = 0;

    FILE *log; 


    struct login l;
login:
    log = fopen("lu_login.txt","r");


    pro_name();

    printf("\n\n\t\t\t\t\t\t\t\4 \4 \4 LOGIN PAGE \4 \4 \4\n");

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tID: ");
    gets(idd);

    fflush(stdin);
    printf("\n\n\t\t\t\t\t\tPassword: ");
    gets(password);
    system("CLS");

    while(fread(&l,sizeof(l),1,log))
    {

        if (strcmp(idd,l.id)==0)
        {
            if(strcmp(password,l.pass)==0)
            {

                pro_name();


Hmanue:
                cout<<endl<<endl<<"\t\t\t\t\t\t\t### Options:"<<endl<<endl<<"\t\t\t\t\t\t\t1.Student information"<<endl<<"\t\t\t\t\t\t\t2.Class Routine"<<endl<<"\t\t\t\t\t\t\t3.Bus Schedule"<<endl<<"\t\t\t\t\t\t\t4.Semester Registration"<<endl<<"\t\t\t\t\t\t\t5.Result"<<endl<<"\t\t\t\t\t\t\t6.Library"<<endl<<"\t\t\t\t\t\t\t7.Accommodation"<<endl<<"\t\t\t\t\t\t\t8.To-do List"<<endl<<"\t\t\t\t\t\t\t9.My Profile"<<endl;
                cout<<endl<<endl<<"\t\t\t\t\t\t\t# Enter your option: ";
                int opt;
                cin>>opt;

                switch (opt)
                {
                case 1:
                    Stu_info();
                    break;
                case 2:
                    Class_routine();
                    break;
                case 3:
                    Bus_schedule();
                    break;
                case 4:
                    {
                    system("CLS");

                    pro_name();

                    cout<<"\t\t\t\t\t\t\t### Semester Registration: "<<endl<<endl;

                    printf("\t\t\t\t\t\t\tName = %s \n\n\t\t\t\t\t\t\tID = %s \n\n\t\t\t\t\t\t\tBatch = %d \n\n\t\t\t\t\t\t\tSection = %s \n\n\t\t\t\t\t\t\tDepartment = %s \n\n\t\t\t\t\t\t\tCredit = %.2f  \n\n\t\t\t\t\t\t\tCurrent Semester = %s \n\n\t\t\t\t\t\t\tAverage Result = %.2f  \n\n\t\t\t\t\t\t\tBlood Group = %s\n",l.name, l.id,l.batch, l.sec, l.dept,l.credit,l.current_sem,l.avg_res,l.bg);

                    float u;
                    printf("\n\t\t\t\t\t\t\tEnter Your Waiver : ");
                    scanf("%f",&u);
                    printf("\n\n\t\t\t\t\t\t\tCost : \n\n\t\t\t\t\t\t\t1. Tution Fees (without waiver) = %0.2f BDT\n\t\t\t\t\t\t\t2. Other Fees = 6000 BDT\n\t\t\t\t\t\t\t3. Total Fees = %0.2f BDT\n",(l.credit*2000),(l.credit*2000 - ((l.credit*2000*u)/100) + 6000));

                    int o;
                    printf("\n\t\t\t\t\tEnter 1 for Submit semester registration request Or any key to exit: ");
                    scanf("%d",&o);

                    if(o==1)
                    {
                        printf("\n\n\t\t\t\t\tYour semester registration request has been submitted.\n\n");
                    }

                    break;
                }
                case 5:
                    Result();
                    break;
                case 6:
                    Library();
                    break;
                case 7:
                    Accommodation();
                    break;
                case 8:
                    Todo_list();
                    break;
                case 9:
                {
                    system("CLS");

                    pro_name();

                    cout<<"\t\t\t\t\t\t\t  ### My Profile: "<<endl<<endl;

                    printf("\t\t\t\t\t\t\tName = %s \n\n\t\t\t\t\t\t\tID = %s \n\n\t\t\t\t\t\t\tBatch = %d \n\n\t\t\t\t\t\t\tSection = %s \n\n\t\t\t\t\t\t\tDepartment = %s \n\n\t\t\t\t\t\t\tCredit = %.2f  \n\n\t\t\t\t\t\t\tCurrent Semester = %s \n\n\t\t\t\t\t\t\tAverage Result = %.2f  \n\n\t\t\t\t\t\t\tBlood Group = %s",l.name, l.id,l.batch, l.sec, l.dept,l.credit,l.current_sem,l.avg_res,l.bg);


                    break;
                }
                default:
                    cout<<"\t\t\tSorry!!!, Your option did not match (-_-)"<<endl<<"Please enter your option correctly next time."<<endl;
                    break;
                }

                cout<<endl<<endl<<"\t\t\t\tEnter 1 to return Home menu or any key to exit for now \2: ";
                int now;
                cin>>now;

                if (now == 1)
                {
                    system("CLS");

                    pro_name();

                    goto Hmanue;
                }
                else
                {
                    cout<<endl<<endl<<"\t\t\t\tThanks for using our service."<<endl<<"\t\t\t\tSee you soon. \3"<<endl<<endl;
                }
            }

        }

        else
        {
            printf("\n\n\t\t\t\t\t### Wrong id or wrong password. Please Enter correct id and Password\n\n\n");

            goto login;
        }
        lFound = 1;
    }


    if(!lFound)
    {
        int c;
        printf("\n\n\t\t\t\t\t\t\tUser is not found \n");

        printf("\n\n\t\t\t\t\t\t\tPlease first register your account.\n\n\t\t\t\t\t\t\t1. yes\n\n\t\t\t\t\t\t\t2. Exit\n\n\t\t\t\t\t\t\t3. Try Again Login\n\n\t\t\t\t\t\t\tSelect: ");
        scanf("%d",&c);
        if(c==1)
        {

            system("CLS");
            registe();
        }
        else if (c==2)
        {
            cout<<endl<<endl<<"\t\t\t\t\t\t\tThanks for using our service."<<endl<<"\t\t\t\t\t\t\tSee you soon. \3"<<endl<<endl;
            exit(1);
        }
        else if (c==3)
        {
            system("CLS");
            goto login;
        }

    }
    fclose(log);

}


