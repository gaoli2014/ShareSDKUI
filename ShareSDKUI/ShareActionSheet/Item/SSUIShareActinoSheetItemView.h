//
//  SSUIShareActinoSheetItemView.h
//  ShareSDKUI
//
//  Created by 刘靖煌 on 15/7/15.
//  Copyright (c) 2015年 mob. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SSUITypeDef.h"
#import "SSUIShareActionSheetItem.h"

@interface SSUIShareActinoSheetItemView : UIView

@property (nonatomic) NSInteger index;
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UIButton *platformIcon;

@property (nonatomic, copy) SSUIShareActionSheetItemClickHandler clickHandle;
@property (nonatomic, copy) SSUIShareActionSheetCancelHandler cancelHandle;

-(instancetype)initWithItem:(SSUIShareActionSheetItem *)item index:(NSInteger)index;

@end