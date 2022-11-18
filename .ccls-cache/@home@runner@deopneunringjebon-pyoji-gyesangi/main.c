#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int front(int H, int R, int S) {
  return H + S + R;
  //가로 판형 + 도련 + 링 접지
}

int back(int H, int S) {
  return H + S;
  // 가로판형 + 도련 (링접지 따로 )
}

int main() {

  int hor;
  int vet;
  int ring;
  int slug = 2;
  char quit;

  printf("덮는 링제본 표지 계산기.\n");

  printf(
      "\n가로 세로 링 추가도련 순서로 사이즈를 입력하세요. \n(공백 구분, "
      "mm없이 숫자만) \n- (예: 210(가로) 297(세로) 15(링접지) 2(추가도련)) \n");
  scanf("%d %d %d %d", &hor, &vet, &ring,
        &slug); // 가로, 세로, 링 제본, 도련 입력

  int front_w = front(hor, ring, slug); // 앞면 가로 변수 = front 함수 반환값
  int back_w = back(hor, slug);  // 뒷면 가로 변수 = back 함수 반환값
  int height = vet + (slug * 2); // height = 세로 + (도련*2)

  printf("제시하신 덮는 링제본 사이즈는 (책등 제외) \n 앞면 가로: %dmm, \n "
         "뒷면 가로: 기본 %dmm에 링 접지 %dmm, \n 세로:%dmm 입니다.",
         front_w, back_w, ring, height);

  system('pause');
  return 0;
}