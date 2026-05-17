*This project has been created as part of the 42 curriculum by ayanaga.*

# Description
`ft_printf` は、C言語の標準ライブラリ関数 `printf()` を再実装する課題です。

可変長引数 (`va_list`, `va_start`, `va_arg`, `va_end`) を利用し、書式文字列に応じてさまざまな型の値を出力します。

このプロジェクトでは、以下の変換指定子に対応しています。

- `%c` : 1文字出力
- `%s` : 文字列出力
- `%p` : ポインタアドレス出力
- `%d` : 10進整数出力
- `%i` : 10進整数出力
- `%u` : 符号なし10進整数出力
- `%x` : 16進数出力（小文字）
- `%X` : 16進数出力（大文字）
- `%%` : `%` を出力


# Instructions
クローン
- git clone git@vogsphere-v2.42tokyo.jp:vogsphere/intra-uuid-13826009-953e-4add-8689-3a14658c0696-7416479-ayanaga

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
- printf の仕様理解
- 可変長引数 (va_list) の学習
- README の作成

• 関数詳細
- ft_printf : 書式文字列に従って可変長引数を出力し、出力文字数を返します。
- ft_putchar : 1文字出力します。
- ft_putstr : 文字列を出力します。
- ft_putnbr : int 型の整数を10進数で出力します。
- ft_put_unsigned : unsigned int 型の整数を10進数で出力します。
- ft_puthex : 数値を16進数で出力します。


# Algorithm and Data Structure

`ft_printf` は、format 文字列を先頭から1文字ずつ走査します。

- 通常の文字はそのまま出力します。
- `%` を見つけた場合、その次の文字を変換指定子として解釈します。
- `va_arg()` を用いて対応する引数を取得します。
- 指定子に応じて適切な補助関数を呼び出します。
- 各関数の戻り値を加算し、最終的な出力文字数を返します。

このプロジェクトでは特別なデータ構造は使用しておらず、
以下の変数で状態を管理しています。

- `format` : 書式文字列
- `i` : 現在の走査位置
- `count` : 出力した文字数
- `va_list args` : 可変長引数の管理