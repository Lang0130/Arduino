/**
初期条件
1.ランダムマッチングが二回目以降であること
2.オンライン状態であること
3.無線のコントローラーが接続されていないこと
4.先頭のポケモンの先頭の技が強いこと
*/

////////////////// libraries ////////////////////////////////

// ライブラリを読み込むためのコード
#include <NintendoSwitchControlLibrary.h>


////////////////// options ////////////////////////////////

// 何周ループさせるか？
const int Buttle_COUNT = 3000;

////////////////// constant parameters ////////////////////////////////

// ボタン押下時の標準的な待機時間
const int BASE_PUSH_BUTTON_TIME_MS = 1500;

// カーソル操作時の標準的な待機時間
const int BASE_CURSOR_OPERATION_TIME_MS = 500;
const int HALF_CURSOR_OPERATION_TIME_MS = 250;

// メニューの開閉にかかる待機時間
const int MENU_OPEN_OR_CLOSE_TIME_MS = 1500;

////////////////// variable parameters ////////////////////////////////

// ループをカウントするための変数
int loopCount = 0;

////////////////// execute ////////////////////////////////

void setup() {
    // SwitchがAuduinoを認識するまでは信号を受け付けないため、適当な処理をさせておく
    pushButton(Button::PLUS, 500, 5);
}

void loop(){
    for (loopCount <= Buttle_COUNT; loopCount++;) {
      road_raid();
      delay(5000);
      Buttle_Raid();
    }
    if (loopCount == Buttle_COUNT) {
        sleepGame();
        exit(0);
    }
}

////////////////// methods ////////////////////////////////////////////

/**
 * Switchをスリープさせる
 *
 * @return void
 */
void sleepGame() {
    holdButton(Button::HOME, 1500);
    pushButton(Button::A, BASE_PUSH_BUTTON_TIME_MS);
}

/**
 * レイド開始から終了まで
 * 
 * @return void
 */
void Buttle_Raid(){
    //ランダムマッチング
    pushButton(Button::A, BASE_PUSH_BUTTON_TIME_MS);
    pushButton(Button::A, BASE_PUSH_BUTTON_TIME_MS);
    pushButton(Button::A, BASE_PUSH_BUTTON_TIME_MS);
    pushButton(Button::A, BASE_PUSH_BUTTON_TIME_MS);
    delay(5000);

    //準備完了ボタンを押下
    pushButton(Button::A, 500, 5);

    //テラレイド開始が遅いこと
    //テラレイド終了まで技連打(500sec)
    for(int i = 0; i <= 100; i++){
      pushButton(Button::A, 500, 5);
      pushButton(Button::A, 500, 5);
    }
}

/**
 * ランダムレイド参加まで
 * 
 * `return void
 */
 void road_raid(){
    delay(5000);
    //テラレイド募集画面までいく
    pushButton(Button::X, BASE_PUSH_BUTTON_TIME_MS);
    holdHat(Hat::UP, 2000);
    pushHat(Hat::DOWN, BASE_CURSOR_OPERATION_TIME_MS);
    pushHat(Hat::DOWN, BASE_CURSOR_OPERATION_TIME_MS);
    pushHat(Hat::DOWN, BASE_CURSOR_OPERATION_TIME_MS);
    pushButton(Button::A, 3000);
    delay(5000);
    pushButton(Button::A, 6000);
    delay(5000);

    /**
    //ランダムマッチングまでカーソル操作
    pushHat(Hat::RIGHT, BASE_CURSOR_OPERATION_TIME_MS);
    pushHat(Hat::RIGHT, BASE_CURSOR_OPERATION_TIME_MS);
    pushHat(Hat::RIGHT, BASE_CURSOR_OPERATION_TIME_MS);
    pushHat(Hat::RIGHT, BASE_CURSOR_OPERATION_TIME_MS);
    pushHat(Hat::DOWN, BASE_CURSOR_OPERATION_TIME_MS);
    */
 }
