/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NFCallbackStore : NSObject {

	NSMutableDictionary* _store;

}

@property (nonatomic,readonly) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
-(NSMutableDictionary *)store;
-(void)storeCallbackDefinition:(id)arg1 forKey:(id)arg2 scope:(id)arg3 ;
-(id)lookupForKey:(id)arg1 name:(id)arg2 ;
-(id)init;
@end
