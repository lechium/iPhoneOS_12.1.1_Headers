/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRFieldPkgItem, NSData;

@interface BRFieldPkgLocalItem : PBCodable <NSCopying> {

	long long _fileID;
	long long _size;
	unsigned _generationID;
	BRFieldPkgItem* _item;
	NSData* _xattrs;
	SCD_Struct_BR2 _has;

}

@property (nonatomic,retain) BRFieldPkgItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long fileID;                   //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationID; 
@property (assign,nonatomic) unsigned generationID;              //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                     //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasXattrs; 
@property (nonatomic,retain) NSData * xattrs;                    //@synthesize xattrs=_xattrs - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setFileID:(long long)arg1 ;
-(long long)fileID;
-(NSData *)xattrs;
-(void)setXattrs:(NSData *)arg1 ;
-(void)setHasGenerationID:(BOOL)arg1 ;
-(BOOL)hasGenerationID;
-(BOOL)hasXattrs;
-(unsigned)generationID;
-(void)setGenerationID:(unsigned)arg1 ;
-(long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItem:(BRFieldPkgItem *)arg1 ;
-(BRFieldPkgItem *)item;
-(void)setSize:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

