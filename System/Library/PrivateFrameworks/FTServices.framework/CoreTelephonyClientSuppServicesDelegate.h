/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientSuppServicesDelegate <NSObject>
@optional
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
-(void)spcUnlockSuccessful:(id)arg1;
-(void)phoneBookSelected:(id)arg1;
-(void)phoneBookFetched:(id)arg1;
-(void)phoneBookWritten:(id)arg1;
-(void)phoneBookError:(id)arg1;
-(void)phoneNumberAvailable:(id)arg1;
-(void)phoneNumberChanged:(id)arg1;

@end

