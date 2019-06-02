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

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying> {

	NSMutableArray* _xattrs;

}

@property (nonatomic,retain) NSMutableArray * xattrs;              //@synthesize xattrs=_xattrs - In the implementation block
+(id)loadXattrsFromFD:(int)arg1 withMaximumSize:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)loadXattrsFromFD:(int)arg1 structuralBlob:(id*)arg2 contentBlob:(id*)arg3 localBlob:(id*)arg4 withMaximumSize:(unsigned long long)arg5 error:(id*)arg6 ;
+(BOOL)removeXattrsOnFD:(int)arg1 includingContentRelated:(BOOL)arg2 error:(id*)arg3 ;
+(Class)xattrsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)xattrs;
-(BOOL)applyToFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(void)setXattrs:(NSMutableArray *)arg1 ;
-(void)addXattrs:(id)arg1 ;
-(unsigned long long)xattrsCount;
-(void)clearXattrs;
-(id)xattrsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(id)shortDescription;
@end

