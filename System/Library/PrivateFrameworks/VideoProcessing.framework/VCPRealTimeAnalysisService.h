/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPRealTimeAnalysisClientProtocol.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol> {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(id)errorWithStatus:(int)arg1 andDescription:(id)arg2 ;
+(id)analysisService;
-(void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(CVBufferRef)arg2 withProperties:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
@end

