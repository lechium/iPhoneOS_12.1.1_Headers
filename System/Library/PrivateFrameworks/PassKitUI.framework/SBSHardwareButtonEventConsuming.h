/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSHardwareButtonEventConsuming <NSObject>
@optional
-(void)consumeSinglePressUpForButtonKind:(long long)arg1;
-(void)consumeDoublePressDownForButtonKind:(long long)arg1;
-(void)consumeDoublePressUpForButtonKind:(long long)arg1;
-(void)consumeTriplePressUpForButtonKind:(long long)arg1;
-(void)consumeLongPressForButtonKind:(long long)arg1;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1;

@end

