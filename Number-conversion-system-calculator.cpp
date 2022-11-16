#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	string eN;
	eN='u';
	while(eN!="N")
	{
		char x;
		cout<<"\n\n\n\n\n\nWELCOME PLEASE ENTER [ Y ] TO START OR [N] TO STOP: ";
		
		cin>>eN;
		system("cls");
		if(eN=="Y"){
			cout<<"\t\t\tWELCOME TO BINARY CALCULATOR\n";
	cout<<"\t\t\t____________________________\n";
	cout<<"\t\t\t____________________________\n";
	cout<<"\n\t1.binary into decimal\n";
	cout<<"\t2.decimal into binary\n";
	cout<<"\t3.octel into binary\n";
	cout<<"\t4.binary into octel\n";
	cout<<"\t5.octel into decimal\n";
	cout<<"\t6.decimal into octel\n";
	cout<<"\t7.hexadecimal into decimal\n";
	cout<<"\t8.decimal into hexadecimal\n";
	cout<<"\t9.hexadeciml into binary\n";
	cout<<"\t10.Binary into Hexadecimal\n";
	cout<<"\t11.Hexadecimal into Octal\n";
	cout<<"\t12.octal into hexadecimal\n";
	cout<<"\n\tPLEASE CHOOSE ONE:";
	cin>>eN;
    system("cls");
	if(eN=="1")
	{
		int binnum, decnum=0, i=1, rem;
    cout<<"Enter any Binary Number: ";
    cin>>binnum;
    while(binnum!=0)
    {
        rem = binnum%10;
        decnum = decnum + (rem*i);
        i = i*2;
        binnum = binnum/10;
    }
    cout<<"\nEquivalent Decimal Value = "<<decnum;
    cout<<endl;
	}//ONE
	else if(eN=="2")
	{
		int decimalNum, binaryNum[20], i=0;
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        binaryNum[i] = decimalNum%2;
        i++;
        decimalNum = decimalNum/2;
    }
    cout<<"\nEquivalent Binary Value: ";
    for(i=(i-1); i>=0; i--)
        cout<<binaryNum[i];
    cout<<endl;
	}// end two
	else if(eN=="3")
	{
		 int octalNum, rev=0, rem, chk=0;
    char binaryNum[40] = "";
    cout<<"Enter the Octal Number: ";
    cin>>octalNum;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        if(rem>7)
        {
            chk++;
            break;
        }
        rev = (rev*10) + rem;
        octalNum = octalNum/10;
    }
    if(chk==0)
    {
        octalNum = rev;
        cout<<"\nEquivalent Binary Value: ";
        while(octalNum!=0)
        {
            rem = octalNum%10;
            switch(rem)
            {
                case 0: strcat(binaryNum, "000");
                    break;
                case 1: strcat(binaryNum, "001");
                    break;
                case 2: strcat(binaryNum, "010");
                    break;
                case 3: strcat(binaryNum, "011");
                    break;
                case 4: strcat(binaryNum, "100");
                    break;
                case 5: strcat(binaryNum, "101");
                    break;
                case 6: strcat(binaryNum, "110");
                    break;
                case 7: strcat(binaryNum, "111");
                    break;
            }
            octalNum = octalNum/10;
        }
        cout<<binaryNum;
    }
    else
        cout<<"\nInvalid Octal Digit!";
    cout<<endl;
	}//end three
	else if(eN=="4")
	{
	  long int binarynum, octalnum = 0, j = 1, remainder;
	  cout<<"Enter any Binary Number: ";
	  cin>>binarynum;
	  while (binarynum != 0)
	   {
	     remainder = binarynum % 10;
	     octalnum = octalnum + remainder * j;
	     j = j * 2;
	     binarynum = binarynum / 10;
	   }
	   cout<<"Equivalent octal value: " <<octalnum<<endl;
	}//end four
	else if(eN=="5")
	{
		int decimalNum, octalNum[50], i=0;
    cout<<"Enter any Decimal number: ";
    cin>>decimalNum;
    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
    cout<<"\nEquivalent Octal Value = ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
	}//edn ifve
	else if(eN=="6")
	{
		int octalNum, decimalNum=0, i=0, rem;
    cout<<"Enter the Octal Number: ";
    cin>>octalNum;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        decimalNum = decimalNum + (rem*pow(8,i));
        i++;
        octalNum = octalNum/10;
    }
    cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    cout<<endl;
	}//end six
	else if(eN=="7")
	{
		char num[20];
    int i, r, len, hex = 0;
    cout << "Enter a hexadecimal number : ";
    cin >> num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        hex += r * pow(16,len);
    }
    cout << "\nDecimal equivalent of " << num << " is : " << hex<<endl;
	}//end seven
	else if(eN=="8")
	{
	
    int decimalNum, rem, i=0;
    char hexaDecimalNum[50];
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        rem = decimalNum%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexaDecimalNum[i] = rem;
        i++;
        decimalNum = decimalNum/16;
    }
    cout<<"\nEquivalent Hexadecimal Value: ";
    for(i=i-1; i>=0; i--)
        cout<<hexaDecimalNum[i];
    cout<<endl;
	}//end eigth
	else if(eN=="9")
	{
		 int i=0;
    char hexDecNum[10];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    cout<<"\nEquivalent Binary Value = ";
    while(hexDecNum[i])
    {
        switch(hexDecNum[i])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ("<<hexDecNum[i]<<")--";
        }
        i++;
    }
    cout<<endl;
	}//end nine
	else if(eN=="10")
	{
	int binaryNum, hex=0, mul=1, chk=1, rem, i=0;
    char hexDecNum[20];
    cout<<"Enter any Binary Number: ";
    cin>>binaryNum;
    while(binaryNum!=0)
    {
        rem = binaryNum%10;
        hex = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binaryNum = binaryNum/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;
    cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<endl;
	}// end ten
	else if(eN=="11")
	{
		int decimalNum=0, octalNum[30], rem, i=0, len=0;
    char hexDecNum[10];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    while(hexDecNum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexDecNum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            return 0;
        }
        decimalNum = decimalNum + (rem*pow(16, i));
        len--;
        i++;
    }
    i=0;
    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
    cout<<"\nEquivalent Octal Value: ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
	}// end eleven
	else if(eN=="12")
	{
		int octalNum, rev=0, rem, chk=0, hex=0, mul=1, i=0, k=0;
    char binaryNum[40] = "", hexnum[40];
    cout<<"Enter any Octal Number: ";
    cin>>octalNum;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        if(rem>7)
        {
            chk++;
            break;
        }
        rev = (rev*10) + rem;
        octalNum = octalNum/10;
    }
    if(chk==0)
    {
        octalNum = rev;
        while(octalNum!=0)
        {
            rem = octalNum%10;
            switch(rem)
            {
                case 0: strcat(binaryNum, "000");
                    break;
                case 1: strcat(binaryNum, "001");
                    break;
                case 2: strcat(binaryNum, "010");
                    break;
                case 3: strcat(binaryNum, "011");
                    break;
                case 4: strcat(binaryNum, "100");
                    break;
                case 5: strcat(binaryNum, "101");
                    break;
                case 6: strcat(binaryNum, "110");
                    break;
                case 7: strcat(binaryNum, "111");
                    break;
            }
            octalNum = octalNum/10;
        }
        while(binaryNum[k]!='\0')
            k++;
        chk=1;
        k--;
        while(k>=0)
        {
            if(binaryNum[k]=='0')
                rem = 0;
            else
                rem = 1;
            hex = hex + (rem*mul);
            if(chk%4==0)
            {
                if(hex<10)
                    hexnum[i] = hex+48;
                else
                    hexnum[i] = hex+55;
                mul = 1;
                hex = 0;
                chk = 1;
                i++;
            }
            else
            {
                mul = mul*2;
                chk++;
            }
            k--;
        }
        if(chk!=1)
            hexnum[i] = hex+48;
        if(chk==1)
            i--;
        cout<<"\nEquivalent Hexadecimal Value = ";
        chk = 0;
        for(i=i; i>=0; i--)
        {
            if(hexnum[i]=='0' && chk==0)
            {
                chk++;
                continue;
            }
            else
                cout<<hexnum[i];
        }
    }
    else
        cout<<"\nInvalid Octal Digit "<<rem;
    cout<<endl;
	}// end twelve
	}//end
	

	}//END OF LOOP
 }

