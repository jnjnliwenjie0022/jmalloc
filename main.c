#include "malloc.h"
#include <iostream>
using namespace std;
//void    *global_tail_chunk;
//void    *global_head_chunk;
int main(){
    printf("hellow\n");
    int *a = 0;
    int *b = 0;
    int *c = 0;
    a = (int *)jmalloc(32);
    printf("%d\n", sizeof(chunk_s));
    printf("%d\n", sizeof(chunk_p));
    printf("%d\n", sizeof(int));
    printf("==\n"); 
    b = (int *)jmalloc(32);
    c = (int *)jmalloc(32);
    for(int i = 0; i < 64; i++){
        printf("%d: %d\n",i, *(a+i-8));
    }
   ///* 
    chunk_p a_p = NULL;
    chunk_p b_p = NULL;
    chunk_p c_p = NULL;
    chunk_p d_p = NULL;
    a_p = (chunk_p)receive_chunk(a); 
    b_p = (chunk_p)receive_chunk(b); 
    c_p = (chunk_p)receive_chunk(c); 
    d_p = (chunk_p)(c_p->next); 
    //jfree(a);
    jfree(c);
    //jfree(b);
    cout << "==a==\n";
    cout << global_tail_chunk << endl;
    cout << global_head_chunk << endl;
    cout << "a:" << a_p << endl;
    cout << a_p->prev << endl;
    cout << a_p->next << endl;
    cout << a_p->isfree << endl;
    cout << a_p->size << endl;
    cout << "==b==\n";
    cout << global_tail_chunk << endl;
    cout << global_head_chunk << endl;
    cout << "b:" << b_p << endl;
    cout << b_p->prev << endl;
    cout << b_p->next << endl;
    cout << b_p->isfree << endl;
    cout << b_p->size << endl;
    cout << "==c==\n";
    cout << global_tail_chunk << endl;
    cout << global_head_chunk << endl;
    cout << "c:" << c_p << endl;
    cout << c_p->prev << endl;
    cout << c_p->next << endl;
    cout << c_p->isfree << endl;
    cout << c_p->size << endl;
    cout << "==d==\n";
    cout << "d:" << d_p << endl;
    cout << d_p->prev << endl;
    cout << d_p->next << endl;
    cout << d_p->isfree << endl;
    cout << d_p->size << endl;

    //jfree(a);
    //jfree(c);
    cout << "==new_b==";
    //jfree(b);
    cout << b_p << endl;
    cout << b_p->prev << endl;
    cout << b_p->next << endl;
    cout << b_p->isfree << endl;
    cout << b_p->size << endl;
    //*/
    //======================
    cout << "============" << endl;
    a = (int *)jmalloc(32);
    cout << "============" << endl;
    b = (int *)jmalloc(64);
    cout << "============" << endl;
    c = (int *)jmalloc(128);
    cout << "============" << endl;
    a_p = (chunk_p)receive_chunk(a); 
    b_p = (chunk_p)receive_chunk(b); 
    c_p = (chunk_p)receive_chunk(c); 
    d_p = (chunk_p)(c_p->next); 
    //jfree(a);
    //jfree(c);
    //jfree(b);
    cout << "==a==\n";
    cout << global_tail_chunk << endl;
    cout << global_head_chunk << endl;
    cout << "a:" << a_p << endl;
    cout << a_p->prev << endl;
    cout << a_p->next << endl;
    cout << a_p->isfree << endl;
    cout << a_p->size << endl;
    cout << "==b==\n";
    cout << global_tail_chunk << endl;
    cout << global_head_chunk << endl;
    cout << "b:" << b_p << endl;
    cout << b_p->prev << endl;
    cout << b_p->next << endl;
    cout << b_p->isfree << endl;
    cout << b_p->size << endl;
    cout << "==c==\n";
    cout << global_tail_chunk << endl;
    cout << global_head_chunk << endl;
    cout << "c:" << c_p << endl;
    cout << c_p->prev << endl;
    cout << c_p->next << endl;
    cout << c_p->isfree << endl;
    cout << c_p->size << endl;
    cout << "==d==\n";
    cout << "d:" << d_p << endl;
    cout << d_p->prev << endl;
    cout << d_p->next << endl;
    cout << d_p->isfree << endl;
    cout << d_p->size << endl;

    //jfree(a);
    //jfree(c);
    cout << "==new_b==";
    //jfree(b);
    cout << b_p << endl;
    cout << b_p->prev << endl;
    cout << b_p->next << endl;
    cout << b_p->isfree << endl;
    cout << b_p->size << endl;
    return 0;
}
