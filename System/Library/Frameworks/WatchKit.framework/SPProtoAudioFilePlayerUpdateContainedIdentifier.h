/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying> {

	NSString* _containedIdentifier;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasContainedIdentifier; 
@property (nonatomic,retain) NSString * containedIdentifier;              //@synthesize containedIdentifier=_containedIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setContainedIdentifier:(NSString *)arg1 ;
-(BOOL)hasContainedIdentifier;
-(NSString *)containedIdentifier;
-(id)sockPuppetMessageForPlayerItemUpsertWithAsset;
-(id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
-(id)sockPuppetMessageForQueuePlayerAppendItem;
-(id)sockPuppetMessageForQueuePlayerRemoveItem;
-(id)sockPuppetMessageForQueuePlayerSetCurrentItem;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

