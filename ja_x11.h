#ifndef JA_X11_H
#define JA_X11_H
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#define ディスプレイ開く XOpenDisplay
#define ディスプレイ閉じる XCloseDisplay
#define ウィンドウ作成 XCreateWindow
#define ウィンドウ破棄 XDestroyWindow
#define ウィンドウ表示 XMapWindow
#define ウィンドウ非表示 XUnmapWindow
#define ウィンドウ属性取得 XGetWindowAttributes
#define ウィンドウ名設定 XStoreName
#define イベント取得 XNextEvent
#define イベント待機 XPeekEvent
#define イベント送信 XSendEvent
#define イベント選択 XSelectInput
#define 描画開始 XCreateGC
#define 描画終了 XFreeGC
#define 線描画 XDrawLine
#define 四角描画 XDrawRectangle
#define 塗り四角描画 XFillRectangle
#define 画像描画 XPutImage
#define 画像取得 XGetImage
#define 画面クリア XClearWindow
#define キーシンボル取得 XLookupKeysym
#define カラーマップ取得 XDefaultColormap
#define 色割り当て XAllocColor

#endif // JA_X11_H