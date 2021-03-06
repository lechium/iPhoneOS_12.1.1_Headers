/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * matchedCSSRules; 
@property (nonatomic,retain) RWIProtocolCSSStyle * inlineStyle; 
-(void)setMatchedCSSRules:(NSArray *)arg1 ;
-(id)initWithMatchedCSSRules:(id)arg1 ;
-(void)setInlineStyle:(RWIProtocolCSSStyle *)arg1 ;
-(RWIProtocolCSSStyle *)inlineStyle;
-(NSArray *)matchedCSSRules;
@end

