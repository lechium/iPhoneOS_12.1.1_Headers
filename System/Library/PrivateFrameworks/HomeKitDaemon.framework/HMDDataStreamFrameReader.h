/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
@class NSObject;

@interface HMDDataStreamFrameReader : NSObject {

	NSObject*<OS_dispatch_data> _partialFrame;
	BOOL _headerInfoRead;
	BOOL _streamFailed;
	unsigned char _currentframeType;
	unsigned long long _payloadLength;

}
+(id)logCategory;
-(BOOL)hasFailed;
-(unsigned long long)bytesNeededForCurrentFrame;
-(void)_readFrameHeaderIfPossible;
-(BOOL)hasCompleteFrame;
-(void)pushFrameData:(id)arg1 ;
-(BOOL)hasPartialData;
-(id)popRawFrame;
-(id)init;
-(void)reset;
@end

