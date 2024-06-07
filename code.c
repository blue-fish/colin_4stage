#incldue<stdio.h>
int main()
{

const char* p = "abcd";
	// p[1] = B; error:P是常量指针，指向的内容不能被修改
	p = "4567";
	cout << p << endl;//输出内容
	cout << (void*)p << endl;//输出地址
	char arr[] = "defg";
	// arr="1234"  error: arr 指向字符串数组的首地址，不能被修改
	strcpy_s(arr, p);
	cout << strcmp(arr, p) << endl;
	//--------------------------------------------
	string str = "qwer";
	str[1] = 'N';
	str = "uvw";
	if (str == arr)
		cout << "相等" << endl;
	else
	{
		cout << "不相等" << endl;
	}
	str = arr;
	if (str == arr)
		cout << "相等" << endl;
	else
	{
		cout << "不相等" << endl;
	}
	//strcat_s
	str = str + p + arr + "999";
	cout << str << endl;
	cout << str.substr(2, 4) << endl;//截取选中字段
	cout << str.substr(2, 40) << endl;//保留有效字段长度
	//  cout << str.substr(200, 4) << endl;  非法了，下标越界
	//int* pp;
	//strlen((const char*)str);  strlen is not safe enough,by comprasion, c++(str.strlen) is still safer

	cout << str.c_str() << endl;
	cout << strlen(str.c_str()) << endl;

	return 0;

}
