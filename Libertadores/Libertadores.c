#include<stdio.h>

int resultado(int a1, int a2, int b1, int b2){
	int t1_casa = a1;
	int t2_fora = a2;
	int t2_casa = b2;
	int t1_fora = b1;
	
	int pts_t1 = 0;
	int pts_t2 = 0;


	if(t1_casa > t2_fora) pts_t1 += 3;
	else if(t2_fora > t1_casa) pts_t2 += 3;
	else{
		pts_t1 += 1;
		pts_t2 += 1;
	}

	if(t1_fora > t2_casa) pts_t1 += 3;
	else if(t2_casa > t1_fora) pts_t2 += 3;
	else{
		pts_t1 += 1;
		pts_t2 += 1;
	}
	

	if(pts_t1 > pts_t2) return 1;
	else if(pts_t2 > pts_t1) return 2;
	else{
		if(t1_casa + t1_fora > t2_casa + t2_fora) return 1;
		else if(t2_casa + t2_fora > t1_casa + t1_fora) return 2;
		else{
			if(t1_fora > t2_fora) return 1;
			else if(t2_fora > t1_fora) return 2;
			else return 0;
		}
	}
}

int main() {
  int casos, a1, a2, b1, b2;
  int i, r;
  scanf("%d", &casos);
  for(i=0; i<casos; i++) {
    scanf("%d x %d", &a1, &a2);
    scanf("%d x %d", &b2, &b1);
    r = resultado(a1,a2,b1,b2);
    if(r==1 || r==2) {
      printf("Time %d\n", r);
    } else {
      printf("Penaltis\n");
    }
  }
}
