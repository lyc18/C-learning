//
// Created by ycl on 2022/7/27.
//


#include <iostream>
#include <cstring>
using namespace std;

//常量定义
#define MAX 1000 // 最大人数

// 函数原型
// 显示菜单
void showMenu(void);

// 结构体
// 联系人结构体
struct Person
{
    string m_Name; //姓名
    int m_Sex; // 性别：1:男，2:女
    int m_Age; // 年龄
    string m_Phone; // 电话
    string m_Addr; // 住址
};

// 通讯录结构体
struct Addressbooks
{
    struct Person personArray[MAX]; // 通讯录中保存的联系人数组
    int m_Size; // 通讯录中人员个数
};

// 主程序
int main()
{
    int select = 0; //创建用户选择输入的变量

    while (true)
    {
         // 显示菜单
        showMenu();

        // 获取用户输入
        cin >> select;

        // 根据用户输入判断实现功能
        switch (select)
        {
        case 1: // 添加联系人
            
            break;
        case 2: // 显示联系人
            
            break;
        case 3: // 删除联系人
            
            break;
        case 4: // 查找联系人
            
            break;
        case 5: // 修改联系人
            
            break;
        case 6: // 清空联系人
            
            break;
        case 0: //
            cout << "感谢使用！" << endl;
            return 0;
            break;
        
        default:
            break;
        }
    }
    
   
    return 0;
}


// 菜单界面
void showMenu()
{
   cout << "1、添加联系人" << endl;
   cout << "2、显示联系人" << endl;
   cout << "3、删除联系人" << endl;
   cout << "4、查找联系人" << endl;
   cout << "5、修改联系人" << endl;
   cout << "6、清空联系人" << endl;
   cout << "0、退出通讯录" << endl;
   cout << "请选择功能..." << endl;
}

// 添加联系人
void addContact()
{
    
}