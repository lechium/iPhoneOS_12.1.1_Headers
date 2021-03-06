/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientDataDelegate <NSObject>
@optional
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
-(void)preferredDataSimChanged:(id)arg1;
-(void)currentDataSimChanged:(id)arg1;
-(void)servingNetworkChanged:(id)arg1;
-(void)connectionAvailability:(id)arg1 availableConnections:(id)arg2;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;

@end

