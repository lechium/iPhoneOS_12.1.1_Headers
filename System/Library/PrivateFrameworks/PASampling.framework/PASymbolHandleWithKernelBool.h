/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASymbolHandle;

@interface PASymbolHandleWithKernelBool : NSObject {

	BOOL _isKernel;
	PASymbolHandle* _symbolHandle;

}

@property (retain) PASymbolHandle * symbolHandle;              //@synthesize symbolHandle=_symbolHandle - In the implementation block
@property (assign) BOOL isKernel;                              //@synthesize isKernel=_isKernel - In the implementation block
-(PASymbolHandle *)symbolHandle;
-(void)setSymbolHandle:(PASymbolHandle *)arg1 ;
-(void)setIsKernel:(BOOL)arg1 ;
-(BOOL)isKernel;
@end

