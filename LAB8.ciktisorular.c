//1.
//#include <stdio.h>
//enum day{sunday =1,tuesday,wednesday,thursday,friday,saturday};
//
//int main()
//{
//	enum day d=thursday;
//	printf("The day number stored in d is %d",d);
//	return 0;
//}

//2.
//#include <stdio.h>
//enum State {WORKING = 0,FAILED,FREEZED};
//enum State currState = 2;
//
//enum State FindState(){
//	return currState;
//}
//
//int main(){
//	(FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");
//	return 0;
//}
//3.
//#include <stdio.h>
//main()
//{
//	enum result {pass,fail};
//	enum result s1,s2;
//	s1=pass;
//	s2=fail;
//	printf("%d",s1);
//}
//4.
//#include <stdio.h>
//enum example {a=1,b,c};
//enum example example1 = 2;
//enum example answer()
//{
//	return example1;
//}
//int main()
//{
//	(answer()==a)? printf("yes"): printf("no");
//	return 0;
//}
//5.
//#include <stdio.h>
//#define MAX 4
//enum sanfoundry
//{
//	a,b=3,c
//};
//main()
//{
//	if(MAX!=c){
//		printf("hello");
//	}
//	else{
//		printf("welcome");
//	}
//}

//6
//#include <stdio.h>
//enum sanfoundry
//{
//	a,b,c
//};
//enum sanfoundry g;
//main()
//{
//	g++;
//	printf("%d",g);
//}

//7.

//Hatali
//#include <stdio.h>
//
//enum day
//{
//	a,b,c=5,d,e
//};
//main()
//{
//	printf("Enter the value for a");
//	scanf("%d",a);
//	printf("%d",a);
//}

//8.
//#include <stdio.h>
//enum sanfoundry
//{
//	c =0,
//	d=10,
//	h=20,
//	s=3,
//}a;
//
//int main()
//{
//	a = c;
//	printf("Size of enum variable = %d bytes",sizeof(a));
//	return 0;
//}

//9.
//#include <stdio.h>
//enum sunfoundry
//{
//	a=1,b,c,d,e
//};
//int main()
//{
//	printf("%d",b*c+e-d);
//}

//10 hatali
//#include <stdio.h>
//enum sunfoundry
//{
//	a,b,c=5
//};
//int main()
//{
//	enum sunfoundry s;
//	b=10;
//	printf("%d",b);
//}

//11.
//#include <stdio.h>
//enum sanfoundry
//{
//	a=1,b
//};
//
//enum sanfoundry1
//{
//	c,d
//};
//int main()
//{
//	enum sanfoundry1 s1=c;
//	enum sanfoundry1 s=a;
//	enum sanfoundry s2=d;
//	printf("%d",s);
//	printf("%d",s1);
//	printf("%d",s2);
//}
