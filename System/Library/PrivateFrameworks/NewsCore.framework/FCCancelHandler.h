/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>

@class NSString;

@interface FCCancelHandler : NSObject <FCOperationCanceling> {

	/*^block*/id _cancelBlock;
	id _weakTarget;
	id _strongTarget;
	SEL _selector;

}

@property (nonatomic,copy) id cancelBlock;                          //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,nonatomic,__weak) id weakTarget;                  //@synthesize weakTarget=_weakTarget - In the implementation block
@property (nonatomic,retain) id strongTarget;                       //@synthesize strongTarget=_strongTarget - In the implementation block
@property (assign,nonatomic) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cancelHandlerWithBlock:(/*^block*/id)arg1 ;
+(id)cancelHandlerWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)cancelHandlerWithStrongTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithStrongTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)strongTarget;
-(id)weakTarget;
-(void)setWeakTarget:(id)arg1 ;
-(void)setStrongTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)cancel;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

