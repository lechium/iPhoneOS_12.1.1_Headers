/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NFCallbackScope : NSObject {

	unsigned long long _scope;
	NSArray* _names;

}

@property (nonatomic,readonly) unsigned long long scope;              //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSArray * names;                       //@synthesize names=_names - In the implementation block
-(NSArray *)names;
-(id)initWithScope:(unsigned long long)arg1 names:(id)arg2 ;
-(unsigned long long)scope;
@end

