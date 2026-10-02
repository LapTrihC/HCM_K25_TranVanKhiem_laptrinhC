#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int passengers[MAX_SIZE] = {32, 18, 45, 27, 50};
	int n = 5;
	int choice;
	int pos;
	int loop = 1;
    int value;
    int newValue;
    int target;
    int count;


    while (loop == 1) {
  
        printf("\n=====================================================\n");
        printf("        CHUONG TRINH QUAN LY HANH KHACH CITYBUS       \n");
        printf("=====================================================\n");
        printf("1. Them so hanh khach\n");
        printf("2. Sua so hanh khach\n");
        printf("3. Xoa so hanh khach\n");
        printf("4. Tim kiem so hanh khach\n");
        printf("0. Thoat chuong trinh\n");
        printf("=====================================================\n");

        printf("Vui long nhap lua chon cua ban (0 - 4): ");
        scanf("%d", &choice);
        switch(choice) {
        	 case 1:
        printf("Them hanh khach\n");
        
        if (n == MAX_SIZE) {
            printf("Mang da day, khong the them!\n");
            break;
        }
        printf("Mang hien tai: [");
        for (int i = 0; i < n; i++) {
            printf("%d", passengers[i]);
            if (i < n - 1) printf(", ");
        }
        printf("]\n");
        printf("Moi ban nhap vao so hanh khach can them: ");
        scanf("%d", &value);

        if (value < 0) {
            printf("So luong khong hop le!\n");
            break;
        }

        printf("Moi ban nhap vao vi tri muon chen (1 - %d): ", n + 1);
        scanf("%d", &pos);

        if (pos < 1 || pos > n + 1) {
            printf("Vi tri chen khong hop le!\n");
            break;
        }

        for (int i = n; i >= pos; i--) {
            passengers[i] = passengers[i - 1];
        }
        passengers[pos - 1] = value;
        n++;

        printf("Chen thanh cong!\n");
        printf("Mang sau khi them: [");
        for (int i = 0; i < n; i++) {
            printf("%d", passengers[i]);
            if (i < n - 1) printf(", ");
        }
        printf("]\n");
        break;
        
    		case 2:
        printf("Sua so hanh khach\n");
        printf("Mang hien tai: [");
        for (int i = 0; i < n; i++) {
            printf("%d", passengers[i]);
            if (i < n - 1) printf(", ");
        }
        printf("]\n");

        printf("Moi ban nhap vao vi tri can sua (1 - %d): ", n);
        scanf("%d", &pos);

        if (pos < 1 || pos > n) {
            printf("Vi tri sua khong hop le!\n");
            break;
        }

        printf("Moi ban nhap vao so luong hanh khach moi: ");
        scanf("%d", &newValue);

        if (newValue < 0) {
            printf("So hanh khach khong hop le!\n");
            break;
        }

        passengers[pos - 1] = newValue;

        printf("Sua thanh cong!\n");
        printf("Mang sau khi sua: [");
        for (int i = 0; i < n; i++) {
            printf("%d", passengers[i]);
            if (i < n - 1) printf(", ");
        }
        printf("]\n");
        break;
        
        	case 3:
        printf("Xoa khach hang\n");
        if (n == 0) {
            printf("Mang rong, khong the xoa!\n");
            break;
        }
        printf("Mang hien tai: [");
        for (int i = 0; i < n; i++) {
            printf("%d", passengers[i]);
            if (i < n - 1) printf(", ");
        }
        printf("]\n");
        printf("Moi ban nhap vao vi tri can xoa (1 - %d): ", n);
        scanf("%d", &pos);

        // Kiem tra vi tri xoa co hop le khong
        if (pos < 1 || pos > n) {
            printf("Vi tri xoa khong hop le!\n");
            break;
        }

        // Dich cac phan tu phia sau pos sang trai 1 o, giam n
        for (int i = pos - 1; i < n - 1; i++) {
            passengers[i] = passengers[i + 1];
        }
        n--;

        printf("Xoa thanh cong!\n");
        printf("Mang sau khi xoa: [");
        for (int i = 0; i < n; i++) {
            printf("%d", passengers[i]);
            if (i < n - 1) printf(", ");
        }
        printf("]\n");
        break;
        
        case 4:
        printf("Tim kiem hanh khach\n");
            
        printf("Moi ban nhap vao gia tri can tim: ");
        scanf("%d", &target);
        count = 0;
        for (int i = 0; i < n; i++) {
            if (passengers[i] == target) {
                if (count == 0) {
                    printf("Tim thay tai vi tri: ");
                }
                printf("%d ", i + 1);
                count++;
            }
        }
            if (count == 0) {
                printf("Khong tim thay gia tri trong mang!\n");
            } else {
                printf("\nTong so lan xuat hien: %d\n", count);
            }
            break;

        case 0:
            printf("Thoat chuong trinh\n");
            loop = 0;
            break;

        default:
            printf("Lua chon khong hop le!\n");
            break;
    }
}
	return 0;
}


            




