//
//  GCZTapImageView.h
//  TravelApp
//
//  Created by SZT on 15/12/17.
//  Copyright © 2015年 SZT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GCZTapImageView : UIImageView

- (instancetype)initWithFrame:(CGRect)frame delegate:(id)delegate action:(SEL)action;

@end
