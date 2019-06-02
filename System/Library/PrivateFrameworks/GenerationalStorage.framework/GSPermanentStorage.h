/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <libobjc.A.dylib/GSAdditionStoringPrivate.h>
#import <libobjc.A.dylib/GSAdditionStoring.h>

@class NSURL, GSDocumentIdentifier, GSStagingPrefix, NSData;

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring> {

	GSDocumentIdentifier* _documentID;
	GSStagingPrefix* _stagingPrefix;
	NSURL* _documentURL;
	unsigned long long _remoteID;
	unsigned long long _storageID;
	NSData* _pubExtension;
	NSData* _privExtension;
	long long _pubHandle;
	long long _privHandle;

}

@property (nonatomic,readonly) long long remoteID; 
@property (nonatomic,retain) GSStagingPrefix * stagingPrefix;                                   //@synthesize stagingPrefix=_stagingPrefix - In the implementation block
@property (retain) NSData * pubExtension; 
@property (retain) NSData * privExtension; 
@property (nonatomic,readonly) GSDocumentIdentifier * documentID; 
@property (nonatomic,readonly) unsigned long long storageID;                                    //@synthesize storageID=_storageID - In the implementation block
@property (retain) NSURL * documentURL;                                                         //@synthesize documentURL=_documentURL - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier;              //@synthesize documentID=_documentID - In the implementation block
+(id)storageIDForItemAtURL:(id)arg1 error:(id*)arg2 ;
+(id)storagePrefixForFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(NSEnumerator*)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4 ;
-(void)removeAdditions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id*)arg4 ;
-(void)cleanupStagingURL:(id)arg1 ;
-(void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)storageID;
-(NSData *)privExtension;
-(NSData *)pubExtension;
-(id)getAdditionDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(BOOL)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)_connectionWithDaemonWasLost;
-(BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)URLforReplacingItemWithError:(id*)arg1 ;
-(void)setPubExtension:(NSData *)arg1 ;
-(void)setPrivExtension:(NSData *)arg1 ;
-(BOOL)_refreshRemoteIDWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(id)initWithFileDescriptor:(int)arg1 documentID:(id)arg2 forItemAtURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)transferToItemAtURL:(id)arg1 error:(id*)arg2 ;
-(GSStagingPrefix *)stagingPrefix;
-(void)setStagingPrefix:(GSStagingPrefix *)arg1 ;
-(id)stagingURLforCreatingAdditionWithError:(id*)arg1 ;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(GSDocumentIdentifier *)documentID;
-(void)finalize;
-(long long)remoteID;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)_invalidate;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(NSURL *)documentURL;
@end

