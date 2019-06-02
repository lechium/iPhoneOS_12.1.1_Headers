/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagDataSourceProtocol;
@class NSString;

@interface AMSBagValue : NSObject {

	id<AMSBagDataSourceProtocol> _dataSource;
	NSString* _key;
	unsigned long long _valueType;

}

@property (assign,nonatomic,__weak) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * key;                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long valueType;                                //@synthesize valueType=_valueType - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
+(id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3 ;
+(id)globalBagValueStorage;
+(id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2 ;
+(BOOL)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2 ;
+(id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
-(unsigned long long)valueType;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
-(id)valueWithError:(id*)arg1 ;
-(void)setValueType:(unsigned long long)arg1 ;
-(id)valuePromise;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 ;
-(BOOL)isLoaded;
-(NSString *)key;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end
