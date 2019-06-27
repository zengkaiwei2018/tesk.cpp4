
//
//  main.cpp
//  tesk.cpp
//
//  Created by s20181105306 on 2019/6/20.
//  Copyright © 2019 s20181105306. All rights reserved.
//

//#include <iostream>

//int main(int argc, const char * argv[]) {
//int main(int argc, const char * argv[]) {
    //int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    // return 0;
    //std::cout << "Hello, World!\n";
    // return 0;
//#include <iostream>
    
    //int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    //eturn 0;
    //}
//#include <fstream>
    
    //int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    //eturn 0;
    //}
       #include<iostream>
       #include<cstring>
       #include<fstream>
       #include<stdlib.h>
       #include<iomanip>
       #include"string.h"
       #include"stdlib.h"
       using namespace std;
      long long i;
    //struct student
    //int main(){
        //ofstream count(/Users/s20181105306/Desktop/test.cpp);
        //ifstream int(/Users/s20181105306/Desktop/选手信息的副本.txt)
        //using namespace std;
        struct A
        {
            string school;
            string number;
            string name;
            string core;
            float avescore;
        }student[20];
        struct B
        {
            string name;
            float f_point[20];
        }judge[7];

        int main()
        {
            static int add=0;
            string point;
            ifstream fp1 ("/Users/s20181105306/Desktop/选手信息.txt");
            
        
     int ad=0;
       while(1){
            getline(fp1,student[add].school,' ');
            getline(fp1,student[add].number,' ');
            getline(fp1,student[add].name,'\n');
            add++;
        }
        fp1.close();
        ifstream fp1("/Users/s20181105306/Desktop/评委信息.txt ");
        do{
            getline(fp2,jude[add2].name,' ');
            int j=0;
            peo_num=add;
            {
                for(;peo_num=add>1;peo_num--)
                {
                    getline(fp2,point,' ');
                    jude[add2].f_point[j]=atoi(point.a_str());j++;
                }
                getline(fp2,point,'\n');
                jude[add2].f_point[j]=atoi(point.c_str());add2++;
            }
        }while(ad!=7);
            
            
        fp2.close();
            
        float G_point[7];
        for(int k=0;k<add;k++)
        {
            if(int.is_open())
            {
                char num[10];
                char sex[5];
                char age[2];
                int remark;
                struct student*prior;
                struct student*next;
            }
            l;
            struct student*start*,*last;
            void enter(),list(),save(),
            load(),delet_();
            void(),delete_();
            void store(struct student*g);
            meun,score();
            
            
            
            
            
            
            couut.close();
            for(int i=0;i<7;i++)
            {
                G_point[i]=jude[i].f_point[k];
            }
            int substitute;
            for(j=0;j<5;j++)
            {
                for(int i=0;i<7;i++)
                {
                    if(G_point[i+1]<G_point[i])
                        G_point[i+1]=G_point[i];
                    G_point[i]=substitute;
                }
            }
            student[k].point=(G_point[1]+G_point[2]+G_point+G_point[3]+G_point[4]+G_point[5]);
            
        }

    
    ofstream fp3("/Users/s20181105306/Desktop/选手比赛得分信息.txt“)
    if(!fp3)
    {
        break;
    }
    fp3<<"学校   姓名   编号   分数";
    for(int j=0;j<7;j++)
        fp3 <<jude[j].name<<"   ";
    fp3<<endl;
    float Max=stu[0].avepoint;int Max_j=0;
    for(int j=0;j<add;j++)
    {
        
        for(int i=0;i<add;i++)
        {
            if(stu[i].avepoint>=Max)
            {
                Max=stu[j].avepoint;
                Max_j=i;
            }
        }
        fp3<<setw(10)<<setiosflags(ios::left)<<stu[Max_j].name;
        fp3<<setw(9)<<setiosflags(ios::left)<<stu[Max_j].collage;
        
    }
    fp3<<setw(8)<<setiosflags(ios::left)<<stu[Max_j].Num;
    fp3<<setw(7)<<setiosflags(ios::left)<<stu[Max_j].avepoint;
    for(int k=0;k<7;k++)
    {
        fp3<<setw(8)<<setiosflags(ios::left)<<jud[s].f_point[Max_i];
        fp3<<endl;
        stu[Max_j].avepoint==0;
        Max=stu[0].avepoint;
        
    }
                 return 0;
}
