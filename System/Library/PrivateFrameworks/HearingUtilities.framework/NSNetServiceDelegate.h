/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netServiceWillPublish:(id)arg1;
-(void)netServiceDidPublish:(id)arg1;
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceWillResolve:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netServiceDidStop:(id)arg1;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;

@end

