/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_semaphore;
@class NSString, NSDictionary, NSMutableDictionary, NSObject, NSArray;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration> {

	NSString* _specificationVersion;
	/*^block*/id _objectValueClassBlock;
	/*^block*/id _valueClassBlock;
	NSDictionary* _json;
	NSMutableDictionary* _objects;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSArray* _keys;
	unsigned long long _count;

}

@property (nonatomic,readonly) id objectValueClassBlock;                                //@synthesize objectValueClassBlock=_objectValueClassBlock - In the implementation block
@property (nonatomic,readonly) id valueClassBlock;                                      //@synthesize valueClassBlock=_valueClassBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * json;                                     //@synthesize json=_json - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * objects;                           //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSArray * keys;                                          //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                                //@synthesize count=_count - In the implementation block
-(id)jsonDictionary;
-(NSMutableDictionary *)objects;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(NSDictionary *)json;
-(id)specificationVersion;
-(id)objectValueClassBlock;
-(id)valueClassBlock;
-(id)initWithValueClassBlock:(/*^block*/id)arg1 objectValueClassBlock:(/*^block*/id)arg2 purgeBlock:(/*^block*/id)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5 ;
-(id)NSDictionary;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SX13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)allObjects;
-(id)description;
-(id)allKeys;
-(NSArray *)keys;
-(id)keyAtIndex:(unsigned long long)arg1 ;
@end

