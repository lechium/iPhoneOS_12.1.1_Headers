/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSDate, NSString;

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource {

	short _cloudLocalState;
	short _prefetchCount;
	NSDate* _dateCreated;
	NSString* _itemIdentifier;
	NSDate* _lastOnDemandDownloadDate;
	NSDate* _lastPrefetchDate;
	NSDate* _prunedAt;

}

@property (nonatomic,retain) NSDate * dateCreated;                           //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) short cloudLocalState;                          //@synthesize cloudLocalState=_cloudLocalState - In the implementation block
@property (nonatomic,retain) NSString * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate;              //@synthesize lastOnDemandDownloadDate=_lastOnDemandDownloadDate - In the implementation block
@property (nonatomic,retain) NSDate * lastPrefetchDate;                      //@synthesize lastPrefetchDate=_lastPrefetchDate - In the implementation block
@property (assign,nonatomic) short prefetchCount;                            //@synthesize prefetchCount=_prefetchCount - In the implementation block
@property (nonatomic,retain) NSDate * prunedAt;                              //@synthesize prunedAt=_prunedAt - In the implementation block
-(short)cloudLocalState;
-(void)setCloudLocalState:(short)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)initWithCloudResource:(id)arg1 ;
-(short)prefetchCount;
-(void)setPrefetchCount:(short)arg1 ;
-(NSDate *)lastPrefetchDate;
-(void)setLastPrefetchDate:(NSDate *)arg1 ;
-(NSDate *)lastOnDemandDownloadDate;
-(void)setLastOnDemandDownloadDate:(NSDate *)arg1 ;
-(NSDate *)prunedAt;
-(void)setPrunedAt:(NSDate *)arg1 ;
-(id)initWithCloudAttributes:(id)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSDate *)dateCreated;
@end

