/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDropMailDelivery.h>
#import <libobjc.A.dylib/MFMessageRewriterPlaceholderResolver.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery <MFMessageRewriterPlaceholderResolver> {

	MFPlaceholderMessageRewriter* _rewriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_scaleImages:(id)arg1 toFit:(unsigned long long)arg2 resultingSize:(out unsigned long long*)arg3 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)_mailDropAttachmentHTMLStringForAttachment:(id)arg1 ;
-(id)_contentForAttachmentPassingTest:(/*^block*/id)arg1 ;
-(id)_headersByAddingMailDropHeaders:(id)arg1 ;
-(id)_mailDropBannerHTMLString;
-(id)contentForURL:(id)arg1 ;
-(id)contentForContentID:(id)arg1 ;
-(id)contentForPlaceholder:(id)arg1 ;
-(id)scaledImages:(id)arg1 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
-(void)dealloc;
@end

