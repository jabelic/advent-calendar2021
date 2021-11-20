CFLAGS=-std=c99 -g -static
# -g: デバッガ用に追加のシンボルテーブル情報を作成する
# -static: *.a（静的）がリンクされる
# https://qiita.com/Pirlo/items/8261361f2c153e104054
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
tcc: $(OBJS)
		 $(CC) -o tcc $(OBJS) $(LDFLAGS)
test: #tcc
		./test.sh

clean: 
		rm -f 9cc *.o *~ a.out tcc

.PHONY: test clean