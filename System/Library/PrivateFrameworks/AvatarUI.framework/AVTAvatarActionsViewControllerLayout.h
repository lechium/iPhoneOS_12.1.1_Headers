/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarActionsViewControllerLayout.h>

@protocol AVTViewLayoutInfo;
@interface AVTAvatarActionsViewControllerLayout : NSObject <AVTAvatarActionsViewControllerLayout> {

	long long _buttonCount;
	id<AVTViewLayoutInfo> _avtViewLayout;
	CGSize _containerSize;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) CGSize containerSize;                             //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                          //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) long long buttonCount;                            //@synthesize buttonCount=_buttonCount - In the implementation block
@property (nonatomic,readonly) double actionButtonsViewAlpha; 
@property (nonatomic,readonly) CGRect actionButtonsViewFrame; 
@property (nonatomic,readonly) CGRect avatarContainerViewFrame; 
@property (nonatomic,readonly) CGRect userInfoFrame; 
@property (nonatomic,readonly) id<AVTViewLayoutInfo> avtViewLayout;              //@synthesize avtViewLayout=_avtViewLayout - In the implementation block
+(double)heightForButtonsViewWithButtonCount:(long long)arg1 ;
+(double)buttonHeight;
-(CGSize)containerSize;
-(CGRect)userInfoFrame;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 buttonCount:(long long)arg3 avtViewLayoutInfo:(id)arg4 ;
-(double)actionButtonsViewAlpha;
-(CGRect)avatarContainerViewFrame;
-(id<AVTViewLayoutInfo>)avtViewLayout;
-(CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1 ;
-(CGRect)actionButtonsViewFrame;
-(long long)buttonCount;
-(UIEdgeInsets)edgeInsets;
@end

