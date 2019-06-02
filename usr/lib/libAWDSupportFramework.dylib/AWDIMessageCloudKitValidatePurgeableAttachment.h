/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageCloudKitValidatePurgeableAttachment : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _attachmentSize;
	unsigned _connectionType;
	int _linkQuality;
	unsigned _operationalErrorCode;
	NSString* _operationalErrorDomain;
	unsigned _validatedAttachment;
	unsigned _validationErrorCode;
	NSString* _validationErrorDomain;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasValidatedAttachment; 
@property (assign,nonatomic) unsigned validatedAttachment;                   //@synthesize validatedAttachment=_validatedAttachment - In the implementation block
@property (assign,nonatomic) BOOL hasAttachmentSize; 
@property (assign,nonatomic) unsigned attachmentSize;                        //@synthesize attachmentSize=_attachmentSize - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationalErrorDomain; 
@property (nonatomic,retain) NSString * operationalErrorDomain;              //@synthesize operationalErrorDomain=_operationalErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasOperationalErrorCode; 
@property (assign,nonatomic) unsigned operationalErrorCode;                  //@synthesize operationalErrorCode=_operationalErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasValidationErrorDomain; 
@property (nonatomic,retain) NSString * validationErrorDomain;               //@synthesize validationErrorDomain=_validationErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasValidationErrorCode; 
@property (assign,nonatomic) unsigned validationErrorCode;                   //@synthesize validationErrorCode=_validationErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                        //@synthesize connectionType=_connectionType - In the implementation block
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setAttachmentSize:(unsigned)arg1 ;
-(void)setHasAttachmentSize:(BOOL)arg1 ;
-(BOOL)hasAttachmentSize;
-(unsigned)attachmentSize;
-(void)setOperationalErrorDomain:(NSString *)arg1 ;
-(void)setValidationErrorDomain:(NSString *)arg1 ;
-(void)setValidatedAttachment:(unsigned)arg1 ;
-(void)setHasValidatedAttachment:(BOOL)arg1 ;
-(BOOL)hasValidatedAttachment;
-(BOOL)hasOperationalErrorDomain;
-(void)setOperationalErrorCode:(unsigned)arg1 ;
-(void)setHasOperationalErrorCode:(BOOL)arg1 ;
-(BOOL)hasOperationalErrorCode;
-(BOOL)hasValidationErrorDomain;
-(void)setValidationErrorCode:(unsigned)arg1 ;
-(void)setHasValidationErrorCode:(BOOL)arg1 ;
-(BOOL)hasValidationErrorCode;
-(unsigned)validatedAttachment;
-(NSString *)operationalErrorDomain;
-(unsigned)operationalErrorCode;
-(NSString *)validationErrorDomain;
-(unsigned)validationErrorCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

