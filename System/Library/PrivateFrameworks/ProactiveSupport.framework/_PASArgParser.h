/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableArray;

@interface _PASArgParser : NSObject {

	NSMutableArray* _registeredSubcommands;
	NSMutableArray* _registeredOptions;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSMutableArray * registeredSubcommands;              //@synthesize registeredSubcommands=_registeredSubcommands - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredOptions;                  //@synthesize registeredOptions=_registeredOptions - In the implementation block
@property (nonatomic,readonly) id handler;                                          //@synthesize handler=_handler - In the implementation block
+(id)parserWithHandler:(/*^block*/id)arg1 ;
+(id)boolValueForArgument:(id)arg1 error:(id*)arg2 ;
+(id)numberValueForArgument:(id)arg1 error:(id*)arg2 ;
+(id)enumValueForArgument:(id)arg1 withMapping:(id)arg2 error:(id*)arg3 ;
+(id)simpleParserWithHelpGenerator:(/*^block*/id)arg1 version:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)naiveUsageHelpWithPositionalArgString:(id)arg1 ;
-(void)registerOption:(id)arg1 ;
-(id)optionShortHelp;
-(id)optionLongHelp;
-(NSMutableArray *)registeredOptions;
-(id)subcommandLongHelp;
-(id)_argumentParseTemplate:(id)arg1 longArgs:(option*)arg2 ;
-(void)registerSubcommand:(id)arg1 ;
-(int)invokeHandlerWithArguments:(const char**)arg1 count:(int)arg2 parseErrorCode:(int)arg3 error:(id*)arg4 ;
-(NSMutableArray *)registeredSubcommands;
-(id)description;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
@end

