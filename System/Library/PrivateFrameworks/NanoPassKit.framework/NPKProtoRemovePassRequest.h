/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoCatalog, NPKProtoHash, NSString;

@interface NPKProtoRemovePassRequest : PBRequest <NSCopying> {

	NPKProtoCatalog* _catalog;
	unsigned _lastKnownResyncID;
	NPKProtoHash* _libraryHash;
	NSString* _passID;
	unsigned _resyncID;
	unsigned _syncID;
	SCD_Struct_NP3 _has;

}

@property (nonatomic,retain) NSString * passID;                       //@synthesize passID=_passID - In the implementation block
@property (nonatomic,readonly) BOOL hasLibraryHash; 
@property (nonatomic,retain) NPKProtoHash * libraryHash;              //@synthesize libraryHash=_libraryHash - In the implementation block
@property (assign,nonatomic) BOOL hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                       //@synthesize resyncID=_resyncID - In the implementation block
@property (nonatomic,readonly) BOOL hasCatalog; 
@property (nonatomic,retain) NPKProtoCatalog * catalog;               //@synthesize catalog=_catalog - In the implementation block
@property (assign,nonatomic) BOOL hasLastKnownResyncID; 
@property (assign,nonatomic) unsigned lastKnownResyncID;              //@synthesize lastKnownResyncID=_lastKnownResyncID - In the implementation block
@property (assign,nonatomic) BOOL hasSyncID; 
@property (assign,nonatomic) unsigned syncID;                         //@synthesize syncID=_syncID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSyncID:(unsigned)arg1 ;
-(NSString *)passID;
-(void)setPassID:(NSString *)arg1 ;
-(unsigned)syncID;
-(BOOL)hasCatalog;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(BOOL)arg1 ;
-(BOOL)hasResyncID;
-(unsigned)resyncID;
-(void)setLibraryHash:(NPKProtoHash *)arg1 ;
-(BOOL)hasLibraryHash;
-(void)setLastKnownResyncID:(unsigned)arg1 ;
-(void)setHasLastKnownResyncID:(BOOL)arg1 ;
-(BOOL)hasLastKnownResyncID;
-(void)setHasSyncID:(BOOL)arg1 ;
-(BOOL)hasSyncID;
-(NPKProtoHash *)libraryHash;
-(unsigned)lastKnownResyncID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NPKProtoCatalog *)catalog;
-(void)setCatalog:(NPKProtoCatalog *)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
