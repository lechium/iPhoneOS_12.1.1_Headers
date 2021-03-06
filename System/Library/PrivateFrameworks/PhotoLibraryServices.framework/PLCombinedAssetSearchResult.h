/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetSearchResult.h>

@class NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {

	NSMutableArray* _assetSearchResults;

}

@property (nonatomic,retain) NSMutableArray * assetSearchResults;              //@synthesize assetSearchResults=_assetSearchResults - In the implementation block
-(id)initWithAssetSearchResult:(id)arg1 ;
-(void)addAssetSearchResult:(id)arg1 isMainSearchResult:(BOOL)arg2 ;
-(NSMutableArray *)assetSearchResults;
-(void)setAssetSearchResults:(NSMutableArray *)arg1 ;
-(id)assetUUIDs;
-(unsigned long long)categoryMask;
-(unsigned long long)assetCount;
-(id)groupDescription;
@end

