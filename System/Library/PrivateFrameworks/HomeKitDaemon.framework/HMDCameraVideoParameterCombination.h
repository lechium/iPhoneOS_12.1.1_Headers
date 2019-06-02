/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDH264Profile, HMDH264Level, HMDCameraVideoTier;

@interface HMDCameraVideoParameterCombination : HMFObject {

	HMDH264Profile* _profile;
	HMDH264Level* _level;
	HMDCameraVideoTier* _videoTier;

}

@property (nonatomic,readonly) HMDH264Profile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HMDH264Level * level;                        //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) HMDCameraVideoTier * videoTier;              //@synthesize videoTier=_videoTier - In the implementation block
-(HMDH264Profile *)profile;
-(HMDCameraVideoTier *)videoTier;
-(id)initWithProfile:(id)arg1 level:(id)arg2 videoTier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(HMDH264Level *)level;
@end
