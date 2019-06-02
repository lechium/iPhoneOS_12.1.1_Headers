/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLSearchResult.h>

@class PSICollectionResult, NSString, NSDate, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult {

	PSICollectionResult* _collectionResult;

}

@property (nonatomic,readonly) PSICollectionResult * collectionResult;              //@synthesize collectionResult=_collectionResult - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) PSIDate * startDate; 
@property (nonatomic,readonly) PSIDate * endDate; 
@property (nonatomic,readonly) unsigned long long collectionType; 
-(id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2 ;
-(PSICollectionResult *)collectionResult;
-(PSIDate *)startDate;
-(PSIDate *)endDate;
-(id)keyAssetUUID;
-(unsigned long long)collectionType;
-(unsigned long long)assetCount;
-(NSDate *)sortDate;
-(NSString *)uuid;
-(NSString *)title;
-(NSString *)subtitle;
-(unsigned long long)type;
@end

