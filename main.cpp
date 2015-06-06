//
//  main.cpp
//  Sezemi
//
//  Created by Yasuda on 2015/06/06.
//  Copyright (c) 2015年 Yasuda. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

void task1();
void task3(const char*);
void task5(const char*);
void task6(const char*,const char*);
void task8(const char*,const char*);
void task8_search(const char*,const char*,const char*);

int main(int argc, const char * argv[]) {
//    task1();
//    task3(argv[1]);
//    task5(argv[1]);
//    task6(argv[1],argv[2]);
    if(argc > 3){
        task8_search(argv[1],argv[2],argv[3]);
    }else{
        task8(argv[1],argv[2]);
    }
    return 0;
}


void task1(){
    //”オムライス”を出力
    cout << "オムライス" << endl;
}


void task3(const char* filename){
    string recipefilename = filename;
    
    //ファイルオープン
    ifstream ifs(recipefilename);
    if(!ifs){
        cout << "error : file is not exist" << endl;
        exit(1);
    }
    
    //ファイルの記述を行ごとにコンソール出力
    string recipestr;
    while(getline(ifs, recipestr)){
        istringstream stream(recipestr);
        cout << recipestr << endl;
    }
}


void task5(const char* filename){
    string recipefilename = filename;
    int recipeid = 0;

    //ファイルオープン
    ifstream ifs(recipefilename);
    if(!ifs){
        cout << "error : file is not exist" << endl;
        exit(1);
    }
    
    //ファイルの記述を行ごとにコンソール出力
    string recipestr;
    while(getline(ifs, recipestr)){
        istringstream stream(recipestr);
        recipeid++;
        cout << recipeid << ": " << recipestr << endl;
    }
}

void task6(const char* filename,const char* id){
    string recipefilename = filename;
    int selected_id = atoi(id);
    int recipeid = 0;

    //ファイルオープン
    ifstream ifs(recipefilename);
    if(!ifs){
        cout << "error : file is not exist" << endl;
        exit(1);
    }
    
    //ファイルの記述を行ごとにコンソール出力
    string recipestr;
    while(getline(ifs, recipestr)){
        istringstream stream(recipestr);
        recipeid++;
        if(selected_id == recipeid){
        cout << recipeid << ": " << recipestr << endl;
        }
    }
}


void task8(const char* filename,const char* uname){
    string recipefilename = filename;
    string username = uname;
    int recipeid = 0;

    //ファイルオープン
    ifstream ifs(recipefilename);
    if(!ifs){
        cout << "error : file is not exist" << endl;
        exit(1);
    }

    cout << "ユーザ名: " << username << endl;
    //ファイルの記述を行ごとにコンソール出力
    string recipestr;
    while(getline(ifs, recipestr)){
        istringstream stream(recipestr);
        recipeid++;
        cout << recipeid << ": " << recipestr << endl;
    }
}

void task8_search(const char* filename,const char* uname,const char* id){
    exit(1);
}
