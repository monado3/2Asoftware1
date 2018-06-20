#include <stdio.h>
#include <math.h>

#define  CIRCLE_COUNT 20
#define  LINE_COUNT 80

// 円に関する定数
double c_pos[CIRCLE_COUNT][2];   // 中心の座標 x = c_pos[i][0], y = c_pos[i][1]
double radius[CIRCLE_COUNT];   // 半径の配列

// 直線に関する定数
double line_a[LINE_COUNT];
double line_b[LINE_COUNT];

// プロトタイプ宣言
void init(void);
int count_intersection_points(void);

int main(void) {
  init();  // 初期化処理

  int points_num = count_intersection_points();
  printf("Intersection points: %d\n", points_num);

  return 0;
}


int count_intersection_points(void) {
    double ep = 10e-5;
    int ans=0;
    double distance;
    for (int i=0;i<CIRCLE_COUNT;i++){
        for (int j=0;j<LINE_COUNT;j++){
            distance=(fabs(c_pos[i][1]-line_a[j]*c_pos[i][0]-line_b[j]))/sqrt(1+line_a[j]*line_a[j]);
            if (radius[i]-ep<=distance && distance<=radius[i]+ep){
                ans++;
            }else if (radius[i]<distance){
                ;
            }else{
                ans+=2;
            }
        }
    }

    return ans;
}

// 初期化処理
// ここを弄ると答えが合わなくなるので、タッチしないこと
void init(void) {
  // 円の初期化処理
  double x = 0.5;
  double y = 0.6;
  double r = 0.7;
  for (int i=0; i<CIRCLE_COUNT; i++) {
    c_pos[i][0] = x;
    c_pos[i][1] = y;
    radius[i] = fabs(r);
    // Update values
    x = 3.7 * x * (1 - x);
    y = 0.7 * y * (1 - y);
    r = 2.5 * r * (1 - r);
  }

  // 直線の初期化処理
  double a = 0.8;
  double b = 0.9;
  for (int j=0; j<LINE_COUNT; j++) {
    line_a[j] = a;
    line_b[j] = b;
    // Update values
    a = 3.9 * a * (1 - a);
    b = 3.7 * b * (1 - b);
  }
}