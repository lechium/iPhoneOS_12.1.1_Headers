/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISBiometricSessionDelegate <NSObject>
@optional
-(void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
-(void)sender:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2;
-(void)sender:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 isExtendedAction:(BOOL)arg4 isPayment:(BOOL)arg5 additionalHeaders:(id)arg6;

@end

