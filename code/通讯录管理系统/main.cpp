//
// Created by ycl on 2022/7/27.
//


#include <iostream>
using namespace std;

// 函数原型
void showMenu(void);

// 主程序
int main()
{
    // 显示菜单
    showMenu();

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
   cout << "0、添加联系人" << endl;

}