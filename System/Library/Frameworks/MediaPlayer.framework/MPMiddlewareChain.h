/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSEnumerator;

@interface MPMiddlewareChain : NSObject {

	NSEnumerator* _middlewareEnumerator;

}
+(id)builderProxyForProtocol:(id)arg1 ;
+(void)_addBuilderProtocol:(id)arg1 ;
+(void)registerReturnType:(const char*)arg1 returnValueBlock:(id)arg2 ;
-(id)initWithMiddleware:(id)arg1 protocol:(id)arg2 ;
-(id)nextObject;
@end

