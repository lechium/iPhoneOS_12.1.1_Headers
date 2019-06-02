/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, VCPBVoiceShortcut, NSString;

@interface VCPBVoiceShortcutChange : PBCodable <NSCopying> {

	int _changeType;
	NSData* _syncMetadata;
	VCPBVoiceShortcut* _voiceShortcut;
	NSString* _voiceShortcutIdentifier;

}

@property (assign,nonatomic) int changeType;                                  //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * voiceShortcutIdentifier;              //@synthesize voiceShortcutIdentifier=_voiceShortcutIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasVoiceShortcut; 
@property (nonatomic,retain) VCPBVoiceShortcut * voiceShortcut;               //@synthesize voiceShortcut=_voiceShortcut - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncMetadata; 
@property (nonatomic,retain) NSData * syncMetadata;                           //@synthesize syncMetadata=_syncMetadata - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)changeType;
-(void)setChangeType:(int)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setVoiceShortcutIdentifier:(NSString *)arg1 ;
-(void)setSyncMetadata:(NSData *)arg1 ;
-(BOOL)hasVoiceShortcut;
-(BOOL)hasSyncMetadata;
-(NSString *)voiceShortcutIdentifier;
-(NSData *)syncMetadata;
-(VCPBVoiceShortcut *)voiceShortcut;
-(void)setVoiceShortcut:(VCPBVoiceShortcut *)arg1 ;
@end
