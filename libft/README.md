*This project has been created as part of the 42 curriculum by mterada.*

# Libft

## Description

Libft は、C 標準ライブラリの一部の関数を自分で再実装し、さらに文字列処理、
メモリ操作、ファイルディスクリプタへの出力、数値変換、連結リスト操作のための
補助関数をまとめた C ライブラリです。

このプロジェクトの目的は、普段使っている標準関数の内部動作を理解し、
今後の 42 の課題で再利用できる自分用のライブラリを作ることです。

## Library Details

このライブラリは `libft.a` として作成されます。含まれる関数は以下の通りです。

### Libc Functions

- 文字判定: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`,
  `ft_isprint`
- 文字変換: `ft_toupper`, `ft_tolower`
- メモリ操作: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
  `ft_memchr`, `ft_memcmp`, `ft_calloc`
- 文字列操作: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`,
  `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- 数値変換: `ft_atoi`

### Additional Functions

- 文字列の作成と加工: `ft_substr`, `ft_strjoin`, `ft_strtrim`,
  `ft_split`, `ft_strmapi`, `ft_striteri`
- 数値から文字列への変換: `ft_itoa`
- ファイルディスクリプタへの出力: `ft_putchar_fd`, `ft_putstr_fd`,
  `ft_putendl_fd`, `ft_putnbr_fd`

### Linked List Functions

- ノードの作成と追加: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- リスト情報の取得: `ft_lstsize`, `ft_lstlast`
- リストの削除と走査: `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
  `ft_lstmap`

## Instructions

ライブラリをコンパイルします。

```sh
make
```

オブジェクトファイルを削除します。

```sh
make clean
```

オブジェクトファイルとライブラリを削除します。

```sh
make fclean
```

最初から再ビルドします。

```sh
make re
```

別の C ファイルから使う場合は、ヘッダーファイルを include し、`libft.a` を
リンクします。

```c
#include "libft.h"
```

コンパイル例:

```sh
cc -Wall -Wextra -Werror main.c libft.a
```

## Resources

- `strlen`, `memcpy`, `memmove`, `calloc`, `strdup`, `atoi` などの `man`
  ページ
- 42 Libft subject
- The C Programming Language, Brian W. Kernighan and Dennis M. Ritchie
- cppreference C documentation: https://en.cppreference.com/w/c

AI は、テスターだけでは見つけにくい可能性のある点を確認するレビュー補助として
使用しました。具体的には、メモリ確保失敗時の処理、ヘッダーの include、
プロトタイプ宣言の整合性、プロジェクト要件の抜け漏れ確認などです。
実装内容の理解と最終的な責任は作者本人にあります。
# 42cursus-libft
