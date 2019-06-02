/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSmartPunctuationClient;
#import <Foundation/Foundation-Structs.h>
@class NSSmartQuoteOptions;

@interface NSSmartPunctuationController : NSObject {

	id<NSSmartPunctuationClient> _client;
	NSSmartQuoteOptions* _options;
	unsigned long long _types;

}

@property (assign) id<NSSmartPunctuationClient> client; 
@property (copy) NSSmartQuoteOptions * smartQuoteOptions; 
@property (assign) BOOL smartQuotesEnabled; 
@property (assign) BOOL smartDashesEnabled; 
-(NSSmartQuoteOptions *)smartQuoteOptions;
-(void)setSmartQuoteOptions:(NSSmartQuoteOptions *)arg1 ;
-(void)clientDidReplaceRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(id<NSSmartPunctuationClient>)client;
-(void)setClient:(id<NSSmartPunctuationClient>)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)smartQuotesEnabled;
-(BOOL)smartDashesEnabled;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
@end

