#include<stdio.h>
#include <thread>
#include<cstdlib>
#include<ctime>
using namespace std;

void shuffle(unsigned int arr[]){
    int j=0;
    int temp=0;
    for(int i=0; i<10; i++){
        j = (rand()%8)+1;
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

void shuffle2(unsigned int arr[]){
    int j=0;
    int temp=0;
    for(int i=0; i<6; i++){
        j = (rand()%4)+1;
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

void mobilis(int sa){
	unsigned int i=0,j=0,o=0,p=0,y=0,t=0,w=0,q=0;
	unsigned int i2=0,j2=0,o2=0,p2=0,y2=0,t2=0,w2=0,q2=0;
	unsigned int i1[]={4,5,6,7,8,9};
	unsigned int j1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int o1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int p1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int y1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int t1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int w1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int q1[]={0,1,2,3,4,5,6,7,8,9};
	shuffle2(i1); shuffle(j1); shuffle(o1); shuffle(p1); shuffle(y1); shuffle(t1); shuffle(w1); shuffle(q1);
	int howmuch=0;
	FILE *file1;
	file1=fopen("phone_numbers_06.txt","a");
		for(i=6; i--; ){
			i2 = i1[i];
			printf("%d== \n",i2);
			for(j=10; j--; ){
				printf("%d: \n",howmuch);
				j2 = j1[j];
				for(o=10; o--; ){
					o2 = o1[o];
					for(p=10; p--; ){
						p2 = p1[p];
						for(y=10; y--; ){
							y2 = y1[y];
							for(t=10; t--;){
								t2 = t1[t];
								for(w=10; w--; ){
									w2 = w1[w];
									for(q=10; q--; ){
										q2 = q1[q];
										//printf("\n0%d%d%d%d%d%d%d%d%d",sa,i2,j2,o2,p2,y2,t2,w2,q2); printf("\t\t%d",howmuch); 
										fprintf(file1, "0%d%d%d%d%d%d%d%d%d\n",sa,i2,j2,o2,p2,y2,t2,w2,q2);
										howmuch++;
									}
								}
							}
						}
					}
				}
			}
	}
	printf("\n\t we have\t %d \tnumber\n",howmuch);
	fclose(file1);
}

void ooredoo(int sa){
unsigned int i=0,j=0,o=0,p=0,y=0,t=0,w=0,q=0;
	unsigned int i2=0,j2=0,o2=0,p2=0,y2=0,t2=0,w2=0,q2=0;
	unsigned int i1[]={4,5,6,7,8,9};
	unsigned int j1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int o1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int p1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int y1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int t1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int w1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int q1[]={0,1,2,3,4,5,6,7,8,9};
	shuffle2(i1); shuffle(j1); shuffle(o1); shuffle(p1); shuffle(y1); shuffle(t1); shuffle(w1); shuffle(q1);
	int howmuch=0;
	FILE *file2;
	file2=fopen("phone_numbers_05.txt","a");
		for(i=6; i--; ){
			i2 = i1[i];
			printf("%d== \n",i2);
			for(j=10; j--; ){
				printf("%d: \n",howmuch);
				j2 = j1[j];
				for(o=10; o--; ){
					o2 = o1[o];
					for(p=10; p--; ){
						p2 = p1[p];
						for(y=10; y--; ){
							y2 = y1[y];
							for(t=10; t--;){
								t2 = t1[t];
								for(w=10; w--; ){
									w2 = w1[w];
									for(q=10; q--; ){
										q2 = q1[q];
										//printf("\n0%d%d%d%d%d%d%d%d%d",sa,i2,j2,o2,p2,y2,t2,w2,q2); printf("\t\t%d",howmuch); 
										fprintf(file2, "0%d%d%d%d%d%d%d%d%d\n",sa,i2,j2,o2,p2,y2,t2,w2,q2);
										howmuch++;
									}
								}
							}
						}
					}
				}
			}
	}
	printf("\n\t we have\t %d \tnumber\n",howmuch);
	fclose(file2);
}

void djezy(int sa){
unsigned int i=0,j=0,o=0,p=0,y=0,t=0,w=0,q=0;
	unsigned int i2=0,j2=0,o2=0,p2=0,y2=0,t2=0,w2=0,q2=0;
	unsigned int i1[]={4,5,6,7,8,9};
	unsigned int j1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int o1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int p1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int y1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int t1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int w1[]={0,1,2,3,4,5,6,7,8,9};
	unsigned int q1[]={0,1,2,3,4,5,6,7,8,9};
	shuffle2(i1); shuffle(j1); shuffle(o1); shuffle(p1); shuffle(y1); shuffle(t1); shuffle(w1); shuffle(q1);
	int howmuch=0;
	FILE *file3;
	file3=fopen("phone_numbers_07.txt","a");
		for(i=6; i--; ){
			i2 = i1[i];
			printf("%d== \n",i2);
			for(j=10; j--; ){
				printf("%d: \n",howmuch);
				j2 = j1[j];
				for(o=10; o--; ){
					o2 = o1[o];
					for(p=10; p--; ){
						p2 = p1[p];
						for(y=10; y--; ){
							y2 = y1[y];
							for(t=10; t--;){
								t2 = t1[t];
								for(w=10; w--; ){
									w2 = w1[w];
									for(q=10; q--; ){
										q2 = q1[q];
										//printf("\n0%d%d%d%d%d%d%d%d%d",sa,i2,j2,o2,p2,y2,t2,w2,q2); printf("\t\t%d",howmuch); 
										fprintf(file3, "0%d%d%d%d%d%d%d%d%d\n",sa,i2,j2,o2,p2,y2,t2,w2,q2);
										howmuch++;
									}
								}
							}
						}
					}
				}
			}
	}
	printf("\n\t we have\t %d \tnumber\n",howmuch);
	fclose(file3);
}

int main(){
	//unsigned int i=0,j=0,o=0,p=0,y=0,t=0,w=0,q=0;
	//std::thread thread_object(callable);
	
	std::thread th1(mobilis, 6);
	std::thread th2(ooredoo, 5);
	std::thread th3(djezy, 7);
	
	th1.join();
	th2.join();
	th3.join();

	//printf("\n\t we have\t %d \tnumber\n",howmuch*3);
	return 0;
}
