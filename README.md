# モンテカルロ方を使って円周率を出すプログラム
## How to use

```
$ gcc -O3 -msse2 -DSFMT_MEXP=19937 SFMT.c sfmt_montecarlo.c
$ ./a.out
```

実行すると以下のような出力が出ます。

```
...
[ 9997]0.375989,0.581409
[ 9998]0.448642,0.731197
[ 9999]0.168438,0.041879
[ 7835] 3.134000 
```
