/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCInterestToken : NSObject {

	/*^block*/id _removeInterestBlock;

}

@property (nonatomic,copy) id removeInterestBlock;              //@synthesize removeInterestBlock=_removeInterestBlock - In the implementation block
+(id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
+(id)interestTokenWithRemoveInterestBlock:(/*^block*/id)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
-(id)removeInterestBlock;
-(void)setRemoveInterestBlock:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

