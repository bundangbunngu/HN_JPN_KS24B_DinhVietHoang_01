#include <stdio.h>
int main(){
	int a[100], n, choice, sum = 0;
	int i;
	int j;
	int new_value;
	int viTri;
	int temp_arr[100];
    int odd_count = 0;
	while (choice != 11){
	
	printf("1. Nhap so phan tu va gia tri cho mang\n");
	printf("2. In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5...)\n");
	printf("3. Dem so luong cac so hoan hao co trong mang\n");
	printf("4. Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang\n");
	printf("5. Them mot phan tu vao vi tri dau tien trong mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
	printf("6. Xoa phan tu tai mot vi tri cu the\n");
	printf("7. Sap xep mang theo thu tu giam dan (Selection sort)\n");
	printf("8. Tim kiem phan tu trong mang phan tu tim kiem do nguoi dùng nhap vào. Su dung thuat toan Binary search\n");
	printf("9. Sap xep lai mang và hien thi ra toàn bo phan tu co trong mang sao cho toàn bo so le dung truoc, so chan dung sau	\n");
	printf("10. Dao nguoc thu tu cua cac phan tu co trong mang và hien thi ra toàn bo phan tu co trong mang theo dang \n");
	printf("11. Thoat chuong trinh\n");
	printf("Moi ban chon\n \n");
	scanf("%d",&choice);
		switch(choice){
			case 1: 
				printf("Nhap vao so cac phan tu\n");
				scanf("%d",&n);
				for(i = 0; i<n; i++){
					printf("Nhap vao gia tri thu %d cua mang\n",i+1);
					scanf("%d",&a[i]);
				}
				printf("\n");
				break;
			case 2:
				for(i = 0; i<n; i++){
					printf("arr[%d] = %d\n", i, a[i]);
				}
				printf("\n");
				break;
			
    		case 3:
    			printf("em chua lam duoc\n");
				break;
   			case 4:
			   printf("em chua lam duoc\n"); 
				break;
   			case 5:

    			
    			printf("Nhap gia tri moi de them vao dau mang: ");
    			scanf("%d", &new_value);

    			for (i = n; i > 0; i--) {
        			a[i] = a[i - 1];
    			}

   				a[0] = new_value; 
    			n++;  

   				printf("Mang sau khi them: ");
   				for (i = 0; i < n; i++) {
      				printf("%d ", a[i]);
    			}			
    			printf("\n");
				break;
   			case 6:

  				
   				printf("Nhap vi tri muon xoa (0 <= vi tri < %d): ", n);
    			scanf("%d", &viTri);

    			if (viTri < 0 || viTri >= n) {
       				printf("Vi tri khong hop le.\n");
    			} else {
       				for (i = viTri; i < n - 1; i++) {
           			 a[i] = a[i + 1];  
       				}
      			n--; 

       			printf("Mang sau khi xoa: ");
        		for (i = 0; i < n; i++) {
            		printf("%d ", a[i]);
        			}
        		printf("\n");
    			}

				break;
			case 7:
				for (i = 0; i < n - 1; i++) {
        			int max_idx = i;
        			for (j = i + 1; j < n; j++) {
            			if (a[j] > a[max_idx]) {
                			max_idx = j;
            			}
        			}
        		int temp = a[max_idx];
       			a[max_idx] = a[i];
        		a[i] = temp;
    			}
   		 		printf("Mang sau khi sap xep giam dan: ");
    			for (i = 0; i < n; i++) {
        			printf("%d ", a[i]);
    			}
    			printf("\n");
				break;
			case 8:
				printf("em chua lam duoc\n");
				break;
			case 9:
    			for (i = 0; i < n; i++) {
       				if (a[i] % 2 != 0) {
            			temp_arr[odd_count++] = a[i];
        			}
    			}

    			for (i = 0; i < n; i++) {
        			if (a[i] % 2 == 0) {
            			temp_arr[odd_count++] = a[i];
        			}
    			}

    			for (i = 0; i < n; i++) {
        			a[i] = temp_arr[i];
    			}

    			printf("Mang sau khi sap xep so le truoc, so chan sau: ");
    			for (i = 0; i < n; i++) {
        			printf("%d ", a[i]);
    			}
    			printf("\n");
				break;
			case 10:
    			for (i = 0; i < n / 2; i++) {
        			int temp = a[i];
        			a[i] = a[n - i - 1];
        			a[n - i - 1] = temp;
    			}
    			printf("Mang sau khi dao nguoc: ");
    			for (i = 0; i < n; i++) {
        			printf("arr[%d] = %d - %s\n", i, a[i], (a[i] % 2 == 0) ? "chan" : "le");
    			}
    			printf("\n");
			break;
			case 11:
				printf("Thoat\n");
				break;
			default:
				printf("moi ban nhap tu 1-11\n");
				break;   	
		}
			
	}
} 
