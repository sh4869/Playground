#include <stdio.h>

int main(){
    int turn = 0;
    int place = 0;    
    int x = 5;
    int y = 7;
    int z = 9;
    int temp = 0;
    int after = 0;
    while(x != 0 || y != 0 || z != 0){
        // ユーザのターン
        if(turn == 0){
            printf("%d %d %d\n",x,y,z);
            printf("YOU > あなたのターンです\n");
            printf("YOU > どの数を減らしますか? (右 - 1 中央 - 2 左 - 3) :");
            while(place > 3 || place <= 0){
                scanf("%d",&place);
                if(place > 3 || place <= 0){
                    printf("ERROR > 位置は1~3の間で指定しなければなりません.\nもう一度入力してください. : ");
                }
            }
            switch(place){
                case 1:
                    temp = x;
                    break;
                case 2:
                    temp = y;
                    break;
                case 3:
                    temp = z;
                    break;
                default:
                    break;
            }
            printf("YOU > いくつに減らしますか? : ");
            while(1){
                scanf("%d",&after);
                if(after < temp && after >= 0){
                    switch(place){
                        case 1:
                            x = after;
                            temp = 0;
                            printf("YOU > 右の数を%dに減らします。\n",x);
                            break;
                        case 2:
                            y = after;
                            temp = 0;
                            printf("YOU > 中央の数を%dに減らします。\n",y);
                            break;
                        case 3:
                            z = after;
                            temp = 0;
                            printf("YOU > 左の数を%dに減らします。\n",z);
                            break;
                    }
                    place = 0;
                    break;
                } else {
                    printf("ERROR > 0以下または元の数以上にすることはできません.\nもう一度入力してください. : ");
                }
            }
        // コンピューターのターン
        } else {
            printf("%d %d %d\n",x,y,z);
            printf("CPU > コンピューターのターンです.\n");
            // 二つ以上の数が0であれば、すべてを0にすれば勝てる。[(?,0,0),(0,?,0),(0,0,?)]
            if((x == 0 && y == 0) || (x == 0 && z == 0) || (y == 0 && z == 0)){
                x = 0;
                y = 0;
                z = 0;
            // 3つとも1なら1つを0にすれば勝てる。[(1,1,1)]
            } else if(x == 1 && y == 1 && z == 1){
                x = 0;
            // どれかが0なのであれば...[(0,?,?),(?,0,?),(?,?,0)]
            } else if(x == 0 || y == 0 || z == 0){
                // (0,?,?)
                if(x == 0) {
                    //もし同じなのであればもう負け.相手のミスを狙い1ずつ引いていくしか無い. (0,a > 1,a)   
                    if(y == z){
                        y--;
                    // もしどちらかが大きい状態であれば揃えてしまえば勝てる。[(0,a,b > a),(0,b > a,a)]
                    } else if(y > z){
                        y = z;
                    } else {
                        z = y;
                    }
                    // (?,0,?)
                } else if (y == 0){
                    //もし同じなのであればもう負け.相手のミスを狙い1ずつ引いていくしか無い.    
                    if(x == z){
                        x--;
                    // もしどちらかが大きい状態であれば揃えてしまえば勝てる。
                    } else if(x > z){
                        x = z;
                    } else {
                        z = x;
                    }
                } else {
                    //もし同じなのであればもう負け.相手のミスを狙い1ずつ引いていくしか無い.    
                    if(x == y){
                        x--;
                    // もしどちらかが大きい状態であれば揃えてしまえば勝てる。
                    } else if(x > y){
                        x = y;
                    } else {
                        y = x;
                    }
                }
            // (a,a,?),(b,?,b),(?,c,c) の場合は勝ち。
            } else if((x == y) || (y == z) || (x == z)){
                if(x == y) z = 0;
                if(y == z) x = 0;
                if(x == z) y = 0;
            // どれか一つだけが1であれば[(1,?,?),(?,1,?),(?,?,1)] ? > 1
            // ここで把握しておかなければいけないことは、自分のターンで操作後、必ず1でない要素を比べた時 
            // 奇数 > 偶数となっていなければ勝てないいけないということ。
            } else if(x == 1 || y == 1 || z == 1){
                // (1,?,?)
                if(x == 1){
                    //(1,a,b) a > b
                    if(y > z) {
                        // Win
                        if(z % 2 == 1){
                            y = z - 1;
                        // Win.
                        } else if(y != z + 1){
                            y = z + 1;
                        // lose.
                        } else {
                            z--;
                        }
                    } else if(z > y) {
                        if(y % 2 == 1){
                            z = y - 1;
                        } else if(z != y + 1){
                            z = y + 1;
                        } else {
                            y--;
                        }
                    }
                // (?,1,?)
                } else if(y == 1){
                    //(1,a,b) a > b
                    if(x > z) {
                        // Win
                        if(z % 2 == 1){
                            x = z - 1;
                        // Win.
                        } else if(x != z + 1){
                            x = z + 1;
                        // lose.
                        } else {
                            x--;
                        }
                    } else if(z > x) {
                        if(x % 2 == 1){
                            z = x - 1;
                        } else if(x != y + 1){
                            x = y + 1;
                        } else {
                            x--;
                        }
                    }
                // (?,?,1)    
                } else if(z == 1){
                    //(1,a,b) a > b
                    if(x > y) {
                        // Win
                        if(y % 2 == 1){
                            x = y - 1;
                        // Win.
                        } else if(x != y + 1){
                            x = y + 1;
                        // lose.
                        } else {
                            x--;
                        }
                    } else if(y > x) {
                        if(x % 2 == 1){
                            y = x - 1;
                        } else if(y != x + 1){
                            y = x + 1;
                        } else {
                            y--;
                        }
                    }
                }
            //[S(?,a % 2 = 0,b = a + 1)]なら?を1にしてしまえば勝ち
            } else if((x % 2 == 0 && (y == x + 1 || z == x + 1)) || 
                      (y % 2 == 0 && (x == y + 1 || z == y + 1)) || 
                      (z % 2 == 0 && (x == z + 1 || y == z + 1))){
                if(x % 2 == 0 && (y == x + 1 || z == x + 1)){
                    if(y == x + 1) z = 1;
                    if(z == x + 1) y = 1;
                } else if(y % 2 == 0 && (x == y + 1 || z == y + 1)) {
                    if(x == y + 1) z = 1;
                    if(z == y + 1) x = 1; 
                } else if(z % 2 == 0 && (x == z + 1 || y == z + 1)) {
                    if(x == z + 1) y = 1;
                    if(y == z + 1) x = 1;
                }
            //[S(2,a,a+2)] という状態に持っていけば勝ち,というか2,4,6という形に持っていけば勝ち。可能な限り小さい2,a,a+2に持っていく
            } else if((x == 2 && y - z != 2 && z - y != 2) ||
                      (y == 2 && z - x != 2 && x - z != 2) ||
                      (z == 2 && x - y != 2 && y - x != 2) {
                if(x == 2){
                    if(z > y) {
                        if(z - y > 2) z = y + 2;
                        else y = z - 2;
                    } else {
                        if(y - z > 2) y = z + 2;
                        else z = y - 2;
                    }
                } else if(y == 2){
                    if(x > z){
                        if(x - z > 2) x = z + 2;
                        else z = x - 2;
                    } else {
                        if(z - x > 2) z = x + 2;
                        else x = z - 2;
                    }
                } else {
                    if(x > y){
                        if(x - y > 2) x = y + 2;
                        else y = x - 2;
                    } else {
                        if(y - x > 2)  y = x + 2;
                        else x = y -2;
                    }
                }
            // 上のパターンを補完する
            } else if((x != 2 && (z - y == 2 || y - z == 2)) || 
                      (y != 2 && (x - z == 2 || z - x == 2)) ||
                      (z != 2 && (x - y == 2 || y - x == 2))){
                if(x != 2 && (z - y == 2 || y - z == 2)) {
                    x = 2;
                } else if(y != 2 && (x - z == 2 || z - x == 2)){
                    y = 2;
                } else {
                    z = 2;
                }
            // もう考えるのが面倒なので一番でかい数字からひとつずつ減らしてく
            } else {
                if(x > y && x > z){
                    x--;
                } else if(y > x && y > z){
                    y--;
                } else if(z > x && z > y){
                    z--;
                }
            }
            
        }
        if(x == 0 && y == 0 && z == 0){
            if(turn == 0) {
                printf("あなたの勝ちです!\n");
            } else {
                printf("私の勝ちです.\n");
            }
        }
        if(turn == 0){
            turn = 1;
        } else {
            turn = 0;
        }
    }
    return 0;
}
