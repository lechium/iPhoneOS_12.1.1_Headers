/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGDSuggestManagerMessagesProtocol;
@class NSMutableDictionary;

@interface SGMessagesDaemonConnection : NSObject {

	NSMutableDictionary* _contextSent;
	id<SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;

}
-(void)setManagerForTesting:(id)arg1 ;
-(id)initWithDaemonConnection:(id)arg1 ;
-(BOOL)hasContextBeenSentForConversation:(id)arg1 ;
-(void)didSendContextForConversation:(id)arg1 ;
-(id)remoteSuggestionManager;
-(void)connectionInterrupted;
-(void)dealloc;
@end

