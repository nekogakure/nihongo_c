#ifndef JA_POSIX_H
#define JA_POSIX_H
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

#define プロセス作成 fork
#define プロセス実行 exec
#define プロセス終了 _exit
#define プロセスID取得 getpid
#define 親プロセスID取得 getppid
#define ユーザーID取得 getuid
#define グループID取得 getgid
#define カレントディレクトリ取得 getcwd
#define ディレクトリ変更 chdir
#define ファイル削除 unlink
#define ファイル作成 open
#define ファイル閉じる close
#define ファイル読み込み read
#define ファイル書き込み write
#define ファイル同期 fsync
#define ファイル状態取得 stat
#define ディレクトリ開く opendir
#define ディレクトリ読む readdir
#define ディレクトリ閉じる closedir
#define パイプ作成 pipe
#define 一時停止 pause
#define スリープ sleep
#define アクセス権確認 access

#endif // JA_POSIX_H