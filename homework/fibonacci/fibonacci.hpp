#pragma once

int fibonacci_iterative(int sequence) {
    int a = 0;
    int b = 1;
    if(sequence==0){
        return 0;
    }
    else if(sequence==1){
        return 1;
    }
    int next = 0;
    for(int i = 2; i <= sequence; i++){
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}


int fibonacci_recursive(int sequence) {
    if(sequence==0){
        return 0;
    }
    else if(sequence==1){
        return 1;
    }
    else{
        return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
    }
}
