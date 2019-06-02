/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary;

@interface PRSRankingItemCollection : NSObject {

	NSArray* _arrayOfRankingItems;
	unsigned long long _countOfVisibleResults;
	NSString* _bundleIdentifier;
	NSDictionary* _mapResultIdToProtectionClass;

}

@property (retain) NSArray * arrayOfRankingItems;                            //@synthesize arrayOfRankingItems=_arrayOfRankingItems - In the implementation block
@property (assign) unsigned long long countOfVisibleResults;                 //@synthesize countOfVisibleResults=_countOfVisibleResults - In the implementation block
@property (retain) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSDictionary * mapResultIdToProtectionClass;              //@synthesize mapResultIdToProtectionClass=_mapResultIdToProtectionClass - In the implementation block
-(unsigned long long)countOfVisibleResults;
-(NSArray *)arrayOfRankingItems;
-(void)setArrayOfRankingItems:(NSArray *)arg1 ;
-(void)setCountOfVisibleResults:(unsigned long long)arg1 ;
-(NSDictionary *)mapResultIdToProtectionClass;
-(void)setMapResultIdToProtectionClass:(NSDictionary *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end
