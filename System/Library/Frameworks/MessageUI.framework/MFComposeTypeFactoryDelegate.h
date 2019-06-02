/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)addSignature:(BOOL)arg1;
-(void)contentDidChange;

@required
-(void)setToRecipients:(id)arg1;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(id)bodyField;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
-(id)sendingEmailAddress;
-(id)sendingAccountProxy;
-(id)shouldCreateRichTextRepresentation;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1;
-(BOOL)hasAnyHiddenTrailingEmptyQuote;
-(id)attachments;
-(id)subject;
-(void)setSubject:(id)arg1;

@end
