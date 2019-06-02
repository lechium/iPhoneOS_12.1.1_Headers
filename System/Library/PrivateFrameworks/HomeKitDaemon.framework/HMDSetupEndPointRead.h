/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDSetupEndPointWrite.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDSetupEndPointRead : HMDSetupEndPointWrite <NSSecureCoding> {

	unsigned long long _responseStatus;
	NSNumber* _videoSSRC;
	NSNumber* _audioSSRC;

}

@property (nonatomic,readonly) unsigned long long responseStatus;              //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoSSRC;                      //@synthesize videoSSRC=_videoSSRC - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioSSRC;                      //@synthesize audioSSRC=_audioSSRC - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVDataOnSuccess;
-(BOOL)_parseFromTLVDataOnFailure;
-(unsigned long long)responseStatus;
-(NSNumber *)videoSSRC;
-(NSNumber *)audioSSRC;
-(id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

