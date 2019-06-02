/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>
#import <libobjc.A.dylib/INSearchForMessagesIntentHandling.h>

@protocol IMAssistantMessageAttributeSanitizer;
@class NSString;

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling> {

	id<IMAssistantMessageAttributeSanitizer> _attributeSanitizer;

}

@property (nonatomic,retain) id<IMAssistantMessageAttributeSanitizer> attributeSanitizer;              //@synthesize attributeSanitizer=_attributeSanitizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDateTimeRangeForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithAttributeSanitizer:(id)arg1 intentIdentifier:(id)arg2 ;
-(id)initWithIntentIdentifier:(id)arg1 ;
-(id<IMAssistantMessageAttributeSanitizer>)attributeSanitizer;
-(id)resolveSpeakableGroupNames:(id)arg1 forIntent:(id)arg2 ;
-(void)resolveRecipientsAndSender:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setAttributeSanitizer:(id<IMAssistantMessageAttributeSanitizer>)arg1 ;
@end

