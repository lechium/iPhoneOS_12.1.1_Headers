/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(BOOL)isOffline;
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForLocalWiFi;
+(id)sharedReachabilityForInternetConnection;
+(void)_updateIsOffline;
-(BOOL)startNotifier;
-(int)currentReachabilityStatus;
-(void)stopNotifier;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(void)dealloc;
@end

