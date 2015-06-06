# KaieYT-sezemi-2015-readable-code
//メモ
仕様1を実装開始
実装終了
commit

仕様2を実装開始
実装終了
commit

仕様3を実装開始
実装終了

####実際のコード
string recipefilename = filename;
ifstream ifs(recipefilename);
string recipestr;
int selected_id

####どうしてリーダブルか
task3()のファイル読み込み処理で，スコープは狭いが変数名が簡単に理解できるよう工夫．

####一言説明
理解しやすい変数


####実際のコード

int main(int argc, const char * argv[]) {
    task1();
    task3(argv[1]);
    return 0;
}

####どうしてリーダブルか
タスク毎に分けて定義しているので
動作の確認がしやすい．

####一言説明
タスク毎


####実際のコード
https://github.com/oleom/oleom-sezemi-2015-readable-code.git/main.cpp
####どうしてリーダブルか
動作毎に段落で分けられているため，仕様の追加が容易
####一言説明
動作の段差分け
