int adiff(int a, int b){
    while(a > 360){
        a -= 360;
    }
    while(b > 360){
        b -= 360;
    }
    while(a < -360){
        a += 360;
    }
    while(b < -360){
        b += 360;
    }
    
    int c;
    if(a>b){
        c = a-b;
    }else{
        c = b-a;
    }
    
    if(c > 180){
        c = 360-c;
    }
    return c;
    
}