/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface HFDictionaryCombinator : NSObject {

	NSSet* _keysToReconcile;
	NSSet* _keysToSkip;

}

@property (nonatomic,copy) NSSet * keysToReconcile;              //@synthesize keysToReconcile=_keysToReconcile - In the implementation block
@property (nonatomic,copy) NSSet * keysToSkip;                   //@synthesize keysToSkip=_keysToSkip - In the implementation block
+(BOOL)_isKindOfContainerClass:(id)arg1 ;
-(void)setKeysToSkip:(NSSet *)arg1 ;
-(id)combineResultDictionary:(id)arg1 withResultDictionary:(id)arg2 reconcilationHandler:(/*^block*/id)arg3 ;
-(NSSet *)keysToSkip;
-(NSSet *)keysToReconcile;
-(void)_reconcileKey:(id)arg1 fromDictionary:(id)arg2 andDictionary:(id)arg3 intoResultDictionary:(id)arg4 withReconcilationHandler:(/*^block*/id)arg5 ;
-(id)_mergeVal1:(id)arg1 withVal2:(id)arg2 ;
-(void)setKeysToReconcile:(NSSet *)arg1 ;
@end
