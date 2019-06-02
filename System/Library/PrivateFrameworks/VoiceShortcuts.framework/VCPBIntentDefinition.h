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

@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying> {

	NSString* _associatedBundleID;
	NSMutableArray* _files;

}

@property (nonatomic,retain) NSString * associatedBundleID;              //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * files;                     //@synthesize files=_files - In the implementation block
+(Class)filesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
-(NSString *)associatedBundleID;
-(void)addFiles:(id)arg1 ;
-(unsigned long long)filesCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)clearFiles;
-(id)filesAtIndex:(unsigned long long)arg1 ;
@end

