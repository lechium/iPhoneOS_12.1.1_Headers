/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface UITableViewCellContentMirror : UIView {

	unsigned _selected : 1;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)cell;
@end
