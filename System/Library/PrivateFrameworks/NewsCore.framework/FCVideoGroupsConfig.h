/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBVideoGroupsConfig, NSDictionary;

@interface FCVideoGroupsConfig : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _moreVideosGroupSortOption;
	unsigned long long _moreVideosGroupFilterOption;
	NTPBVideoGroupsConfig* _pbVideoGroupsConfig;
	NSDictionary* _configDictionary;

}

@property (nonatomic,copy) NTPBVideoGroupsConfig * pbVideoGroupsConfig;                   //@synthesize pbVideoGroupsConfig=_pbVideoGroupsConfig - In the implementation block
@property (nonatomic,copy) NSDictionary * configDictionary;                               //@synthesize configDictionary=_configDictionary - In the implementation block
@property (nonatomic,readonly) BOOL playsMutedByDefault; 
@property (nonatomic,readonly) long long nowPlayingBarTime; 
@property (nonatomic,readonly) long long upNextBarTime; 
@property (nonatomic,readonly) long long moreFromPublisherBarTime; 
@property (nonatomic,readonly) BOOL moreFromPublisherBarEnabled; 
@property (assign,nonatomic) unsigned long long moreVideosGroupSortOption;                //@synthesize moreVideosGroupSortOption=_moreVideosGroupSortOption - In the implementation block
@property (assign,nonatomic) unsigned long long moreVideosGroupFilterOption;              //@synthesize moreVideosGroupFilterOption=_moreVideosGroupFilterOption - In the implementation block
@property (nonatomic,readonly) long long moreVideosGroupMinNumberOfVideos; 
@property (nonatomic,readonly) long long moreVideosGroupMaxNumberOfVideos; 
+(BOOL)supportsSecureCoding;
-(id)initWithVideoGroupsConfig:(id)arg1 ;
-(NSDictionary *)configDictionary;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NTPBVideoGroupsConfig *)pbVideoGroupsConfig;
-(BOOL)playsMutedByDefault;
-(long long)nowPlayingBarTime;
-(long long)upNextBarTime;
-(long long)moreFromPublisherBarTime;
-(BOOL)moreFromPublisherBarEnabled;
-(unsigned long long)moreVideosGroupSortOption;
-(unsigned long long)moreVideosGroupFilterOption;
-(long long)moreVideosGroupMinNumberOfVideos;
-(long long)moreVideosGroupMaxNumberOfVideos;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(void)setPbVideoGroupsConfig:(NTPBVideoGroupsConfig *)arg1 ;
-(void)setMoreVideosGroupSortOption:(unsigned long long)arg1 ;
-(void)setMoreVideosGroupFilterOption:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

