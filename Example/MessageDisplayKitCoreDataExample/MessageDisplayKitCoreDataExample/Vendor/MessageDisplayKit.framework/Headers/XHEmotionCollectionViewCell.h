//
//  XHEmotionCollectionViewCell.h
//  MessageDisplayExample
//
//  Created by HUAJIE-1 on 14-5-3.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XHEmotion.h"

#define kXHEmotionCollectionViewCellIdentifier @"XHEmotionCollectionViewCellIdentifier"

@interface XHEmotionCollectionViewCell : UICollectionViewCell

/**
 *  需要显示和配置的gif表情对象
 */
@property (nonatomic, strong) XHEmotion *emotion;

@end
