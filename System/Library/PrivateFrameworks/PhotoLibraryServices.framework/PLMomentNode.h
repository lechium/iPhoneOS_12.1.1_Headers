/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLRegionsClusteringItem.h>

@protocol NSCopying;
@class CLLocation, NSDate, NSObject, PLMomentCluster, NSString, NSNumber;

@interface PLMomentNode : NSObject <PLRegionsClusteringItem> {

	BOOL _marked;
	BOOL _visited;
	NSObject*<NSCopying> __objectID;
	CLLocation* __location;
	NSDate* __creationDate;
	PLMomentCluster* __cluster;
	unsigned long long __userTagType;
	NSString* __userTag;
	NSNumber* _cacheInsertionIndex;

}

@property (assign,getter=isMarked,nonatomic) BOOL marked;                         //@synthesize marked=_marked - In the implementation block
@property (assign,getter=isVisited,nonatomic) BOOL visited;                       //@synthesize visited=_visited - In the implementation block
@property (assign,nonatomic) PLMomentCluster * cluster;                           //@synthesize _cluster=__cluster - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<NSCopying> objectID;              //@synthesize _objectID=__objectID - In the implementation block
@property (nonatomic,retain,readonly) NSDate * creationDate;                      //@synthesize _creationDate=__creationDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                             //@synthesize _location=__location - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) unsigned long long userTagType;                    //@synthesize _userTagType=__userTagType - In the implementation block
@property (nonatomic,readonly) NSString * userTag;                                //@synthesize _userTag=__userTag - In the implementation block
@property (nonatomic,retain) NSNumber * cacheInsertionIndex;                      //@synthesize cacheInsertionIndex=_cacheInsertionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (nonatomic,readonly) NSDate * pl_date; 
-(CLLocationCoordinate2D)coordinate;
-(NSDate *)pl_date;
-(CLLocation *)pl_location;
-(id)initWithManagedAsset:(id)arg1 ;
-(void)setCluster:(PLMomentCluster *)arg1 ;
-(BOOL)isTagged;
-(unsigned long long)userTagType;
-(NSString *)userTag;
-(BOOL)isMarked;
-(BOOL)isVisited;
-(void)setVisited:(BOOL)arg1 ;
-(PLMomentCluster *)cluster;
-(void)setMarked:(BOOL)arg1 ;
-(void)setCacheInsertionIndex:(NSNumber *)arg1 ;
-(id)initWithPartialFetchDictionary:(id)arg1 ;
-(NSNumber *)cacheInsertionIndex;
-(NSObject*<NSCopying>)objectID;
-(NSDate *)creationDate;
-(void)dealloc;
-(NSString *)description;
-(CLLocation *)location;
@end

