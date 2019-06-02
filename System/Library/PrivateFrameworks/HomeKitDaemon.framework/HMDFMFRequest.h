/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, FMFSession, HMFTimer;

@interface HMDFMFRequest : HMFObject {

	NSString* _requestID;
	FMFSession* _fmfSession;
	HMFTimer* _fmfSessionResponseTimer;

}

@property (nonatomic,readonly) NSString * requestID;                            //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) FMFSession * fmfSession;                         //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,readonly) HMFTimer * fmfSessionResponseTimer;              //@synthesize fmfSessionResponseTimer=_fmfSessionResponseTimer - In the implementation block
-(NSString *)requestID;
-(id)initWithResponseTimerDelegate:(id)arg1 ;
-(FMFSession *)fmfSession;
-(HMFTimer *)fmfSessionResponseTimer;
-(id)description;
@end
