/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOXPCUtil : NSObject
+(id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
+(id)createServerConnectionWithPort:(const char*)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(/*^block*/id)arg4 ;
+(/*^block*/id)daemonXPCConnectionCreationBlock;
+(void)setDaemonXPCConnectionCreationBlock:(/*^block*/id)arg1 ;
@end
