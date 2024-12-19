	#include<stdio.h>
	#include<string.h>
	
	void nhapChuoi(char *arr) {
		printf("Vui long nhap mot chuoi ki tu : ");
	    fgets(arr, 100, stdin);
	    
	    size_t dodai = strlen(arr);
	    if (dodai > 0 && arr[dodai - 1] == '\n') {
	        arr[dodai - 1] = '\0';
	    }
	}
	int main(){
		int dodai;
		char *arrPrt;
		char arr[100], daonguocarr[100], arr2[100], newarr[200];
		int number;
		
		
		do{
		
	
			printf("\nMENU\n");
			printf("1. Nhap vao chuoi\n");
			printf("2. In ra chuoi dao nguoc\n");
			printf("3. Dem so luong tu trong chuoi\n");
			printf("4. Nhap vao chuoi khac, so sanh voi chuoi ban dau\n");
			printf("5. In hoa tat ca cac chu cai trong chuoi\n");
			printf("6. Nhap vao chuoi khac va them chuoi do vao dau\n");
			printf("7. Thoat\n");
			
			printf("Vui long nhap lua chon cua ban : ");
			scanf("%d", &number);
	
			fflush(stdin);	
				
			switch(number){
				
				case 1:
					nhapChuoi(arr);
					dodai = strlen(arr);
		            break;
	      		case 2:
	      			
			    	for(int i = dodai - 1; i >= 0; i--) {
				    daonguocarr[dodai - 1 - i] = arr[i];  
                }
                daonguocarr[dodai] = '\0';  
                printf("Chuoi dao nguoc: %s\n", daonguocarr);
				    break;
				case 3:
			        printf("Mang co do dai la %d", dodai); 
			        
				    break;
				case 4:
					printf("Nhap vao chuoi moi : ");
					fgets(arr2, 100, stdin);
					
					if (strcmp(arr, arr2) == 0) {
                        printf("Hai chuoi giong nhau.\n");
                    } else {
                        printf("Hai chuoi khac nhau.\n");
                    }
				    break;
				case 5:
					for (int i = 0; arr[i] != '\0'; i++) {
      				arr[i] = toupper(arr[i]); 
 				   	}
    				printf("Chuoi in hoa: %s\n", arr);
    				break;
				case 6:
                    nhapChuoi(arr2);    
                    strcpy(newarr, arr2); 
                    strcat(newarr, arr); 
                    strcpy(arr, newarr);  
                    printf("Chuoi sau khi them vao dau: %s\n", arr);
				 	
					break;
		    
			
			     case 7:
			     	printf("Thoat chuong trinh"); 
			     	
			     	break;
			
		    }
		
	    }while(number != 7);
		
		
		return 0;
	}
