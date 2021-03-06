/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libsysdiagnose.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libsysdiagnose.dylib/libsysdiagnose.dylib-Structs.h>
@interface Libsysdiagnose : NSObject
+(id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 ;
+(id)setupConnection;
+(int)addErrorString:(id)arg1 WithCode:(id)arg2 forError:(id*)arg3 ;
+(BOOL)verifyReply:(id)arg1 withExpectedType:(xpc_type_sRef)arg2 forError:(id*)arg3 ;
+(void)createMetrics:(id*)arg1 fromResponse:(id)arg2 ;
+(id)getSysdiagnoseCrashLog;
+(id)createSysdiagnoseRequest:(id)arg1 ;
+(id)sendSysdiagnoseRequest:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(/*^block*/id)arg4 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(/*^block*/id)arg4 ;
+(id)fetchRemoteDiagnosticIDsWithError:(id*)arg1 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 andProgressHandler:(/*^block*/id)arg3 ;
+(BOOL)cancelActiveSysdiagnoseWithError:(id*)arg1 ;
+(id)fetchDiagnosticIDFromDeviceSource:(unsigned long long)arg1 WithMaxCount:(unsigned long long)arg2 withError:(id*)arg3 ;
@end

