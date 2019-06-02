/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUHTMLParserDelegate;
@class _MPUHTMLDefaultDelegate;

@interface MPUHTMLParser : NSObject {

	_MPUHTMLDefaultDelegate* _defaultDelegate;
	id<MPUHTMLParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPUHTMLParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)parser;
+(id)sanitizedHTMLString:(id)arg1 ;
+(id)parserWithDefaultAttributes:(id)arg1 ;
+(id)attributedSanitizedStringFromHTMLString:(id)arg1 defaultAttributes:(id)arg2 ;
+(id)displayDelegateWithDefaultAttributes:(id)arg1 ;
-(void)setDelegate:(id<MPUHTMLParserDelegate>)arg1 ;
-(id<MPUHTMLParserDelegate>)delegate;
-(id)attributedStringForHTMLString:(id)arg1 error:(id*)arg2 ;
@end
