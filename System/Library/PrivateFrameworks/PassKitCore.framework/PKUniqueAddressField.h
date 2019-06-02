/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface PKUniqueAddressField : NSObject {

	NSString* _key;
	long long _index;
	NSError* _error;
	NSString* _invalidText;

}

@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * invalidText;              //@synthesize invalidText=_invalidText - In the implementation block
-(void)setInvalidText:(NSString *)arg1 ;
-(NSString *)invalidText;
-(NSString *)key;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
