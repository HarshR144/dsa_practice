#include <iostream>

using namespace std;

class arrays{
    private:
        int size =0;
        int length =0;
        int *p;
    public:
        arrays(int a);
        ~arrays(){
            delete []p;
        }
        void fill(int x);
        void display();
        void append(int b);
        void insert(int position, int element); 
        void delete_element(int index_position);
        int Linear_search(int element);
        int Transposition_Linear_search(int element);
        int move_to_head_Linear_search(int element);
        int binary_search(int element);
        int get(int index);
        void set(int index, int element);
        int max();
        int min();
        int sum();
        int avg();
        void insert_sort(int element);
        bool is_sorted_or_not();
};

arrays::arrays(int a){
    size = a;
    p =new int[size];
}

void arrays::display()
{
    for(size_t i =0 ; i<length ; i++){
        cout<<p[i]<<" ";
    }
    cout<<"\n";

}

void arrays::append(int b){
 if(!(length==size))
{   
    p[length]=b;
    length++;
}
else
cout<<"Operation not valid"<<endl;
}

void arrays::insert(int index_position, int element){
    for (size_t i = length; i > index_position; i--)
    {
        p[i] = p[i-1];
    }
    p[index_position] = element;
    length++;
    cout<<"Inserted element "<<element<<" at index position "
        <<index_position<<endl;
}

 
void arrays::delete_element(int index_position)
{ int x= p[index_position];
    for (size_t i = index_position; i < length-1; i++)
    {
        p[i]=p[i+1];
    }

    length--;
}
void arrays::fill(int x){
    for (size_t i = 0; i < x ; i++)
    {   int element;
        cout<<"Enter Element "<<i+1<<": ";
        cin>>element;
        p[i]=element;
    }
    
}
int arrays::Linear_search(int element){
    
    for (size_t i = 0 ; i < length; i++)
    {
        if (p[i] == element)
        {
            cout<<"Element found at position: "<< i << endl;
            return i;
        }
        
    }
    return -1;
}

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b= temp;

}
int arrays::Transposition_Linear_search(int element){
    
    for (size_t i = 0 ; i < length; i++)
    {
        if (p[i] == element)
        {
         swap(p[i],p[i-1]);  
            return i-1;
        }
        
    }
    return -1;
}
int arrays::move_to_head_Linear_search(int element){
    
    for (size_t i = 0 ; i < length; i++)
    {
        if (p[i] == element)
        {
         swap(p[i],p[0]);  
            return i-1;
        }
        
    }
    return -1;
}



    int arrays::binary_search(int element){
        int l = 0;
        int h = length -1;
        int mid = ((l + h)/2);

        while (l <= h){
            if (p[mid] == element)
                return mid;
            
            else if (p[mid] < element)
            {
                l = mid + 1;
            }
            
            else if (p[mid] > element)
            {
                h = mid -1;
            }
            
        }
        return -1;
    }

int arrays::get(int index){
    if (index >= 0 && index <length){
        return p[index];
    }
    else{return -1;}
}

void arrays::set(int index, int element){
    if (index >= 0 && index <length){
        p[index] = element;
    }
    else
        cout<<"Error index out of range.";
}


int arrays::max(){
    int m = p[0];
    for (size_t i = 1; i < length; i++)
    {
        if (p[i]>m){
            m = p[i];
        }
    }
    return m;
}

int arrays::min(){
    int m = p[0];
    for (size_t i = 1; i < length; i++)
    {
        if (p[i] < m){
            m = p[i];
        }
    }
    return m;
}

int arrays::sum(){
    int total = 0;
    for (size_t i = 0 ;i < length; i++)
    {
        total+=p[i];
    }
    return total;
}

int arrays::avg(){
    int total = 0;
    for (size_t i = 0; i < length; i++)
    {
        total+=p[i];
    }
    return total/length;
}

void arrays::insert_sort(int element){
    int i = length -1;
    while(p[i] > element){
        p[i+1] = p[i];
        i--;
    }
    p[i+1] = element;
}
bool arrays::is_sorted_or_not(){

    for (size_t i = 1; i < length; i++)
    {   
        
        if(p[i] < p[i-1]){
            return false;
        }

      
    }
    return true;
}

int main(){
    int size =10;
    arrays array(10);
    // array.fill(7);
    array.append(1);
    array.append(2);
    array.append(4);
    array.append(5);
    array.append(3);
    
    array.display();
    array.insert(2,100);
    array.display();
    array.delete_element(2);
    array.display();  
   
   
    arrays arr2(3);
    arr2.append(100);
    arr2.append(200);
    arr2.insert(1,60);
    arr2.display();
    array.display(); 
}