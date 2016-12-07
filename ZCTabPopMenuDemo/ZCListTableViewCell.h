//
//  ZCListTableViewCell.h
//  ZCTabPopMenuDemo
//
//  Created by 冯文秀 on 16/12/7.
//  Copyright © 2016年 曹檑. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZCListTableViewCell : UITableViewCell
@property (nonatomic, strong) UIImageView *picImgView;
@property (nonatomic, strong) UILabel *orderNoLab;
@property (nonatomic, strong) UILabel *receiveLab;
@property (nonatomic, strong) UILabel *ordersLabel;
@property (nonatomic, strong) UILabel *orderStatuaLab;
@property (nonatomic, strong) UIImageView *enterImgView;
// 订单列表 返回cell
- (void)configureOrderFormCell;

@end
