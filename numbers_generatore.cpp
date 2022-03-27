#include<stdio.h>
#include <thread>
using namespace std;

void mobilis(int sa){
	unsigned int i=0,j=0,o=0,p=0,y=0,t=0,w=0,q=0;
	int howmuch=0;
	FILE *file1;
	file1=fopen("phone_numbers_06.txt","a");
		for(i=10; i--; ){
        for(j=10; j--; ){
            for(o=10; o--; ){
                for(p=10; p--; ){
                    for(y=10; y--; ){
                        for(t=10; t--;){
                            for(w=10; w--; ){
                                for(q=10; q--; ){
                                    printf("\n0%d%d%d%d%d%d%d%d%d",sa,i,j,o,p,y,t,w,q); printf("\t\t%d",howmuch); 
                                    fprintf(file1, "0%d%d%d%d%d%d%d%d%d\n",sa,i,j,o,p,y,t,w,q);
                                    howmuch++;
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
	}
	printf("\n\t we have\t %d \tnumber\n",howmuch*3);
	fclose(file1);
}

void ooredoo(int sa){
	unsigned int i=0,j=0,o=0,p=0,y=0,t=0,w=0,q=0;
	FILE *file2;
	file2=fopen("phone_numbers_05.txt","a");
	int howmuch=0;
	// 05 now
	for(i=10; i--; ){
        for(j=10; j--; ){
            for(o=10; o--; ){
                for(p=10; p--; ){
                    for(y=10; y--; ){
                        for(t=10; t--;){
                            for(w=10; w--; ){
                                for(q=10; q--; ){
                                    printf("\n0%d%d%d%d%d%d%d%d%d",sa,i,j,o,p,y,t,w,q); printf("\t\t%d",howmuch); 
                                    fprintf(file2, "0%d%d%d%d%d%d%d%d%d\n",sa,i,j,o,p,y,t,w,q);
                                    howmuch++;
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
	}
	printf("\n\t we have\t %d \tnumber\n",howmuch*3);
	fclose(file2);
}

void djezy(int sa){
	unsigned int i=0,j=0,o=0,p=0,y=0,t=0,w=0,q=0;
	FILE *file3;
	file3=fopen("phone_numbers_07.txt","a");
	int howmuch=0;
	// 07 now
	for(i=10; i--; ){
        for(j=10; j--; ){
            for(o=10; o--; ){
                for(p=10; p--; ){
                    for(y=10; y--; ){
                        for(t=10; t--;){
                            for(w=10; w--; ){
                                for(q=10; q--; ){
                                    printf("\n0%d%d%d%d%d%d%d%d%d",sa,i,j,o,p,y,t,w,q); printf("\t\t%d",howmuch); 
                                    fprintf(file3, "0%d%d%d%d%d%d%d%d%d\n",sa,i,j,o,p,y,t,w,q);
                                    howmuch++;
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
	}
	printf("\n\t we have\t %d \tnumber\n",howmuch*3);
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
