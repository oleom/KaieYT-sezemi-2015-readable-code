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
void task4(const char*);

int main(int argc, const char * argv[]) {
//    task1();
//    task3(argv[1]);
    task4(argv[1]);

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


void task4(const char* filename){
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
