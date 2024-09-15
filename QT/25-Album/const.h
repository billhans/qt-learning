#ifndef CONST_H
#define CONST_H

/******************************************************************************
 *
 * @file       const.h
 * @brief      const data Function
 *
 * @author     bhhh
 * @date       2024/07/30
 * @history
 *****************************************************************************/

enum TreeItemType{
    TreeItemPro = 1, //表示项目的条目
    TreeItemDir = 2, //表示项目的文件夹
    TreeItemPic = 3, //表示项目的图片
};

enum PicBtnState {
    PicBtnStateNormal = 1,
    PicBtnStateHover = 2,
    PicBtnStatePress = 3,
    PicBtnState2Normal = 4,
    PicBtnState2Hover = 5,
    PicBtnState2Press = 6,
};


const int PROGRESS_WIDTH = 300;
const int PROGRESS_MAX = 300;
const int PREITEM_SIZE = 100;
const int PREICON_SIZE = 90;
const int MAX_SCREEN_WIDTH = 1900;



#endif // CONST_H
