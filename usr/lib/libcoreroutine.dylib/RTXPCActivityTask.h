/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RTXPCActivityTask : NSObject {

	NSString* _identifier;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) id handler;                         //@synthesize handler=_handler - In the implementation block
-(id)initWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)identifier;
-(id)handler;
@end

