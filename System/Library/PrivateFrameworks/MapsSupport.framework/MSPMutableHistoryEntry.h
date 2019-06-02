/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPHistoryEntry.h>
#import <libobjc.A.dylib/MSPMutableObject.h>

@class NSUUID, NSDate, MSPHistoryEntryStorage, NSString;

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject> {

	BOOL _immutable;
	NSUUID* _storageIdentifier;
	NSDate* _usageDate;
	MSPHistoryEntryStorage* _storage;

}

@property (getter=_isImmutable,nonatomic,readonly) BOOL immutable;                                   //@synthesize immutable=_immutable - In the implementation block
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage;                                     //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) NSDate * usageDate;                                                       //@synthesize usageDate=_usageDate - In the implementation block
@property (assign,getter=tracksRAPReportingOnly,nonatomic) BOOL tracksRAPReportingOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableHistoryEntryForStorage:(id)arg1 ;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(id)initWithStorage:(id)arg1 ;
-(MSPHistoryEntryStorage *)storage;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)copyIfValidWithError:(out id*)arg1 ;
-(void)setUsageDate:(NSDate *)arg1 ;
-(void)ifMutableSearch:(/*^block*/id)arg1 ifMutableRoute:(/*^block*/id)arg2 ifMutablePlaceDisplay:(/*^block*/id)arg3 ifMutableTransitLineItem:(/*^block*/id)arg4 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(void)setTracksRAPReportingOnly:(BOOL)arg1 ;
-(void)_markImmutable;
-(void)_noteWillMutate;
-(BOOL)_isImmutable;
-(BOOL)isFailed;
-(id)storageIdentifier;
-(NSDate *)usageDate;
-(void)ifSearch:(/*^block*/id)arg1 ifRoute:(/*^block*/id)arg2 ifPlaceDisplay:(/*^block*/id)arg3 ifTransitLineItem:(/*^block*/id)arg4 ;
-(BOOL)isUserVisibleDuplicateOfEntry:(id)arg1 ;
-(BOOL)tracksRAPReportingOnly;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

