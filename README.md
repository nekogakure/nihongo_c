# 日本語C
このヘッダーファイルは
>プログラミングしてみたいけど英語わかんない！

という方や、英語を見ると吐き気がしてきて禁断症状が出てしまう方向けに作られました。

~~このヘッダーファイルを使うにはC99が必要です~~

## 使い方
必要なもの: 

    - [Git](https://git-scm.com/downloads)
    - [gcc](https://gcc.gnu.org/) or [VisualStudio](https://visualstudio.microsoft.com/ja/) or [MSYS2](https://www.msys2.org/)

あったら便利なもの（なくても全然いいです。作者の布教活動とでも思ってください）:

    - [premake5](https://premake.github.io/download/)

    - [make](https://www.gnu.org/software/make/)

    - [あとはこの記事を参考](https://zenn.dev/12morosy/articles/180bca27a1cb49)

**MSYS2をインストールした方へ**

MSYS2 MINGW64 Shell（かMSYS2 MINGW32 Shell）を起動して、

    1. `pacman -Syu`と入力し実行（エンター）。

    2. `pacman -S --needed base-devel

mingw-w64-ucrt-x86_64-toolchain`と入力し実行

    3. 
    ```bash
    gcc --version
    g++ --version
    make --version
    ```

    と実行し、`command not found`的なやつが実行できればインストール完了

    4. winキーを押す

    5. 検索窓に `env` と入力し、`システム環境変数の編集` というのがあるのでそれを開く

    6. 一番下の`環境変数`を押す

    7. `Path`というのがあるのでダブルクリック

    8. `新規`を押して、（MSYSのインストール先を変えてないならば）`C:\msys64\mingw64\bin`を追加

    9. OKを押して閉じる。念のためWindowsを再起動する

    10. コマンドプロンプトなどで`gcc --version`とするとなにか出てくるはずです。

1. `include`フォルダを作成する

2. このリポジトリをクローンする: `git clone
https://github.com/nekogakure/nihongo_c/ nihongo`

3. なんでもいいのでCのファイルを作成

4. `#include "include/nihongo/ja.h"`を一番最初に書く

これだけで日本語でCを書くことができます。

