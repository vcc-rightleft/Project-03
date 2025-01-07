#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>


typedef struct {
    int id;
    char bookName[100];
    char author[50];
    long long price;
    char category[50];
} Book;

typedef struct {
    int id;
    char clientname[100];
    char phonenumber[50];
    char date[50]  ;
    char category[50];
} Client;

void findBook(Book book[], int n);
void printBook(Book book[], int n);
void addBook(Book book[], int *n);
void deleteBook(Book book[], int *n);
void updateBook(Book book[], int n);
void ValueBook(Book book[], int n,int value);
void saveBooksToFile(Book book[], int n);
void loadBooksFromFile(Book book[], int *n);

void addclient(Client client[],int *m);
void deleteclient(Client client[],int *m);
void findclient(Client client[],int m);
void printfclient(Client client[],int m);
void saveClientToFile(Client client[],int m);
void loadClientFromFile(Client client[],int *m);
void updateClient(Client client[],int m);


int main() {
	Client clients[50];
    Book books[50];
    int n;
    int m=0;
    int choice;
    loadBooksFromFile(books, &n);
    loadClientFromFile(clients,&m);
    int choice0,choice1,choice2;
    char emailad[50];
    char passwordad[50];
	char accoutadmin[]="admin";
	char passadmin[]="admin123";
    char email[50],password[50];
    do{
    	printf("=================== Library Management ===================\n");
    	printf("[1]. Admin\n");
    	printf("[2]. Exit\n");
    	printf("=======================================================\n");
    	printf("Enter The CHoice: ");
    	scanf("%d",&choice0);
    	system("cls");
    	switch(choice0){
    		case 1:{
    			while(1){
    			printf("*** Login Admin ***   \n");
    			printf("hint:\n");
    			printf("accout:admin\n");
    			printf("password:admin123\n");
    			printf("Accout Admin: ");
    			scanf("%s",&emailad);
    			strlwr(emailad);
    			if(strcmp(emailad,accoutadmin)==0){
    			break;	
				}else{
					printf("Incorrect account!!! Please re-enter!!!\n");
				}
			}
			while(1){
			    printf("Password:");
    			scanf("%s",&passwordad);
    			strlwr(passwordad);
    			if(strcmp(passwordad,passadmin)==0){
    				break;
				}else{
				printf("Password is incorrect!!! Please re-enter!!!\n");
				}
    		}
    		system("cls");
    		do{
    			printf("==================== Admin ====================\n");
    			printf("1. Book management\n");
    			printf("2. Customer Management\n");
    			printf("3. Exit\n");
    			printf("=================================================\n");
    			printf("Enter The CHoice: ");
    			scanf("%d",&choice2);
    			system("cls");
    			switch(choice2){
    				case 1:{
    					do {
        		printf("\n=========== MENU ===========\n");
       		 	printf("[1]. Show book\n");
        		printf("[2]. Add book\n");
        		printf("[3]. Edit book \n");
        		printf("[4]. Delete book\n");
        		printf("[5]. Search for book\n");
        		printf("[6]. Book arrangement\n");
        		printf("[7]. Return\n");
        		printf("============================\n");
        		printf("Enter The CHoice: ");
        		scanf("%d", &choice);
				system("cls");
        		switch (choice) {
        	
            case 2:{
            	int mh;
            	do{
            	printf("\n----------- Add Book ------------\n");	
                addBook(books, &n);
                saveBooksToFile(books, n);
                printf("==========================\n");
                printf("1.Add book\n");
                printf("2.Return\n");
                printf("Enter The Choice: \n");
                scanf("%d",&mh);
            } while(mh!=2);
            	system("cls");
                break;
            }
            case 1:{
				int mh;
				do{
				printf("\n|---------------------------------- Show Book ---------------------------------------|\n");	
				printBook(books, n);	
                printf("1.Return\n");
                printf("Enter The Choice: \n");
                scanf("%d",&mh);
           }while(mh!=1);
           system("cls");
                break;
       }
            case 3:{
			int mh;
			do{
			printf("------------- Edit Book -------------\n");
    			updateBook(books, n);
    			saveBooksToFile(books, n); 
    		printf("===================================================\n");
			printf("1.Edit book\n");
			printf("2.Return\n");
			scanf("%d",&mh);
		}while(mh!=2);
		system("cls");
			break;
		}
			case 4:{
				int mh;
				do{
					printf("\n----------- Delete Book ----------\n");
					deleteBook(books, &n);
            		saveBooksToFile(books, n);
            		printBook(books, n);
            		printf("\n==============================================\n");
            		printf("1.Delete book\n");
            		printf("2.Return\n");
            		scanf("%d",&mh);
				}while(mh!=2);
				system("cls");
				break;
			}
			case 6:{
				int mh,sx;
				do{
					printf("\n----------------- Book arrangement ----------------\n");
					printf("1.Sort by price ascending\n");
					printf("2.Sort by price descending\n");
					printf("3.Return\n");
					scanf("%d",&mh);
					 if (mh == 1 || mh == 2) {
            		sx = (mh == 1) ? 1 : 0; 
            		ValueBook(books, n, sx);
            		saveBooksToFile(books, n);
            		printBook(books, n);
        }
        printf("==================================================================================================\n");
				}while(mh!=3);
				system("cls");
				break;
			}
			case 5:{
				int mh;
				do{
					printf("\n--------------------- Find Book --------------------\n");
					findBook(books,n);
					printf("\n=======================================================\n");
					printf("1.Findbook\n");
					printf("2.return\n");
					scanf("%d",&mh);
				}while (mh!=2);
				system("cls");
				break;
			}
				
            case 7:
                break;
            default:
                printf("Invalid selection!!!Please select again!!!\n");
        }
    		} while (choice != 7);	
			break;			
	}
    		case 2:{
    			do{
    	printf("======== Customer Management ===========\n");
    	printf("[1]. Show customer\n");
    	printf("[2]. Add customer\n");
    	printf("[3]. Edit customer information\n");
    	printf("[4]. Find customer\n");
    	printf("[5]. \n");
    	printf("[6]. \n");
    	printf("[7]. \n");
    	printf("[8]. \n");
    	printf("[9]. Return\n");
    	printf("======================================\n");
    	printf("Enter The Choice:");
    	scanf("%d",&choice1);
    	system("cls");
    	switch(choice1){
    	case 2:{
    		int mh;
    		do{
    			printf("\n+++ Add Customer +++\n ");
    			addclient(clients,&m);
    			saveClientToFile(clients,m);
    			printf("\n-----------------------\n");
       			printf("1. Add customer\n");
    			printf("2. Return\n");
    			scanf("%d",&mh);
			}while(mh!=2);
			system("cls");
			break;
		}
		case 1:{
			int mh;
			do{
				printf("=========================================== Show Customer =======================================\n");
				printfclient(clients, m);
				printf("-------------------------------------------------------------------------------------------------------\n");
				printf("1. Return\n");
				scanf("%d",&mh);
			}while(mh!=1);
			system("cls");
			break;
		}
		case 3:{
			int mh;
			do{
				printf("=============== Edit Customer Information =====================\n");
				updateClient(clients, m);
				saveClientToFile(clients, m);
				printf("\n------------------------------------------------------------\n");
				printf("1. Edit customer information\n");
				printf("2. Return\n");
				scanf("%d",&mh);
			}while (mh!=2);
			system("cls");
			break;
		}
		case 4:{
			int mh;
			do{
				printf("=========================== Find Customer ============================\n");
				findclient(clients, m);
				printf("1. Find customer\n");
				printf("2. Return");
				scanf("%d",&mh);
			}while(mh!=2);
			system("cls");
			break;
		}
    		
    	case 9:
    		break;
    		default:
    			printf("Invalid selection!!!Please select again!!!\n");
    }
	    }while(choice1!=9);			
		break;    		
			}
	case 3:
		break;	
		default:
			printf("Invalid selection!!!Please select again!!!\n");
}
	} while(choice2!=3);
	return 0;
}
	case 2:
		printf("================== Thank You =================\n");
		break;
		default:
			printf("Invalid selection!!!Please select again!!!\n");
	}
		}while(choice0!=2);
		return 0;
}


void addclient(Client client[], int*m){
	getchar();
	client[*m].id=*m+1;
	while(1){
	printf("Moi nhap vao ten khach hang: \n");
	fgets(client[*m].clientname,100,stdin);
	client[*m].clientname[strcspn(client[*m].clientname, "\n")]='\0';
	if (strlen(client[*m].clientname)==0){
		printf("Ten khach hang khong duoc bo trong!!!\n");
		continue;
	}	
	break;
}
	while(1){
	printf("Moi nhap vao so dien thoai khach hang: \n");
	fgets(client[*m].phonenumber,50,stdin);
	client[*m].phonenumber[strcspn(client[*m].phonenumber,"\n")]='\0';
	if(strlen(client[*m].phonenumber)==0){
		printf("So dien thoai cua khach hang khong duoc bo trong!!!\n");
		continue;
	}
	break;
}
	while(1){
	printf("Moi nhap vao ngay muon sach: \n");
	fgets(client[*m].date,50,stdin);
	client[*m].date[strcspn(client[*m].date,"\n")]='\0';
	if(strlen(client[*m].date)==0){
		printf("Ngay muon sach khong duoc bo trong!!!\n");
		continue;
	}
	break;
}
	(*m)++;
	printf("Them khach hang thanh cong!!!\n");
}
void printfclient(Client client[], int m){
	printf("\n_______________________________________________________________________________________________\n");
    printf("| %-2s | %-40s | %-20s | %-20s |\n", "ID", "Ten khach hang", "So dien thoai", "Ngay muon sach");
    printf("|____|__________________________________________|______________________|______________________|\n");
    for (int i = 0; i < m; i++) {
        printf("| %-2d | %-40s | %-20s | %-20s |\n", client[i].id, client[i].clientname, client[i].phonenumber, client[i].date);
    }
}
void updateClient(Client client[], int m) {
    int id;
    printf("Nhap id khach hang muon cap nhat: ");
    scanf("%d", &id);
    getchar();

    int found = 0;  
    for (int i = 0; i < m; i++) {
        if (client[i].id == id) {  
            found = 1;
            printf("Sua thong tin cho khach co ID %d:\n", id);
            printf("Nhap ten khach hang moi: ");
            char Name[100];
            fgets(Name, 100, stdin);
            Name[strcspn(Name, "\n")] = '\0';
            if (strlen(Name) > 0) {
                strcpy(client[i].clientname, Name);
            }

            printf("Nhap so dien thoai moi: ");
            char phone[50];
            fgets(phone, 50, stdin);
            phone[strcspn(phone, "\n")] = '\0';
            if (strlen(phone) > 0) {
                strcpy(client[i].phonenumber, phone);
            }

            printf("Nhap ngay muon sach moi: ");
            char datebook[50];
            fgets(datebook, 50, stdin);
            datebook[strcspn(datebook, "\n")] = '\0';
            if (strlen(datebook) > 0) {
                strcpy(client[i].date, datebook);
            }

            printf("Cap nhat thong tin thanh cong!\n");
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay khach hang voi ma ID %d.\n", id);
    }
}

void saveClientToFile(Client client[], int m) {
    FILE *ptr = fopen("ClientData.bin", "wb");
    if (ptr == NULL) {
        printf("Khong mo duoc file\n");
        return;
    }
    fwrite(client, sizeof(Client), m, ptr);
    printf("Luu thong tin thanh cong\n");
    fclose(ptr);
}
void loadClientFromFile(Client client[], int *m) {
    FILE *ptr = fopen("ClientData.bin", "rb");
    if (ptr == NULL) {
        printf("Khong mo duoc file\n");
        return;
    }

    *m = fread(client, sizeof(Client), 50, ptr);   
    fclose(ptr);
}
void findclient(Client client[],int m)
 {
 	int client11;
    char search[1000];
    printf("Nhap ten khach hang ban muon tim: ");
    scanf(" %[^\n]", search);
    strlwr(search);
    bool found = false;

    printf("|____________________________________________THONG TIN TIM DUOC________________________________________|\n");
    printf("| %-2s | %-40s | %-20s | %-20s |\n", "ID", "Ten khach hang", "So dien thoai", "Ngay muon sach");
    printf("|____|__________________________________________|______________________|______________________|\n");

    for (int i = 0; i < m; i++)
    {
    	char clientNameCopy[1000];
    	strcpy(clientNameCopy, client[i].clientname);
    	strlwr(clientNameCopy);
        if (strstr(clientNameCopy, search) != NULL)
        {
        printf("| %-2d | %-40s | %-20s | %-20s |\n", client[i].id, client[i].clientname, client[i].phonenumber, client[i].date);
            found = true;
        }
    }

    if (!found)
    {
        printf("| Khong tim thay !                                                           |\n", search);
    }

    printf("|___________________________________________________________________________________________________________|\n");
}

void addBook(Book book[],  int *n){
	while(1){
	int namebook11=0;
	getchar();
	book[*n].id=*n+1;
	printf("Moi ban nhap vao ten sach: \n");
	fgets(book[*n].bookName, 100, stdin);
	book[*n].bookName[strcspn(book[*n].bookName, "\n")] = '\0';
	if (strlen(book[*n].bookName)==0){
		printf("Ten sach khong duoc bo trong!!!\n");
		continue;
	}
	for (int i = 0; i < *n; i++) {
            if (strcmp(book[*n].bookName, book[i].bookName) == 0) {
                printf("Ten sach da ton tai. Vui long nhap ten khac.\n");
              	namebook11 = 1;
                break;
            }
        }
        if (namebook11) continue;
		break;
}
	while(1){
	printf("Moi ban nhap vao ten tac gia: \n");
	fgets(book[*n].author, 50, stdin);
	book[*n].author[strcspn(book[*n].author, "\n")] = '\0';
	if (strlen(book[*n].author)==0){
		printf("Ten tac gia khong duoc de trong!!!\n");
		continue;;
	}
	break;
}
	while(1){
	printf("Moi ban nhap vao gia tien: \n");
	if(scanf("%lld", &book[*n].price)!=1||book[*n].price<=0){
		printf("Gia tien phai la so nguyen duong!!!\n");
		while(getchar()!='\n');
	}else{
		getchar();
		break;
	}
	};
	getchar();
	while(1){
	printf("Moi ban nhap vao the loai: \n");
	fgets(book[*n].category, 50, stdin);
	book[*n].category[strcspn(book[*n].category, "\n")] = '\0';
	if(strlen(book[*n].category)==0){
		printf("The loai khong duoc de trong!!!\n");
		continue;
	}
	break;
}
	(*n)++;
	printf("Them sach thanh cong!!!\n");
}
void printBook(Book book[], int n) {
	printf("\n__________________________________________________________________________________________________\n");
    printf("| %-2s | %-40s | %-20s | %-10s | %-10s |\n", "ID", "Ten sach", "Tac gia", "Gia tien", "The loai");
    printf("|____|__________________________________________|______________________|____________|____________|\n");
    for (int i = 0; i < n; i++) {
        printf("| %-2d | %-40s | %-20s | %-10lld | %-10s |\n", book[i].id, book[i].bookName, book[i].author, book[i].price, book[i].category);
    }
}

void saveBooksToFile(Book book[], int n) {
    FILE *ptr = fopen("bookData.bin", "wb");
    if (ptr == NULL) {
        printf("Khong mo duoc file\n");
        return;
    }
    fwrite(book, sizeof(Book), n, ptr);
    printf("Luu thong tin thanh cong\n");
    fclose(ptr);
}

void loadBooksFromFile(Book books[], int *n) {
    FILE *ptr = fopen("bookData.bin", "rb");
    if (ptr == NULL) {
        printf("Khong mo duoc file\n");
        return;
    }

    *n = fread(books, sizeof(Book), 50, ptr);   
    fclose(ptr);
}
void updateBook(Book book[], int n) {
    int id;
	while(1){
    printf("Nhap id sach muon cap nhat: ");
    if( scanf("%d", &id)){
    printf("Khong tim thay Id!!!Vui long nhap lai!!!\n");
    while(getchar()!='\n');
	}else{
	getchar();	
    break;
	}
}
    int found = 0;  
    for (int i = 0; i < n; i++) {
        if (book[i].id == id) {  
            found = 1;
            printf("Sua thong tin cho sach co ID %d:\n", id);
            printf("Nhap ten sach moi: ");
            char Name[100];
            fgets(Name, 100, stdin);
            Name[strcspn(Name, "\n")] = '\0';
            if (strlen(Name) > 0) {
                strcpy(book[i].bookName, Name);
            }

            printf("Nhap ten tac gia moi: ");
            char Author[50];
            fgets(Author, 50, stdin);
            Author[strcspn(Author, "\n")] = '\0';
            if (strlen(Author) > 0) {
                strcpy(book[i].author, Author);
            }

            printf("Nhap gia tien moi: ");
            long long Price;
            scanf("%lld", &Price);
            getchar();
            if (Price > 0) {
                book[i].price = Price;
            }

            printf("Nhap the loai moi: ");
            char Category[50];
            fgets(Category, 50, stdin);
            Category[strcspn(Category, "\n")] = '\0';
            if (strlen(Category) > 0) {
                strcpy(book[i].category, Category);
            }

            printf("Cap nhat thong tin thanh cong!\n");
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sach voi ma ID %d.\n", id);
    }
}
void deleteBook(Book book[],  int *n){
	int position;
	printf("Moi ban nhap vao id sach muon xoa:");
	if (scanf("%d", &position)!=1){
		printf("khong tim thay sach de xoa!!!!\n");
		fflush(stdin);
		return;
	};
	int findIndex=-1;
	for(int i=0;i<*n-1;i++){
		if(book[i].id==position){
			findIndex =i;
			break;
		}
	} 

	if(findIndex==-1){
		printf("Khong tim thay sach de xoa\n");
	}else{
		printf("Xac nhan xoa sach co id %d? (y/n): ",position);
		getchar();
		char xn;
		scanf("%s",&xn);
		if(xn=='y'||xn=='Y'){
		for(int i=findIndex;i<*n;i++){
			book[i]=book[i+1];
		}
		(*n)--;
		printf("Da xoa sach thanh cong!!!\n");
	}else{
		printf("Xoa sach khong thanh cong!!!\n");
	}
	}
}
void ValueBook(Book book[], int n, int value) {
    for (int i = 0; i < n - 1; i++) {
	        for (int j = 0; j < n - i - 1; j++) {
            if ((value && book[j].price > book[j + 1].price) || 
                (!value && book[j].price < book[j + 1].price)) {
                Book temp = book[j];
                book[j] = book[j + 1];
                book[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep sach theo gia.\n");
}
void findBook(Book book[], int n)
 {
 	int book11;
    char search[1000];
    printf("Nhap ten sach ma ban muon tim: ");
    scanf(" %[^\n]", search);
    strlwr(search);
    bool found = false;

    printf("|____________________________________________THONG TIN SACH TIM DUOC________________________________________|\n");
    printf("| %-8s | %-30s | %-20s | %-20s | %-15s |\n", "Ma sach", "Ten sach", "Gia tien", "Tac gia", "The loai");
    printf("|__________|________________________________|______________________|______________________|_________________|\n");

    for (int i = 0; i < n; i++)
    {
    	char bookNameCopy[1000];
    	strcpy(bookNameCopy, book[i].bookName);
    	strlwr(bookNameCopy);
        if (strstr(bookNameCopy, search) != NULL)
        {
            printf("| %-8d | %-30s | %-20d | %-20s | %-15s |\n", book[i].id, book[i].bookName, book[i].price, book[i].author, book[i].category);
            found = true;
        }
    }

    if (!found)
    {
        printf("| Khong tim thay sach!                                                           |\n", search);
    }

    printf("|___________________________________________________________________________________________________________|\n");
}
