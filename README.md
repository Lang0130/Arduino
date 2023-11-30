# ポケモンSVレイドバトル自動周回

## 導入方法

### 必要なもの

- Arduino Leonardo
- USBケーブル（Arduino LeonardoとSwitchまたはPCを接続するために必要）

### 動作環境

- Arduino IDE
- Arduino

導入方法について詳しくは、[lefmarnaさんのGitHubリポジトリ](https://github.com/lefmarna/NintendoSwitchControlLibrary)を参照

## 初期条件

1. ランダムマッチングが二回目以降であること
2. オンライン状態であること
3. 無線のコントローラーが接続されていないこと
4. 先頭のポケモンの先頭の技が強いこと

## 使用方法

1. Arduino LeonardoをUSBケーブルでPCに接続
2. Arduino IDEを開き、 [raid_buttle.ino] を導入
3. プログラムをArduinoに書き込む

## 注意事項

- この自動周回システムは、ランダムマッチングが二回目以降でのみ機能します。
- オンライン状態で、無線のコントローラーが接続されていない状態で使用してください。
- 他プレイヤーに故意に妨害する行為を行わないでください。

## 免責事項

このプログラムの使用は自己責任で行ってください。開発者はいかなる損害にも責任を負いません。

