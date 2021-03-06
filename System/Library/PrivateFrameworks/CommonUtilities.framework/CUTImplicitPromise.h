/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTPromise;

@interface CUTImplicitPromise : NSObject {

	CUTPromise* _promise;

}

@property (nonatomic,retain) CUTPromise * promise;              //@synthesize promise=_promise - In the implementation block
-(id)initWithPromise:(id)arg1 ;
-(void)registerFulfillBlock:(/*^block*/id)arg1 ;
-(void)setPromise:(CUTPromise *)arg1 ;
-(CUTPromise *)promise;
@end

