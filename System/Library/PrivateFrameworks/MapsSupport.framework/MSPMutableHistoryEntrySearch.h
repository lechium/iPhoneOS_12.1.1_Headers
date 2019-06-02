/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntrySearch.h>

@class NSString, GEOMapRegion;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * locationDisplayString; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) GEOMapRegion * mapRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(id)initWithStorage:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(NSString *)locationDisplayString;
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)query;
@end

