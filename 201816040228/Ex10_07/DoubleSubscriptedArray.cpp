#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int row,int column)//构造函数，根据数组下标初始数组数值为0
 : Row( row >0 ? row : 3),
   Column( column >0 ? column :5),
   ptr( new int(Row*Column))
{
    for( int i=0;i<Row*Column;i++)
    {
        ptr[i]=0;
    }
}
DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &arrayToCopy )
 : Row( arrayToCopy.Row ),
   Column( arrayToCopy.Column ),
   ptr( new int(Row*Column))
{
    for( int i=0;i<Row*Column;i++)
    {
        ptr[i]=arrayToCopy.ptr[i];
    }
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()//释放内存
{
    delete [] ptr;
}
int DoubleSubscriptedArray::getRow() const
{
    return Row;
}//结束

int DoubleSubscriptedArray::getColumn() const
{
    return Column;
}//结束

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &right )
{
    if( &right != this )//aviod self-assignment
    {
        if( Row != right.Row || Column != right.Column)//for Arrays of diffirent sizes,deallocate original
            //left -side DoubleSubscriptedArray,then allocate new left-side DoubleSubscriptedArray
        {
            delete [] ptr;//释放空间
            Row=right.Row;
            Column=right.Column;
            ptr=new int[Row*Column];
        }
        for(int i=0;i<Row*Column;i++)
            ptr[i]=right.ptr[i];
    }
    return *this;
}//结束

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right) const
{
    if( Row != right.Row || Column != right.Column)
    {
        return false;
    }
    for(int i=0;i<Row*Column;i++)
        if(ptr[i]!=right.ptr[i])
            return false;

    return true;//DoubleSubscriptedArray are equal
}

int DoubleSubscriptedArray::operator()(int row,int column) const
{
    if(row>Row||Column<column)
    {
        cout << "out of range" << endl;
    }
    else
    {
         return ptr[Column*row+column - Column-1];//返回下标对应的值
    }
}

int &DoubleSubscriptedArray::operator()(int row,int column)
{
    if(Row<row||Column<column)
    {
         cout << "out of range" << endl;
    }
    else
    {
        return ptr[row*Column+column-Column-1];//reference return
    }
}
istream &operator>>( istream &input, DoubleSubscriptedArray &a)
{
   for(int i=0;i<a.Row*a.Column;i++)
   {
       input>> a.ptr[i];
   }
   return input;
}
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a)
{
   for(int i=0;i<a.Row*a.Column;i++)
   {
       output<<setw(12)<< a.ptr[i];
       if((i+1)%(a.Column)==0)
       {
           output << endl;
       }
   }//end for
       if(((a.Row)*(a.Column))%(a.Column)!=0)
       {
           output<<endl;
       }
   return output;
}
