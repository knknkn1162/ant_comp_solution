# Reference

+ https://qiita.com/drken/items/e77685614f3c6bf86f44

# problems

|TODO|idx|type|問題名|難易度(1~5)|単元|方針/解答例|
|---|---|---|---|---|---|---|
|o|§ 1.1.1|example|くじ引き|||[]()|
||§ 1.1.1|exercise|[JOI 2007 本選 C ダーツ](https://atcoder.jp/contests/joi2008ho/tasks/joi2008ho_c)|||[解決め打ちで二分検索(upper bound), 2つの和に帰着](https://atcoder.jp/contests/joi2008ho/submissions/10906780)|
||§ 1.6.1|example|三角形|||[降順にソート-> 連続した3つを調べる](./1.6.1/triangle.c)|
||§ 1.6.1|exercise|[B - Sum of Three Integers](https://atcoder.jp/contests/abc051/tasks/abc051_b)|||[全探索]() or [DP, 累積和](https://atcoder.jp/contests/abc051/submissions/12543729)|
||§ 2.1.1|exercise|[ARC 029 A - 高橋君とお肉](https://atcoder.jp/contests/arc029/tasks/arc029_1)|||[](https://atcoder.jp/contests/arc029/submissions/8502963)|
||§ 2.1.3|exercise|[https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_e](https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_e)|||[BFS](https://atcoder.jp/contests/joi2011yo/submissions/11007756)|
|o|§ 2.1.5|exercise|[ARC 005 C 器物損壊！高橋君](https://atcoder.jp/contests/arc005/tasks/arc005_3)|||[0-1 BFS](https://atcoder.jp/contests/arc005/submissions/8570403) or [Dijkstra]()|
||§ 2.1.4|example|特別な状態の列挙|||[next_permutationの実装](./2.1.4/)|
||§ 2.1.4|exercise|[ABC 054 C One-stroke Path](https://atcoder.jp/contests/abc054/tasks/abc054_c)|||[順列全探索](https://atcoder.jp/contests/abc054/submissions/12291613)|
||§ 2.1.4|exercise|[JOI 2009 予選 D カード並べ](https://atcoder.jp/contests/joi2010yo/tasks/joi2010yo_d)|||[bit全探索、順列全探索](https://atcoder.jp/contests/joi2010yo/submissions/12296618)|
|o|§ 2.1.4|exercise|[yukicoder No.133 カードゲーム](https://yukicoder.me/problems/199)||||
||§ 2.2.2|example|区間スケジューリング問題|||[end起点に昇順](./2.2.2/scheduling.c)|
||§ 2.2.2|exercise|[B - Robot Arms](https://atcoder.jp/contests/keyence2020/tasks/keyence2020_b)|||[end起点に昇順](https://atcoder.jp/contests/keyence2020/submissions/12551527)|
||§ 2.2.2|exercise|[A - 東京都](https://atcoder.jp/contests/kupc2015/tasks/kupc2015_a)|||[前から探索](https://atcoder.jp/contests/kupc2015/submissions/12313760)|
||§ 2.2.2|exercise|[C - 白昼夢](https://atcoder.jp/contests/abc049/tasks/arc065_a)|||[後ろから](https://atcoder.jp/contests/abc049/submissions/12314491)|
||§ 2.2.2|exercise|[D - Islands War](https://atcoder.jp/contests/abc103/tasks/abc103_d)|||[start起点にsort->貪欲法](https://atcoder.jp/contests/abc103/submissions/12316726)|
||§ 2.2.2|exercise|[B. Clique Problem](http://codeforces.com/contest/528/problem/B)|||[区間スケジューリング問題に帰着](http://codeforces.com/contest/528/submission/78082567)|
|o|§ 2.2.2|exercise|[D - プレゼント](https://atcoder.jp/contests/abc038/tasks/abc038_d)|||[LIS, セグメント木]()|
||§ 2.2.3|example|[Best Cow Line](http://poj.org/problem?id=3617)|||[予め反転した文字列も用意して貪欲法](./2.2.3/poj3617.c)|
||§ 2.2.3|excercise|[C - Dubious Document 2](https://atcoder.jp/contests/abc076/tasks/abc076_c)|||[後ろから](https://atcoder.jp/contests/abc076/submissions/12324748)|
||§ 2.2.3|excercise|[B - 辞書式順序](https://atcoder.jp/contests/abc007/tasks/abc007_2)|||['a' or -1を出力](https://atcoder.jp/contests/abc007/submissions/12324882)|
|o|§ 2.2.3|excercise|[C - 辞書式順序ふたたび](https://atcoder.jp/contests/abc009/tasks/abc009_3)|||[]()|
||§ 2.2.4|example|[Saruman's Army](http://poj.org/problem?id=3069)|||[昇順にソート->貪欲](./2.2.4/poj3069.c)|
||§ 2.2.4|exercise|[C - Multiple Gift](https://atcoder.jp/contests/abc083/tasks/arc088_a)|||[貪欲](https://atcoder.jp/contests/abc083/submissions/12356089)|
||§ 2.2.4|exercise|[C - 積み重ね](https://atcoder.jp/contests/arc006/tasks/arc006_3)|||[無駄が出ないように貪欲で](https://atcoder.jp/contests/arc006/submissions/12377963)|
||§ 2.2.4|exercise|[C - おいしいたこ焼きの売り方](https://atcoder.jp/contests/abc005/tasks/abc005_3)|||[客を軸にして、しゃくとり法](https://atcoder.jp/contests/abc005/submissions/12384924)|
|o|§ 2.2.5|example|[POJ 3253 Fence Repair](http://poj.org/problem?id=3253)|||[]()|
|o|§ 2.2.5|exercise|[C. Appleman and Toastman](http://codeforces.com/contest/462/problem/C)|||[]()|
|o|§ 2.2.5|exercise|[ALDS1_15_D ハフマン符号](https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_15_D)|||[ハフマン木を直接構成](https://onlinejudge.u-aizu.ac.jp/solutions/problem/ALDS1_15_D/review/3981240/knknkn1162/C) or [最小ヒープ]()|
|o|§ 2.3.1|example|[0-1ナップザック問題](https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_B)|||[]()|
||§ 2.3.1|exercise|[TDPC A コンテスト](https://atcoder.jp/contests/tdpc/tasks/tdpc_contest)|||[DP](https://atcoder.jp/contests/tdpc/submissions/12701720)|
||§ 2.3.1|exercise|[D - 高橋くんの苦悩](https://atcoder.jp/contests/abc015/tasks/abc015_4)|
||§ 2.3.1|exercise|[JOI 2012 予選 D 暑い日々](https://atcoder.jp/contests/joi2013yo/tasks/joi2013yo_d)|||[DP](https://atcoder.jp/contests/joi2013yo/submissions/11071917)|
|o|§ 2.3.1|exercise|[TDPC E 数](https://atcoder.jp/contests/tdpc/tasks/tdpc_number)|||[]()|
||§ 2.3.1|exercise(digit)|[D - 禁止された数字](https://atcoder.jp/contests/abc007/tasks/abc007_4)|||[桁を文字列とみなす, 桁DP](https://atcoder.jp/contests/abc007/submissions/12537048)|
||§ 2.3.1|exercise(digit)|[D - 1](https://atcoder.jp/contests/abc029/tasks/abc029_d)|||[桁DP](https://atcoder.jp/contests/abc029/submissions/12538690)|
||§ 2.3.1|exercise(digit)|[E - Payment](https://atcoder.jp/contests/abc155/tasks/abc155_e)|||[DP(桁)(繰り上がる?)](https://atcoder.jp/contests/abc155/tasks/abc155_e)|
||§ 2.3.1|exercise(digit)|[E - Almost Everywhere Zero](https://atcoder.jp/contests/abc154/tasks/abc154_e)|||[桁DP](https://atcoder.jp/contests/abc154/submissions/12545187)|
||§ 2.3.2|example|[最長共通部分列問題(LCS)](https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C)|||[2次元DP](https://onlinejudge.u-aizu.ac.jp/solutions/problem/ALDS1_10_C/review/4408455/knknkn1162/C)|
||§ 2.3.2|exercise|[編集距離](https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_E)|||[DP](https://onlinejudge.u-aizu.ac.jp/solutions/problem/DPL_1_E/review/4427482/knknkn1162/C)|
||§ 2.3.3|example|[個数制限なしナップサック問題](https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_C)|||[インライン1次元DP](https://onlinejudge.u-aizu.ac.jp/solutions/problem/DPL_1_C/review/4281702/knknkn1162/C)|
||§ 2.3.3|exercise|[ABC 153 E - Crested Ibis vs Monster](https://atcoder.jp/contests/abc153/tasks/abc153_e)|||[1次元DP](https://atcoder.jp/contests/abc153/submissions/12491440)|
|o|§ 2.3.4|exercise|[ABC 032 D ナップサック問題](https://atcoder.jp/contests/abc032/tasks/abc032_d)|||[価値固定で重さ最小に]()|
|o|§ 2.3.4|exercise|[ARC 057 B 高橋君ゲーム](https://atcoder.jp/contests/arc057/tasks/arc057_b)|||[]()|
||§ 2.3.5|example|個数制限付き部分和問題|||[残り個数をDPの中に持たせる](./2.3.5/example.c)|
||§ 2.3.5|exercise|[Maximum-Cup 2018 D Many Go Round](https://atcoder.jp/contests/maximum-cup-2018/tasks/maximum_cup_2018_d)|||[x周をDPの値にする](https://atcoder.jp/contests/maximum-cup-2018/submissions/12458575)|
|o|§ 2.3.5|exercise|[JOI 2013 本選 D フクロモモンガ](https://atcoder.jp/contests/joi2014ho/tasks/joi2014ho4)|||[]()|
|o|§ 2.3.6|example|[H - LIS](https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_h)|||[]()|
||§ 2.3.6|exercise|[ABC 006 D トランプ挿入ソート](https://atcoder.jp/contests/abc006/tasks/abc006_4)|||[LIS](https://atcoder.jp/contests/abc006/submissions/11331581)|
|o|§ 2.3.6|exercise|[TDPC K ターゲット](https://atcoder.jp/contests/tdpc/tasks/tdpc_target)|||[]()|
||§ 2.3.7|example|分割数|||[DP](./2.3.7/example.c)|
||§ 2.3.7|exercise|[No.269 見栄っ張りの募金活動](https://yukicoder.me/problems/no/269)|||[制約を取り除く -> 分割数](https://yukicoder.me/submissions/472404)|
||§ 2.3.7|exercise|[第4回 ドワンゴからの挑戦状 予選 C - Kill/Death](https://atcoder.jp/contests/dwacon2018-prelims/tasks/dwacon2018_prelims_c)|||[分割数とDPの組み合わせ](https://atcoder.jp/contests/dwacon2018-prelims/submissions/12493850)|
|o|§ 2.3.7|exercise|[JOI 2009 予選 F ビンゴ](https://atcoder.jp/contests/joi2009yo/tasks/joi2009yo_f)|||[]()
||§ 2.3.8|example|重複組み合わせ|||[DP + 累積和](./2.3.8/example.c)|
||§ 2.3.8|exercise|[D - Factorization](https://atcoder.jp/contests/abc110/tasks/abc110_d)|||[素因数分解、重複組み合わせ、逆元](https://atcoder.jp/contests/abc110/submissions/12515321)|
||§ 2.3.8|exercise|[D - 多重ループ](https://atcoder.jp/contests/abc021/tasks/abc021_d)|||[考察、重複組合せ, 逆元](https://atcoder.jp/contests/abc021/submissions/11687036)|
||§ 2.3.8|exercise|[D - 表現の自由 ( Freedom of expression )](https://atcoder.jp/contests/arc004/tasks/arc004_4)|
||§ 2.3.9|exercise|[K - Stones](https://atcoder.jp/contests/dp/tasks/dp_k)|||[ゲームDP](https://atcoder.jp/contests/dp/submissions/12026820)|
||§ 2.3.9|exercise|[L - Deque](https://atcoder.jp/contests/dp/tasks/dp_l)|||[ゲームDP](https://atcoder.jp/contests/dp/submissions/12078699)|
||§ 2.3.10|exercise|[TDPC I イゥイ](https://atcoder.jp/contests/tdpc/tasks/tdpc_iwi)|||[区間DP](https://atcoder.jp/contests/tdpc/submissions/12484423)|
|o|§ 2.3.10|exercise|[AOJ 2415 刺身](https://onlinejudge.u-aizu.ac.jp/problems/2415)|||[区間DP, Monge]()|
||§ 2.3.10|exercise|[ダルマ落とし](https://onlinejudge.u-aizu.ac.jp/problems/1611)|||[O(N^3)の区間DP](https://onlinejudge.u-aizu.ac.jp/solutions/problem/1611/review/4296429/knknkn1162/C)|
||§ 2.3.11|exercise|[ABC 036 D - 塗り絵](https://atcoder.jp/contests/abc036/tasks/abc036_d)|||[ツリーDP(帰りがけ)](https://atcoder.jp/contests/abc036/submissions/12798698)
||§ 2.3.11|exercise|[ABC 070 D Transit Tree Path](https://atcoder.jp/contests/abc070/tasks/abc070_d)|||[ツリーDP(行きがけ)](https://atcoder.jp/contests/abc070/submissions/12811976)|
||§ 2.3.11|exercise|[ABC138 D - Ki](https://atcoder.jp/contests/abc138/tasks/abc138_d)|||[ツリーDP](https://atcoder.jp/contests/abc138/submissions/11952547)|
||§ 2.3.11|exercise|[木の直径](https://onlinejudge.u-aizu.ac.jp/problems/GRL_5_A)|||[全方位木DP](https://onlinejudge.u-aizu.ac.jp/solutions/problem/GRL_5_A/review/4364257/knknkn1162/C)|
|o|§ 2.3.11|exercise|[木の高さ](https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_5_B)|||[全方位木DP]()|
||§ 2.3.11|exercise|[F - Distributing Integers](https://atcoder.jp/contests/abc160/tasks/abc160_f)|||[全方位木DP](https://atcoder.jp/contests/abc160/submissions/11998682)|
||§ 2.3.12|exercise|[ABC 037 D 経路](https://atcoder.jp/contests/abc037/tasks/abc037_d)|||[out degreeに注意してDFS](https://atcoder.jp/contests/abc037/submissions/12767879)
||§ 2.3.12|exercise|[https://atcoder.jp/contests/dp/tasks/dp_g](https://atcoder.jp/contests/dp/tasks/dp_g)|||[DAG DP](https://atcoder.jp/contests/dp/submissions/12015134)|
||§ 2.3.12|exercise|[H - Grid 1](https://atcoder.jp/contests/dp/tasks/dp_h)|||[DAG DP](https://atcoder.jp/contests/dp/submissions/12024953)|
|o|§ 2.3.13|exercise|[JOI 2006 予選 F 通学経路](https://atcoder.jp/contests/joi2007yo/tasks/joi2007yo_f)|||[グリッドDP]()|
|o|§ 2.3.14|exercise|[JOI 2012 予選 C 最高のピザ](https://atcoder.jp/contests/joi2012yo/tasks/joi2012yo_c)|||[]()|
||§ 2.3.14|exercise|[E - Active Infants](https://atcoder.jp/contests/abc163/tasks/abc163_e)|||[ソート, DP](https://atcoder.jp/contests/abc163/submissions/12805226)|
|o|§ 2.3.15|exercise|[ARC 081 E Don't Be a Subsequence](https://atcoder.jp/contests/arc081/tasks/arc081_c)|||[]()|
|o|§ 2.3.16|exercise|[TDPC O 文字列](https://atcoder.jp/contests/tdpc/tasks/tdpc_string)|||[]()|
||§ 2.3.17|exercise|[TDPC D サイコロ](https://atcoder.jp/contests/tdpc/tasks/tdpc_dice)|||[多次元DP(条件以上となるように計算)](https://atcoder.jp/contests/tdpc/submissions/12709413)|
||§ 2.3.17|exercise|[J - Sushi](https://atcoder.jp/contests/dp/tasks/dp_j)|||[期待値、多次元DP](https://atcoder.jp/contests/dp/submissions/12036657)|
||§ 2.4.1|example|[Expedition (POJ No.2431)](http://poj.org/problem?id=2431)|||[max heap, 燃料をアイテムとして蓄える](./2.4.1/poj2431.c)|
||§ 2.4.1|exercise|[2017 CODE FESTIVAL THANKS C - Factory](https://atcoder.jp/contests/code-thanks-festival-2017-open/tasks/code_thanks_festival_2017_c)|||[min heap](https://atcoder.jp/contests/code-thanks-festival-2017-open/submissions/12522002)|
||§ 2.4.1|exercise|[ABC 062 D - 3N Numbers](https://atcoder.jp/contests/arc074/tasks/arc074_b)|||[配列と逆配列をmin heap](https://atcoder.jp/contests/arc074/submissions/12810109)|
||§ 2.4.2|exercise|[ABC 085 B Kagami Mochi](https://atcoder.jp/contests/abc085/tasks/abc085_b)|||[map](https://atcoder.jp/contests/abc085/submissions/7997905)|
|o|§ 2.4.2|exercise|[ABC 091 B Two Colors Card Game](https://atcoder.jp/contests/abc091/tasks/abc091_b)|||[]()|
|o|§ 2.4.3|example|[食物連鎖 (POJ No.1182)](http://poj.org/problem?id=1182)|||[3×numberのunion find](./2.4.3/poj1182.c)|
||§ 2.4.3|exercise|[ABC 049 D 連結](https://atcoder.jp/contests/abc049/tasks/arc065_b)|||[union find, ハッシュ](https://atcoder.jp/contests/abc049/submissions/12697315)|
||§ 2.4.3|exercise|[ARC 097 D Equals](https://atcoder.jp/contests/arc097/tasks/arc097_b)|||[Union Find](https://atcoder.jp/contests/arc097/submissions/12697803)|
||§ 2.4.3|exercise|[ARC 036 D 偶数メートル](https://atcoder.jp/contests/arc036/tasks/arc036_d)|||[2×num のUnion Find](https://atcoder.jp/contests/arc036/submissions/12701345)|
||§ 2.5.1|example|二部グラフ判定|||[DFS](./2.5.1/example.c)|
||§ 2.5.1|exercise|[D - Even Relation](https://atcoder.jp/contests/abc126/tasks/abc126_d)|||[DFS](https://atcoder.jp/contests/abc126/submissions/12559729)|
|o|§ 2.5.1|exercise|[C - 3 Steps](https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_c)|||[二部グラフでDFS(発想難)]()|
||§ 2.5.1|exercise|[C - 嘘つきな天使たち](https://atcoder.jp/contests/maximum-cup-2018/tasks/maximum_cup_2018_c)|||[二部グラフとして解く]() or [Union Find(食物連鎖と類似)](https://atcoder.jp/contests/maximum-cup-2018/submissions/12561301)|
|o|§ 2.5.2|example|[Roadblocks (POJ No.3255)](http://poj.org/problem?id=3255)|||[]()|
||§ 2.5.2|exercise|[JOI 2007 予選 F 船旅](https://atcoder.jp/contests/joi2008yo/tasks/joi2008yo_f)|||[ダイクストラ+ min heap](https://atcoder.jp/contests/joi2008yo/submissions/11579403)|
||§ 2.5.2|exercise|[ABC 035 D トレジャーハント](https://atcoder.jp/contests/abc035/tasks/abc035_d)|||[ダイクストラ法(往路と復路)](https://atcoder.jp/contests/abc035/submissions/12693567)|
||§ 2.5.3|exercise|[ABC 065 D Built?](https://atcoder.jp/contests/abc065/tasks/arc076_b)|||[ソート -> クラスカル法](https://atcoder.jp/contests/abc065/submissions/11662019)|
||§ 2.5.4|example|[Layout (POJ No.3169)](http://poj.org/problem?id=3169)|||[ベルマンフォード法](./2.5.4/poj3169.c)|
||§ 2.5.4|exercise|[AOJ Course 単一始点最短経路（負の重みをもつ辺を含む）](https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_B)|||[ベルマンフォード法](https://onlinejudge.u-aizu.ac.jp/solutions/problem/GRL_1_B/review/4423742/knknkn1162/C)
||§ 2.5.4|exercise|[D - Score Attack](https://atcoder.jp/contests/abc061/tasks/abc061_d)|||[Bellman ford, 閉路検出](https://atcoder.jp/contests/abc061/submissions/12686297)|
|o|§ 2.5.4|exercise|[UTPC 2013 H Asteroids2](https://atcoder.jp/contests/utpc2013/tasks/utpc2013_08)|||[]()|
||§ 2.5.5|exercise|[D - バスと避けられない運命](https://atcoder.jp/contests/abc012/tasks/abc012_4)|||[Warshal Fyold](https://atcoder.jp/contests/abc012/submissions/11640675)|
||§ 2.5.5|exercise|[D - joisino's travel](https://atcoder.jp/contests/abc073/tasks/abc073_d)|||[ワーシャルフロイド法, permutation](https://atcoder.jp/contests/abc073/submissions/12688097)|
|o|§ 2.6.3|example|素数判定|||[]()|
||§ 2.6.3|exercise|[C - Factors of Factorial](https://atcoder.jp/contests/abc052/tasks/arc067_a)|||[素因数分解、約数の個数](https://atcoder.jp/contests/abc052/submissions/12487335)|
||§ 2.6.3|exercise|[ABC 084 D 2017-like Number](https://atcoder.jp/contests/abc084/submissions/11665020)|||[素数, 累積和](https://atcoder.jp/contests/abc084/submissions/11665020)|
|o|§ 2.6.3|exercise|[AOJ 0009 素数](https://onlinejudge.u-aizu.ac.jp/problems/0009)|||[エラトステネスのふるい、累積和]()|
||§ 2.6.4|exercise|[A - 与えられた数より小さい素数の個数について](https://atcoder.jp/contests/tenka1-2012-qualc/tasks/tenka1_2012_9)|||[エラトステネスのふるい](https://atcoder.jp/contests/tenka1-2012-qualc/submissions/12817314)
||§ 2.6.6|example|[Carmichael Numbers (Uva No.10006)](https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=947)|||[高速累乗](./2.6.6/uva10006.c)|
||§ 2.7.1|example|[GCJ Problem A. Minimum Scalar Product](https://code.google.com/codejam/contest/32016/dashboard)|||[ソート, 貪欲法](./2.7.1/gcj32016.c)
