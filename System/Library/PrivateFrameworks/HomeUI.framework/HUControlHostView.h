/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface HUControlHostView : UIView {

	BOOL _requiresWellDefinedSize;
	UIView* _controlView;
	NSArray* _controlConstraints;

}

@property (nonatomic,retain) NSArray * controlConstraints;              //@synthesize controlConstraints=_controlConstraints - In the implementation block
@property (assign,nonatomic) BOOL requiresWellDefinedSize;              //@synthesize requiresWellDefinedSize=_requiresWellDefinedSize - In the implementation block
@property (nonatomic,retain) UIView * controlView;                      //@synthesize controlView=_controlView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setControlView:(UIView *)arg1 ;
-(id)initWithControlView:(id)arg1 ;
-(void)setRequiresWellDefinedSize:(BOOL)arg1 ;
-(NSArray *)controlConstraints;
-(void)setControlConstraints:(NSArray *)arg1 ;
-(BOOL)requiresWellDefinedSize;
-(void)updateConstraints;
-(UIView *)controlView;
@end
