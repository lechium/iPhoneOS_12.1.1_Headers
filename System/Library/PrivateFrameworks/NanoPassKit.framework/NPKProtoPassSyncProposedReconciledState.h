/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoPassSyncState;

@interface NPKProtoPassSyncProposedReconciledState : PBCodable <NSCopying> {

	NPKProtoPassSyncState* _proposedReconciledState;

}

@property (nonatomic,readonly) BOOL hasProposedReconciledState; 
@property (nonatomic,retain) NPKProtoPassSyncState * proposedReconciledState;              //@synthesize proposedReconciledState=_proposedReconciledState - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NPKProtoPassSyncState *)proposedReconciledState;
-(void)setProposedReconciledState:(NPKProtoPassSyncState *)arg1 ;
-(BOOL)hasProposedReconciledState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

