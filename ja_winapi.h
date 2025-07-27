#ifndef JA_WINAPI_H
#define JA_WINAPI_H
#include <windows.h>

#define メッセージボックス MessageBox
#define ウィンドウ作成 CreateWindow
#define ウィンドウ表示 ShowWindow
#define ウィンドウ更新 UpdateWindow
#define ウィンドウ破棄 DestroyWindow
#define ウィンドウプロシージャ DefWindowProc
#define ウィンドウ登録 RegisterClass
#define ウィンドウクラス登録 RegisterClassEx
#define メインループ GetMessage
#define メッセージ送信 SendMessage
#define メッセージポスト PostMessage
#define メッセージ取得 PeekMessage
#define メッセージ変換 TranslateMessage
#define メッセージ処理 DispatchMessage
#define インスタンス取得 GetModuleHandle
#define カーソル設定 SetCursor
#define タイマー設定 SetTimer
#define タイマー削除 KillTimer
#define ファイル開く CreateFile
#define ファイル閉じる CloseHandle
#define ファイル読み込み ReadFile
#define ファイル書き込み WriteFile
#define メモリコピー CopyMemory
#define メモリ移動 MoveMemory
#define メモリ設定 FillMemory
#define クリティカルセクション初期化 InitializeCriticalSection
#define クリティカルセクション削除 DeleteCriticalSection
#define クリティカルセクション入る EnterCriticalSection
#define クリティカルセクション出る LeaveCriticalSection

#endif