/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASArgParser, NSDictionary, NSArray;

@interface _PASArgToplevelHandlerParams : NSObject {

	_PASArgParser* _parser;
	NSDictionary* _options;
	NSArray* _positionalArguments;

}

@property (nonatomic,readonly) _PASArgParser * parser;                     //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * positionalArguments;              //@synthesize positionalArguments=_positionalArguments - In the implementation block
-(_PASArgParser *)parser;
-(NSArray *)positionalArguments;
-(id)initWithParser:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3 ;
-(NSDictionary *)options;
@end

