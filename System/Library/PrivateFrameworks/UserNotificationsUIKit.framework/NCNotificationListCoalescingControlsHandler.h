/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NCNotificationListCoalescingControlsHandler <NSObject>
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate; 
@property (nonatomic,copy) NSString * coalescingIdentifier; 
@property (assign,nonatomic) unsigned long long groupingSection; 
@required
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)resetClearButtonStateAnimated:(BOOL)arg1;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(CGPoint)arg1;
-(id<NCNotificationListCoalescingControlsHandlerDelegate>)handlerDelegate;
-(NSString *)coalescingIdentifier;
-(unsigned long long)groupingSection;
-(void)setHandlerDelegate:(id)arg1;
-(void)setCoalescingIdentifier:(id)arg1;
-(void)setGroupingSection:(unsigned long long)arg1;

@end
