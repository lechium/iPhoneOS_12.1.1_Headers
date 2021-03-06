/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CATStateMachineEvent : NSObject {

	id _trigger;
	id _context;

}

@property (nonatomic,readonly) id trigger;              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) id context;              //@synthesize context=_context - In the implementation block
+(id)eventWithTrigger:(id)arg1 context:(id)arg2 ;
-(id)initWithEventTrigger:(id)arg1 context:(id)arg2 ;
-(id)description;
-(id)context;
-(id)trigger;
@end

