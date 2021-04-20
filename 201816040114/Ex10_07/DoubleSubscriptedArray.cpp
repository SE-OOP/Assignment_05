#include "DoubleSubscriptedArray.h"

DoubleSubscriptedArray::DoubleSubscriptedArray( int row, int column)
:rows(row),columns(column),size1(row),size2(column)
{

}

int chess::operator()(int a,int b)
{
    return chessBoard[a][b];
}

ostream & operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
   int i,j;
   for (i=0;i<a.size1;i++)
   {
       for(j=0;j<a.size2;j++)
       {
           output<<a.ptr[i][j]<<" ";
       }
       output<<endl;
   }
   return output;
}
istream &operator>>(istream &input ,DoubleSubscriptedArray &a)
{
    int i,j;
   for (i=0;i<a.size1;i++)
   {
       for(j=0;j<a.size2;j++)
       {
           input>>a.ptr[i][j];
       }
   }
   return input;
}
