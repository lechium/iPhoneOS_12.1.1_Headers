/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGDSuggestManagerInterface : NSObject
+(id)xpcInterfaceForProtocol:(id)arg1 ;
+(void)_registerWhitelistBlock:(/*^block*/id)arg1 forProtocol:(id)arg2 ;
+(void)_addSGXPCResponseToReplyWhitelistForMethods:(objc_method_description*)arg1 count:(unsigned)arg2 interface:(id)arg3 ;
+(void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2 ;
+(void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3 ;
+(void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3 ;
+(void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3 ;
+(id)xpcInterface;
+(void)initialize;
@end
