//
//  ZCMenuTableViewCell.h
//  ZCTabPopMenuDemo
//
//  Created by 冯文秀 on 16/12/7.
//  Copyright © 2016年 曹檑. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZCMenuTableViewCell : UITableViewCell
@property (nonatomic, strong) UILabel *hintLabel;
@property (nonatomic, strong) UIView *screenBgView;

- (void)configreSubScreenCell:(NSString *)screenStr isSelected:(BOOL)isSelected;

- (void)configreSubScreenCell:(NSString *)screenStr;
@end
