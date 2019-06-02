/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSArray, NSMutableArray, NSMutableIndexSet;

@interface _MFCombineLatestObservableSubscription : NSObject {

	NSLock* _lock;
	NSArray* _observables;
	NSMutableArray* _results;
	NSMutableArray* _tokens;
	NSMutableIndexSet* _activeIndexes;
	NSMutableIndexSet* _silentIndexes;

}

@property (nonatomic,retain) NSLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSArray * observables;                            //@synthesize observables=_observables - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokens;                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * activeIndexes;              //@synthesize activeIndexes=_activeIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * silentIndexes;              //@synthesize silentIndexes=_silentIndexes - In the implementation block
-(id)initWithObservables:(id)arg1 ;
-(NSArray *)observables;
-(id)subscribe:(id)arg1 ;
-(void)setTokens:(NSMutableArray *)arg1 ;
-(void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3 ;
-(void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2 ;
-(void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3 ;
-(void)setObservables:(NSArray *)arg1 ;
-(NSMutableIndexSet *)activeIndexes;
-(void)setActiveIndexes:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)silentIndexes;
-(void)setSilentIndexes:(NSMutableIndexSet *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(NSLock *)lock;
-(NSMutableArray *)tokens;
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
@end
