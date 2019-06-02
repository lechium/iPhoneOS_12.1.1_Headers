/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, SAPersonAttribute, NSString, NSNumber, NSURL;

@interface SAEmailEmail : SADomainObject

@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,retain) SAPersonAttribute * fromEmail; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * messagePreview; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * receivingAddresses; 
@property (nonatomic,copy) NSArray * recipientsBcc; 
@property (nonatomic,copy) NSArray * recipientsCc; 
@property (nonatomic,copy) NSArray * recipientsTo; 
@property (nonatomic,copy) NSURL * referenceId; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * type; 
+(id)emailWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)email;
-(NSDate *)dateSent;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSArray *)recipientsTo;
-(void)setRecipientsTo:(NSArray *)arg1 ;
-(SAPersonAttribute *)fromEmail;
-(void)setFromEmail:(SAPersonAttribute *)arg1 ;
-(NSString *)messagePreview;
-(void)setMessagePreview:(NSString *)arg1 ;
-(NSArray *)receivingAddresses;
-(void)setReceivingAddresses:(NSArray *)arg1 ;
-(NSArray *)recipientsBcc;
-(void)setRecipientsBcc:(NSArray *)arg1 ;
-(NSArray *)recipientsCc;
-(void)setRecipientsCc:(NSArray *)arg1 ;
-(NSURL *)referenceId;
-(void)setReferenceId:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(NSNumber *)outgoing;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
@end

