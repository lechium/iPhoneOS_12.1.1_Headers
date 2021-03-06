/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress, NSString, NSArray, NSURL, NSDate;

@interface STSiriMessage : STSiriModelObject {

	BOOL _outbound;
	STContactAddress* _senderAddress;
	NSString* _senderInternalGUID;
	NSArray* _recipientAddresses;
	NSString* _groupName;
	NSString* _groupNameId;
	NSString* _subjectText;
	NSString* _bodyText;
	NSString* _effect;
	NSURL* _attachmentURL;
	NSDate* _sendDate;
	NSString* _chatIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)groupNameId;
-(void)setGroupNameId:(id)arg1 ;
-(id)_aceContextObjectValue;
-(BOOL)isOutbound;
-(id)subjectText;
-(void)setOutbound:(BOOL)arg1 ;
-(id)senderInternalGUID;
-(void)_setSenderInternalGUID:(id)arg1 ;
-(void)setSubjectText:(id)arg1 ;
-(id)recipientAddresses;
-(void)setRecipientAddresses:(id)arg1 ;
-(void)setSendDate:(id)arg1 ;
-(id)sendDate;
-(void)setChatIdentifier:(id)arg1 ;
-(id)attachmentURL;
-(void)setAttachmentURL:(id)arg1 ;
-(id)chatIdentifier;
-(id)senderAddress;
-(void)setSenderAddress:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(void)setEffect:(id)arg1 ;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(id)effect;
@end

