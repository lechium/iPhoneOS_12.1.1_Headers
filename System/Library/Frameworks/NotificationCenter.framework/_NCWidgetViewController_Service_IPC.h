/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NCWidgetViewController_Service_IPC
@optional
-(void)__setActiveDisplayMode:(long long)arg1;
-(void)__setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2;

@required
-(void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(/*^block*/id)arg3;
-(void)__performUpdateWithReplyHandler:(/*^block*/id)arg1;
-(void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
-(void)__updateVisibilityState:(long long)arg1;
-(void)__updateVisibleFrame:(CGRect)arg1 withReplyHandler:(/*^block*/id)arg2;

@end

