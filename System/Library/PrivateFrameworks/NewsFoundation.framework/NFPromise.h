/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFPromiseSeal;

@interface NFPromise : NSObject {

	NFPromiseSeal* _seal;

}

@property (nonatomic,retain) NFPromiseSeal * seal;              //@synthesize seal=_seal - In the implementation block
+(id)asVoid:(id)arg1 ;
+(id)asDelay:(double)arg1 onQueue:(id)arg2 withValue:(id)arg3 ;
+(id)asDelay:(double)arg1 onQueue:(id)arg2 withError:(id)arg3 ;
+(id)asDelay:(double)arg1 withValue:(id)arg2 ;
+(id)asDelay:(double)arg1 withError:(id)arg2 ;
+(id)firstly:(/*^block*/id)arg1 ;
+(id)asVoid;
-(void)setSeal:(NFPromiseSeal *)arg1 ;
-(NFPromiseSeal *)seal;
-(id)alwaysOn:(id)arg1 always:(/*^block*/id)arg2 ;
-(id)always:(/*^block*/id)arg1 ;
-(id)initWithResolver:(/*^block*/id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)error:(/*^block*/id)arg1 ;
-(id)thenOn:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)errorOn:(id)arg1 error:(/*^block*/id)arg2 ;
-(id)initWithError:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithValue:(id)arg1 ;
@end
