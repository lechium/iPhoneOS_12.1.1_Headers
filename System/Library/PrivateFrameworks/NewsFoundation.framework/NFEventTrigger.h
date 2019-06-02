/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface NFEventTrigger : NSObject {

	BOOL _fireOnce;
	BOOL _fireOnAny;
	NSString* _key;
	NSSet* _events;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSSet * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) id block;                         //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) BOOL fireOnce;                    //@synthesize fireOnce=_fireOnce - In the implementation block
@property (nonatomic,readonly) BOOL fireOnAny;                   //@synthesize fireOnAny=_fireOnAny - In the implementation block
-(NSSet *)events;
-(id)initWithKey:(id)arg1 fireOnce:(BOOL)arg2 fireOnAny:(BOOL)arg3 events:(id)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)fireOnAny;
-(BOOL)fireOnce;
-(NSString *)key;
-(id)block;
@end
