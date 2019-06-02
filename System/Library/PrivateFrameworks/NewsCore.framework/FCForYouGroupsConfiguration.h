/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FCForYouGroupsConfiguration : NSObject {

	NSString* _configuration;
	double _weekendGreatStoriesYouMissedTimeRange;
	NSDictionary* _groupConfigurationsByIdentifier;

}

@property (nonatomic,copy) NSDictionary * groupConfigurationsByIdentifier;                //@synthesize groupConfigurationsByIdentifier=_groupConfigurationsByIdentifier - In the implementation block
@property (nonatomic,readonly) double weekendGreatStoriesYouMissedTimeRange;              //@synthesize weekendGreatStoriesYouMissedTimeRange=_weekendGreatStoriesYouMissedTimeRange - In the implementation block
+(id)_groupIdentifiersByType;
-(id)initWithJSONConfiguration:(id)arg1 ;
-(id)configurationForGroupType:(long long)arg1 ;
-(double)weekendGreatStoriesYouMissedTimeRange;
-(unsigned long long)_defaultGroupPositionValueForGroupType:(long long)arg1 ;
-(unsigned long long)_defaultPrecedingGroupsCount:(long long)arg1 ;
-(BOOL)_defaultAllowsNativeAdsValueForGroupType:(long long)arg1 ;
-(id)_identifierForGroupType:(long long)arg1 ;
-(NSDictionary *)groupConfigurationsByIdentifier;
-(void)setGroupConfigurationsByIdentifier:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

