int main()
{
    int aux, num=479001599, div=0;

    for(aux=2 ; aux<=num/2 ; aux++){
        if(num%aux==0){
            div++;
        }

    if(div==0){
            cout << "� primo" << endl;

    }

    else{
        cout <<"N�o � primo"<<endl;
    }
    }
    return 0;
}
