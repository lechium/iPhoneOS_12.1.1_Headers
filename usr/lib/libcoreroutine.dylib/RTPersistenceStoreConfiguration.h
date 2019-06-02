/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTPersistenceStore;

@interface RTPersistenceStoreConfiguration : NSObject {

	BOOL _readOnly;
	NSString* _name;
	RTPersistenceStore* _store;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (getter=isReadOnly,readonly) BOOL readOnly;                //@synthesize readOnly=_readOnly - In the implementation block
@property (__weak,readonly) RTPersistenceStore * store;              //@synthesize store=_store - In the implementation block
-(RTPersistenceStore *)store;
-(BOOL)isReadOnly;
-(id)initWithName:(id)arg1 readOnly:(BOOL)arg2 store:(id)arg3 ;
-(id)init;
-(NSString *)name;
@end

