/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIStatusBarServerClient
@required
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const /*function pointer*/void**)arg2 withActions:(int)arg3;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;

@end

