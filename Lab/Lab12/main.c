#include <stdio.h>
#include <string.h>

void Grade( int ) ;
float Average ( float , float , float , float , float ) ;

struct Student {
  char Name[20] ;
  char ID[5] ;
  float ScoreSub1 ;
  float ScoreSub2 ;
  float ScoreSub3 ;
  float ScoreSub4 ;
  float ScoreSub5 ;
} typedef S ;

int main() {
  S Students[ 3 ] ;

  printf( "Enter the details of 3 students :\n" ) ;

  for(int i = 0 ; i < 3 ; i++ ) {
    char FName[ 20 ] ;
    char LName[ 20 ] ;
    printf( "Student %d:\n" , i + 1 ) ;
    
    printf( "Name:\n" ) ;
    scanf( "%s" , FName ) ;
    scanf( "%s" , LName ) ;
    strcpy( Students[ i ].Name , FName ) ;
    strcat( Students[ i ].Name , " " ) ;
    strcat( Students[ i ].Name , LName );
    
    printf( "ID:\n") ;
    scanf( "%s" , Students[ i ].ID ) ;

    printf( "Score in Subject 1:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub1 ) ;

    printf( "Score in Subject 2:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub2 ) ;

    printf( "Score in Subject 3:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub3 ) ;

    printf( "Score in Subject 4:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub4 ) ;
  
    printf( "Score in Subject 5:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub5 ) ;
    printf( "\n" );
  }//end for

  for(int i = 0 ; i < 3 ; i++ ) {
    printf( "\nStudent %d:\nName: %s\nID: %s\nScores: %.0f %.0f %.0f %.0f %.0f\n",
      i + 1,
      Students[ i ].Name,
      Students[ i ].ID,
      Students[ i ].ScoreSub1,
      Students[ i ].ScoreSub2,
      Students[ i ].ScoreSub3,
      Students[ i ].ScoreSub4,
      Students[ i ].ScoreSub5
    );
    printf( "Grades: " );
    Grade( Students[ i ].ScoreSub1 ) ;
    Grade( Students[ i ].ScoreSub2 ) ;
    Grade( Students[ i ].ScoreSub3 ) ;
    Grade( Students[ i ].ScoreSub4 ) ;
    Grade( Students[ i ].ScoreSub5 ) ;
    printf( "\nAverage Scores: %.1f\n" , Average( Students[ i ].ScoreSub1 , Students[ i ].ScoreSub2 , Students[ i ].ScoreSub3 , Students[ i ].ScoreSub4 , Students[ i ].ScoreSub5 ) ) ;
  }//end for
}//end function

void Grade( int score ) {
  if( score >= 80 )
    printf( "A " ) ;
  else if( score < 80 && score >= 75 )
    printf( "B+ " ) ;
  else if( score < 75 && score >= 70 )
    printf( "B " ) ;
  else if( score < 70 && score >= 65 )
    printf( "C+ " ) ;
  else if( score < 65 && score >= 60 )
    printf( "C " ) ;
  else if( score < 60 && score >= 55 )
    printf( "D+ " ) ;
  else if( score < 55 && score >= 50 )
    printf( "D " ) ;
  else
    printf( "F " ) ;
}//end function

float Average( float s1 , float s2 , float s3 , float s4 , float s5 ) {
  return (s1 + s2 + s3 + s4 + s5) / 5 ;
}//end function
