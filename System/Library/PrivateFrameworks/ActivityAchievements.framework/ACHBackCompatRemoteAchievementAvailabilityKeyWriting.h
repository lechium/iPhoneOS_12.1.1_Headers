/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriting : NSObject {

	HDProfile* _profile;

}

@property (nonatomic,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(id)companionAvailabilityStateKeyFromUniqueName:(id)arg1 ;
-(BOOL)markTemplateAvailable:(id)arg1 error:(id*)arg2 ;
@end

