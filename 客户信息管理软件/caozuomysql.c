//#include<stdio.h>
//#include<windows.h>
//#include<sql.h>
//#include<sqlext.h>
//#include<sqltypes.h>
//#include<string.h>
//#pragma coment(lib, "C:\\Windows\\system32\\odbc32.dll")
//#define false 0
//#define true 1
//#define CON_STR_LEN 255
//#define SQL_QUERY_BUFF_SIZE 512
//
//int InitConnect(void);
//int caozuomysql()
//{
//	//    SQLHENV   hEnv = 0;
//	//    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, & hEnv);
//	printf("hello world!\n");
//	InitConnect();
//	return 0;
//}
//
//
//int InitConnect(void)
//{
//	SQLHENV   hEnv = 0;
//	SQLHDBC   hDBC = 0;
//	SQLHSTMT  hStmt = 0;
//	SQLRETURN retcode;
//	SQLCHAR   szConStr[CON_STR_LEN];
//	SQLCHAR   szStmt[SQL_QUERY_BUFF_SIZE];
//	INT16     cbConLen;
//
//	// ���价�����  
//	retcode = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
//	if (retcode != SQL_SUCCESS)
//	{
//		printf("00SQLAllocHandle error!");
//		return -1;
//	}
//
//
//	// ���û������  
//	retcode = SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (void *)SQL_OV_ODBC3, 0);
//
//	if (retcode != SQL_SUCCESS)
//	{
//		printf("11SQLSetEnvAttr error!");
//		return -2;
//	}
//
//	// �������Ӿ��
//	retcode = SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDBC);
//	printf("%hd", retcode);
//	if (retcode != SQL_SUCCESS && retcode != SQL_SUCCESS_WITH_INFO)
//	{
//		printf("22SQLAllocHandle error!");
//		return -3;
//	}
//
//	//����mysql32 �����������Դ���ƣ� root���û�����123456�����룬��Ҫ�޸ĳ��Լ���
//	retcode = SQLConnect(hDBC, (SQLCHAR *)"zzz", SQL_NTS, (SQLCHAR *)"root",
//		SQL_NTS, (SQLCHAR *)"z123", SQL_NTS);
//
//	printf("%hd", retcode);
//	if (retcode != SQL_SUCCESS && retcode != SQL_SUCCESS_WITH_INFO)
//	{
//		printf("SQLConnect error!");
//		return -4;
//	}
//}
