/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, ICStorePlatformMetadata, NSArray, ICStoreHLSAssetInfo;

@interface ICRadioStationTrack : NSObject {

	NSDictionary* _responseDictionary;
	NSDate* _expirationDate;
	ICRadioStationTrack* _parentTrack;

}

@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) ICStorePlatformMetadata * storePlatformMetadata; 
@property (nonatomic,copy,readonly) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy,readonly) NSArray * fileAssets; 
@property (nonatomic,copy,readonly) ICStoreHLSAssetInfo * hlsAsset; 
@property (nonatomic,readonly) long long likeState; 
@property (getter=isSkippable,nonatomic,readonly) BOOL skippable; 
@property (nonatomic,readonly) long long trackType; 
@property (nonatomic,readonly) BOOL hasStartTime; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) ICRadioStationTrack * beforePromoContentTrack; 
@property (nonatomic,readonly) ICRadioStationTrack * afterPromoContentTrack; 
@property (nonatomic,readonly) ICRadioStationTrack * parentTrack;                                 //@synthesize parentTrack=_parentTrack - In the implementation block
+(id)flattenedTracksWithTracks:(id)arg1 ;
-(BOOL)hasStartTime;
-(ICRadioStationTrack *)beforePromoContentTrack;
-(ICRadioStationTrack *)afterPromoContentTrack;
-(NSDictionary *)serverTrackInfo;
-(long long)storeAdamID;
-(ICStorePlatformMetadata *)storePlatformMetadata;
-(NSArray *)fileAssets;
-(ICStoreHLSAssetInfo *)hlsAsset;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(long long)trackType;
-(long long)likeState;
-(ICRadioStationTrack *)parentTrack;
-(BOOL)isSkippable;
-(double)startTime;
-(NSDate *)expirationDate;
@end

