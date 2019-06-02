/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLSavePlan, NSFaultHandler, NSSet, NSMutableDictionary, NSString, NSSQLModel, NSSaveChangesRequest;

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _metadataToWrite;
	NSSQLSavePlan* _savePlan;
	NSFaultHandler* _faultHandler;
	NSSet* _objectIDsToPruneTrigger;
	NSMutableDictionary* _originalCachedRows;
	NSMutableDictionary* _updateMasksForHistoryTracking;
	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	NSString* _fileBackedFuturesDirectory;

}

@property (nonatomic,readonly) NSDictionary * metadataToWrite;                          //@synthesize metadataToWrite=_metadataToWrite - In the implementation block
@property (nonatomic,readonly) NSSQLSavePlan * savePlan;                                //@synthesize savePlan=_savePlan - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model; 
@property (nonatomic,readonly) NSSaveChangesRequest * request; 
@property (nonatomic,readonly) NSFaultHandler * faultHandler;                           //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * originalCachedRows;                //@synthesize originalCachedRows=_originalCachedRows - In the implementation block
@property (nonatomic,readonly) NSString * externalDataReferencesDirectory;              //@synthesize externalDataReferencesDirectory=_externalDataReferencesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * externalDataLinksDirectory;                   //@synthesize externalDataLinksDirectory=_externalDataLinksDirectory - In the implementation block
@property (nonatomic,readonly) NSString * fileBackedFuturesDirectory;                   //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
-(NSFaultHandler *)faultHandler;
-(NSString *)fileBackedFuturesDirectory;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(void)executeRequestCore:(id*)arg1 ;
-(void)executePrologue;
-(id)rowCache;
-(void)executeEpilogue;
-(NSString *)externalDataReferencesDirectory;
-(NSSQLSavePlan *)savePlan;
-(BOOL)hasChangesForWriting;
-(NSString *)externalDataLinksDirectory;
-(NSDictionary *)metadataToWrite;
-(id)originalRowForObjectID:(id)arg1 ;
-(void)addDataMask:(id)arg1 forEntityKey:(id)arg2 ;
-(id)dataMaskForKey:(id)arg1 ;
-(void)setOriginalRow:(id)arg1 forObjectID:(id)arg2 ;
-(NSMutableDictionary *)originalCachedRows;
-(void)dealloc;
-(NSSaveChangesRequest *)request;
-(NSSQLModel *)model;
@end

