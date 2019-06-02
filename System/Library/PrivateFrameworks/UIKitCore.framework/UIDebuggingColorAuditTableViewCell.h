/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView, NSLayoutConstraint, NSString, UIColor;

@interface UIDebuggingColorAuditTableViewCell : UITableViewCell {

	UIView* colorView;
	NSLayoutConstraint* heightConstraint;
	BOOL _expanded;
	NSString* _symbol;
	UIColor* _color;

}

@property (nonatomic,copy) NSString * symbol;              //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL expanded;                //@synthesize expanded=_expanded - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
@end

