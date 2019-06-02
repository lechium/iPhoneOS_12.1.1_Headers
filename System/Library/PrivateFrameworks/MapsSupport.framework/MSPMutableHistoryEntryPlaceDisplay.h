/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntryPlaceDisplay.h>

@class NSUUID, NSString;

@interface MSPMutableHistoryEntryPlaceDisplay : MSPMutableHistoryEntry <MSPHistoryEntryPlaceDisplay>

@property (nonatomic,retain) id<GEOMapItem> geoMapItem; 
@property (nonatomic,copy) NSUUID * supersededSearchStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(id<GEOMapItem>)geoMapItem;
-(id)initWithStorage:(id)arg1 ;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(void)setSupersededSearchStorageIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)supersededSearchStorageIdentifier;
@end
