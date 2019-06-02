/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacement <NSSecureCoding> {

	UIInputViewSetPlacement* _actualPlacement;

}
+(BOOL)supportsSecureCoding;
+(id)placementWithPlacement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInteractive;
-(double)alpha;
-(BOOL)showsInputViews;
-(BOOL)isUndocked;
-(BOOL)inputViewWillAppear;
-(BOOL)showsKeyboard;
-(void)setDirty;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned long long)notificationsForTransitionToPlacement:(id)arg1 ;
-(BOOL)accessoryViewWillAppear;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
@end

