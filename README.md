*This project has been created as part of the 42 curriculum by ayanaga.*


# Description
C言語の標準ライブラリ関数の一部を自分で実装し、再利用可能な静的ライブラリとしてまとめることを目的としています


# Instructions
クローン
- git clone git@vogsphere-v2.42tokyo.jp:vogsphere/intra-uuid-d5b3afda-a498-44ee-bd6e-c190a6abbe90-7383674-ayanaga

コンパイル
- make

オブジェクトファイル削除
- make clean

実行ファイルなども含め削除
- make fclean

fcleanを実行してから再コンパイル
- make re


# Resources
- man
- 42 Subject PDF

• AIをどのように使用したか
- 各関数の仕様理解、メモリ管理の相談、READMEの作成時に使用しました。


• 関数詳細
- ft_isalpha : 引数の文字がアルファベット (A-Z, a-z) なら 1 を返します。
- ft_isdigit : 引数の文字が数字 (0-9) なら 1 を返します。
- ft_isalnum : 引数の文字が英数字なら 1 を返します。
- ft_isascii : 引数の値が ASCII 文字コードの範囲 (0〜127) なら 1 を返します。
- ft_isprint : 引数の文字が表示可能文字 (32〜126) なら 1 を返します。
- ft_strlen : 文字列の長さ（終端の \0 を除く）を返します。
- ft_memset : 指定したメモリ領域を指定した値で埋めます。
- ft_bzero : 指定したメモリ領域を 0 で埋めます。
- ft_memcpy : メモリ領域をコピーします（領域が重なる場合は未定義）。
- ft_memmove : メモリ領域が重なっていても安全にコピーします。
- ft_strlcpy : 文字列をサイズ制限付きでコピーし、元文字列の長さを返します。
- ft_strlcat : 文字列をサイズ制限付きで連結し、連結後の長さを返します。
- ft_toupper : 小文字を大文字に変換します。
- ft_tolower : 大文字を小文字に変換します。
- ft_strchr : 文字列中で指定した文字が最初に現れる位置を返します。
- ft_strrchr : 文字列中で指定した文字が最後に現れる位置を返します。
- ft_strncmp : 2つの文字列を最大 n 文字まで比較します。
- ft_memchr : メモリ領域内で指定した値を最初に見つけた位置を返します。
- ft_memcmp : 2つのメモリ領域を n バイト比較します。
- ft_strnstr : 文字列の先頭から最大 len 文字の範囲で部分文字列を検索します。
- ft_atoi : 数字文字列を int 型の整数に変換します。
- ft_calloc : 指定した個数分のメモリを確保し、0 で初期化します。
- ft_strdup : 文字列のコピーを新しく確保したメモリに作成します。

- ft_substr : 文字列の指定位置から指定長だけ切り出した新しい文字列を返します。
- ft_strjoin : 2つの文字列を連結した新しい文字列を返します。
- ft_strtrim : 指定した文字集合を文字列の前後から取り除いた新しい文字列を返します。
- ft_split : 区切り文字で文字列を分割し、文字列配列として返します。
- ft_itoa : int 型の整数を文字列に変換します。
- ft_strmapi : 各文字に関数を適用した新しい文字列を返します。
- ft_striteri : 各文字に関数を適用します（元の文字列を直接変更）。
- ft_putchar_fd : 指定したファイルディスクリプタに 1 文字出力します。
- ft_putstr_fd : 指定したファイルディスクリプタに文字列を出力します。
- ft_putendl_fd : 指定したファイルディスクリプタに文字列と改行を出力します。
- ft_putnbr_fd : 指定したファイルディスクリプタに整数を出力します。

- ft_lstnew : 新しいリストノードを作成します。
- ft_lstadd_front : ノードをリストの先頭に追加します。
- ft_lstsize : リストのノード数を返します。
- ft_lstlast : リストの最後のノードを返します。
- ft_lstadd_back : ノードをリストの末尾に追加します。
- ft_lstdelone : 1つのノードを削除し、その内容も解放します。
- ft_lstclear : リスト全体を削除し、すべてのノードを解放します。
- ft_lstiter : リストの各ノードに関数を適用します。
- ft_lstmap : 各ノードに関数を適用した新しいリストを作成します。
