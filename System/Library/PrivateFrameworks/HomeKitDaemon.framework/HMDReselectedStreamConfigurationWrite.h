/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDSessionControl, HMDReselectedVideoParameters;

@interface HMDReselectedStreamConfigurationWrite : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDSessionControl* _sessionControl;
	HMDReselectedVideoParameters* _videoParameters;

}

@property (nonatomic,copy,readonly) HMDSessionControl * sessionControl;                          //@synthesize sessionControl=_sessionControl - In the implementation block
@property (nonatomic,copy,readonly) HMDReselectedVideoParameters * videoParameters;              //@synthesize videoParameters=_videoParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDSessionControl *)sessionControl;
-(HMDReselectedVideoParameters *)videoParameters;
-(id)initWithSessionControl:(id)arg1 ;
-(id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

