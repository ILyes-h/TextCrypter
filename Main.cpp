/********************************************************************/
/** Tool For EnCryption & DecCryption *******************************/
/** Author : MisterPrice .                  *************************/
/** Purpose : Sharing Secure File / AntiSpy *************************/
/** How To Use : Enter The Original Text , AutoSave To A TXT File , */
/** Send You TXT File Named " SecureFile " To Your Partners , When **/
/** Received , Input The Size Of The TXT File , Output The Original */
/** Text .                                                          */
/** More Info In The Program , Please Follow Instructions .  Thanks */
/********************************************************************/


#include <iostream>
#include <fstream>
#include <windows.h>


using namespace std;


class Coder

{

private :

    int RandNumber [1000] = { 2,7,3,7,9,2,1,8,5,3,
                             1,3,8,5,9,9,3,5,2,6,
                             5,7,4,2,9,7,6,5,5,4,
                             9,6,4,3,4,6,2,2,1,8,
                             3,4,8,6,5,9,3,2,2,1,
                             4,6,8,2,9,3,6,3,2,8,
                             4,6,9,2,3,5,5,8,8,4,
                             5,4,3,6,8,8,9,9,1,2,
                             4,6,8,8,9,9,4,3,2,1,
                             9,8,7,6,8,7,6,5,1,1,
                             6,0,8,4,1,4,2,6,3,6,
                             0,0,1,7,0,4,6,0,6,6,
                             4,5,8,3,7,5,6,5,8,3,
                             7,2,3,5,5,7,4,0,9,4,
                             8,1,6,9,7,5,1,9,6,6,
                             2,5,7,3,8,2,2,5,6,5,
                             8,0,9,4,5,2,0,0,0,9,
                             0,9,9,2,7,4,1,4,8,8,
                             2,6,6,5,2,1,6,6,2,8,
                             3,2,3,0,2,1,4,1,3,4,
                             1,2,1,1,0,9,0,3,2,7,
                             3,8,8,7,4,7,0,5,1,2,
                             7,2,6,2,5,5,9,0,9,8,
                             0,1,3,9,1,3,4,4,3,8,
                             2,0,4,2,5,5,1,8,2,7,
                             7,6,5,7,4,7,7,2,9,5,
                             0,5,8,8,0,7,4,7,0,4,
                             3,7,1,5,2,7,4,6,3,4,
                             9,0,5,6,5,0,7,4,7,6,
                             4,7,6,8,0,8,1,6,4,1,
                             8,6,3,6,5,7,8,3,9,8,
                             3,7,0,0,4,1,4,1,1,4,
                             9,9,6,5,6,1,6,2,0,1,
                             6,5,4,9,5,5,4,7,9,6,
                             6,8,1,5,6,2,1,4,5,4,
                             6,6,0,8,7,0,4,7,4,6,
                             6,0,1,0,2,7,1,8,2,8,
                             5,4,1,9,1,3,4,0,9,7,
                             5,6,7,4,5,4,0,5,5,6,
                             0,3,0,2,6,6,1,7,1,5,
                             8,0,0,5,3,1,1,9,1,6,
                             7,8,1,5,2,5,8,2,9,1,
                             9,3,7,0,1,1,3,8,3,3,
                             9,9,3,2,8,5,7,6,7,7,
                             8,7,3,9,4,3,3,9,8,6,
                             1,4,0,9,9,4,7,7,5,6,
                             3,4,7,2,6,0,8,7,0,9,
                             2,7,0,6,4,9,5,7,2,2,
                             7,0,0,2,3,6,7,2,7,6,
                             5,6,3,5,3,8,8,7,4,8,
                             5,5,2,0,6,2,8,1,2,4,
                             3,3,2,5,6,5,0,3,0,7,
                             6,0,7,9,6,8,3,6,7,6,
                             0,4,1,6,3,9,3,2,9,1,
                             6,3,2,0,8,8,3,0,8,5,
                             8,0,9,7,3,3,3,2,5,8,
                             6,5,2,1,7,3,7,6,6,4,
                             7,9,3,0,6,1,4,6,7,4,
                             4,9,3,7,4,3,5,6,3,9,
                             1,9,4,3,8,9,9,3,2,3,
                             8,8,0,8,4,0,5,7,3,4,
                             6,3,3,3,9,8,3,0,7,9,
                             5,4,4,1,4,5,8,9,4,4,
                             4,8,5,7,0,0,9,4,6,6,
                             3,8,4,1,6,9,2,8,0,0,
                             2,0,9,4,4,2,1,3,2,4,
                             6,7,3,4,6,4,8,5,9,0,
                             4,8,5,4,8,0,6,4,1,9,
                             5,0,9,1,2,1,9,1,8,0,
                             5,9,3,5,8,6,6,2,0,8,
                             7,7,7,2,9,5,6,1,4,5,
                             3,5,1,1,8,1,8,0,1,0,
                             8,2,7,1,4,8,3,0,2,1,
                             9,3,5,7,9,0,2,0,5,4,
                             4,3,8,1,8,4,2,2,3,4,
                             6,9,0,8,6,9,6,3,9,4,
                             9,7,6,0,4,6,7,1,2,7,
                             2,7,3,0,9,8,5,1,9,3,
                             2,5,6,7,7,9,8,4,7,2,
                             4,2,8,8,7,4,6,5,6,7,
                             8,1,3,7,0,7,8,8,8,3,
                             1,8,0,4,9,5,7,1,1,3,
                             0,8,1,7,0,0,0,6,1,0,
                             9,8,6,5,9,8,2,9,7,1,
                             9,5,3,0,2,9,3,9,5,4,
                             8,9,6,7,9,5,3,3,4,6,
                             4,1,1,2,8,1,7,1,5,7,
                             6,0,0,8,7,6,5,0,8,1,
                             8,7,3,6,2,6,7,6,2,4,
                             7,6,5,6,1,1,4,4,9,6,
                             8,1,9,8,8,8,8,7,3,3,
                             3,8,6,4,8,2,4,4,9,5,
                             6,9,4,8,7,1,1,2,4,9,
                             2,3,3,3,5,5,0,7,4,7,
                             6,0,8,8,7,4,2,8,8,7,
                             6,8,7,7,6,9,6,5,7,7,
                             9,6,8,5,6,6,3,7,0,2,
                             3,5,1,2,8,0,7,9,8,9,
                             7,4,6,3,4,9,0,5,6,5,
                             7,4,6,3,4,9,0,5,6,3
                             } ;   // Random Array For The Algorithm .

    char OriginalText [ 1000 ] ;   // Standard Size
    char EncryptedText [ 1000 ] ;  // For All Variables .
    int AsciiChanger [ 1000 ] ;    // [ Can Make More ];
    /************************************************************/
    int Counter ;                  //  For The Encryption Screen Display .
    /************************************************************/
    char FilePath [50];     // SecureFile Path ( Decrypt ) .
    char Path [100];        // SecureFile Path ( Encrypt ) .

     char Encryption ;      // To Store Characters Given By The SecureFile .
     char OriginalTxT ;
     int  Ascii_Changer ;
     int size;              // To Make A Precise Decryption Characters .
     string Secret_Key;     // For The PWD / KEY .



public:

    void EncryptionData () ;   // Encryption Instructions .
    int  DecryptionData () ;   // Decryption Instructions .

    int Option ;               // User Options .

};


int main ()

{

    cout << " /**********************************************************/ \n"
         << "      /**********************************************/        \n"
         << "      /**********************************************/        \n"
         << "      /*****          W e l c o m e             *****/        \n"
         << "      /**********************************************/        \n"
         << "      /**********************************************/        \n"
         << " /**********************************************************/ \n"
         << "\n\n _ Encryption [ 1 ] . \n \n _ Decryption [ 2 ] . \n\n _ Exit [ 3 ] . \n\n   "
         << " >> ";

    Coder Object;

      cin >> Object.Option ;

       if ( Object.Option == 1 )
       {
           system("cls");
         Object.EncryptionData () ;
       }

       if ( Object.Option == 2 )

       {
          system ("cls");
          Object.DecryptionData () ;
       }

       if ( Object.Option == 3 )
       {
           cout << " \n\n Thank You For Using TextCrypter .\n\n" ;
           return 0;
       }

       else

       {
           system ("cls");
           return main () ;
       }

}


void Coder::EncryptionData ()

{

    /**********************************************/
    /**********************************************/
    /*****         Encryption Part            *****/
    /**********************************************/
    /**********************************************/

    cout << " Enter Path & FileName To Save In : " ;

    cin >> Path ;

    ofstream file ( Path );   // Make The TXT File On The Chosen Path. [ in this case I used My DeskTop
                                                                // As A Path , But I have To Change IT For Users .

    cout << " Enter The Text : [ Use ' _ ' For Space || Use ' @ ' To Quit ] .\n";

    for ( int i=0 ; i<1000 ; i++ )                              // Loop For 1000 Character .

    {

        cin >> OriginalText [i] ;

        if ( OriginalText [i] == '@' )     // Stop Receiving Characters  ( Condition ) .
            break;

        Counter = i ;                      // Take The Value Of ' i ' When ' Break ' .


     /********************************************/
                     /** First Algo I Used ' Easy To Discover ' **/
                     /**                                        **/
        /********************************************************************/
        /** Very Simple Algorithm To Change Character Ascii Code [ Add 5 ] **/
        /** Then Change The New Ascii To Another Deferent Character        **/
        /********************************************************************

        AsciiChanger [i] = OriginalText [i] + 5 ;
        EncryptedText [i] = AsciiChanger [i] ;


                     /********************************************/
                     /** Second Algo I Used ' More Powerful '   **/
        /**********************************************************************/
        /** Creating A Random Array Numbers And Add The First Element Of The **/
        /** OriginalText To The First Element In The RandNumber To Have A    **/
        /** Random ASCII Code Each Time .                                    **/
        /**********************************************************************/

        AsciiChanger [i] = OriginalText [i] + RandNumber [i] ;
        EncryptedText [i] = AsciiChanger [i] ;

            file << EncryptedText [i] ;          // Write Data On File .
    }

     cout << " \nEncrypted Text : ";       // Output The Encryption In The Screen .

     for (int i = 0 ; i< Counter ; i++ )
     {
         cout << EncryptedText [i] ;
     }


           cout << "\n\n" ;

             system("pause");
             system("cls");
}


int Coder::DecryptionData ()

{

     cout << " Enter The Secret Key : ";     // Check The Key .
        cin  >> Secret_Key;

        if ( Secret_Key == "napster" || Secret_Key == "NAPSTER" )
        {

        while (true) {

    /**********************************************/
    /**********************************************/
    /*****         Decryption Part            *****/
    /**********************************************/
    /**********************************************/

     char FilePath [50];    // File Path .

     cout << " Enter SecureFile.txt Path : " ; cin >> FilePath ;

     ifstream File ( FilePath );

     cout <<" Enter The Size Of File : " ; cin >> size; // Receive The Size For An Exact Number Of Outputs .

     system ("cls") ;

     cout << "/*******************************/\n"
          << "/*******************************/\n"
          << "/****** Decrypted Message ******/\n"
          << "/*******************************/\n"
          << "/*******************************/\n" ;

     cout << "\n\n >>  " ;



    for ( int i = 0; i < size ; i++ )

    {

     File.get(Encryption);    // Read Data From File .

     /************************************************/
     /**  The Reversed Algorithm                     */
     /** For The Second Algorithm .                  */
     /************************************************/

     Ascii_Changer = Encryption - RandNumber [i] ;
     OriginalTxT = Ascii_Changer ;

     /************************************************/


          cout<< OriginalTxT ;

           if( OriginalTxT == '_' )  // I Used " \b " To Replace

            {  cout<<"\b"<<" "; }    //The Character " _ " With Normal Space  . //



               }

               cout << "\n" ;

                                      system("pause");
                                      system("cls");
                                      return main(); }


      }


    else {
            cout << " Access Denied ! \n " ;
                   system ("pause");
                   system ("cls");
                   return main(); }

}






